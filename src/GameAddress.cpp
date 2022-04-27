#include "pch.h"

GameAddress::GameAddress(std::string_view Name, std::initializer_list<uint8_t> Signature, int Offset, GameAddressType Type, GameAddress* SearchStartAddr, bool MultipleMatches)
  : Name(Name), Signature(Signature), Offset(Offset), Type(Type), SearchStartAddr(SearchStartAddr), MultipleMatches(MultipleMatches)
{
  // If we're using a SignatureStartAddr, make sure it's added before us
  if (SearchStartAddr)
    AddressManager::Instance().Add(SearchStartAddr);

  AddressManager::Instance().Add(this);
}

GameAddress::GameAddress(std::string_view Name, std::initializer_list<uint8_t> Signature, std::initializer_list<uint8_t> SignatureAlternate, int Offset, GameAddressType Type, GameAddress* SearchStartAddr, bool MultipleMatches)
  : Name(Name), Signature(Signature), SignatureAlternate(SignatureAlternate), Offset(Offset), Type(Type), SearchStartAddr(SearchStartAddr), MultipleMatches(MultipleMatches)
{
  // If we're using a SignatureStartAddr, make sure it's added before us
  if (SearchStartAddr)
    AddressManager::Instance().Add(SearchStartAddr);

  AddressManager::Instance().Add(this);
}

// Returns whether all addresses were found
// Count of addresses that were found can be found with .NumValid()
bool AddressManager::SearchAddresses(void* Base, size_t BaseLength)
{
  uint8_t* base = (uint8_t*)Base;
  _numValid = 0;

  bool foundAll = true;
  for (GameAddress* address : _addresses)
  {
    uint8_t* StartAddr = base;
    size_t AddrLength = BaseLength;
    if (address->SearchStartAddr)
    {
      // Addr wants our search to start from another addrs position
      if (!address->SearchStartAddr->_matches.size())
      {
        foundAll = false;
        continue;
      }
      StartAddr = address->SearchStartAddr->Get(0);
      AddrLength = BaseLength - (StartAddr - base);
    }

    uint8_t* foundAddr = SearchSignature(StartAddr, AddrLength, address->Signature);
    if (!foundAddr) // try alternate sig, but only for first hit
      foundAddr = SearchSignature(StartAddr, AddrLength, address->SignatureAlternate);

    while (foundAddr)
    {
      if (address->Type == GameAddressType::Pointer)
        address->_matches.push_back(foundAddr + address->Offset);
      else
      {
        // Offset, calculate as addr + N + offsetValue
        auto* addr = foundAddr + address->Offset;
        int addrSize = int(address->Type);
        int offset = *(int32_t*)addr;
        address->_matches.push_back(addr + addrSize + offset);
      }

      if (!address->MultipleMatches)
        break;

      StartAddr = foundAddr + address->Signature.size();
      AddrLength = BaseLength - (StartAddr - base);
      foundAddr = SearchSignature(StartAddr, AddrLength, address->Signature);
    }

    if (address->_matches.size() <= 0)
      foundAll = false;
    else
      _numValid++;
  }

  return foundAll;
}
