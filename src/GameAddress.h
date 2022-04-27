#pragma once

enum class GameAddressType
{
  // Pointer: This addr just points to anything that matches our signature
  Pointer = 0,
  // OffsetN - This addr should be taken as an offset, resulting in addr + N + offset
  Offset4 = 4,
  Offset5 = 5,
  Offset6 = 6,
  Offset7 = 7,
  Offset8 = 8
};

class GameAddress
{
  friend class AddressManager;
  // Addresses that match the signature
  std::vector<uint8_t*> _matches;

public:
  // Name to use to refer to this address
  std::string Name;
  // Signature to search for to find this address, 00 bytes are wildcard
  std::vector<uint8_t> Signature;
  std::vector<uint8_t> SignatureAlternate;

  // Offset from the signature to where this address is found
  int Offset;
  // Type of GameAddress
  GameAddressType Type;
  // Which GameAddress to use to start signature search from
  GameAddress* SearchStartAddr;
  // If we should try searching for more than 1 match
  bool MultipleMatches;

  GameAddress(std::string_view Name, std::initializer_list<uint8_t> Signature, int Offset, GameAddressType Type = GameAddressType::Pointer, GameAddress* SearchStartAddr = nullptr, bool MultipleMatches = false);

  GameAddress(std::string_view Name, std::initializer_list<uint8_t> Signature, std::initializer_list<uint8_t> SignatureAlternate, int Offset, GameAddressType Type = GameAddressType::Pointer, GameAddress* SearchStartAddr = nullptr, bool MultipleMatches = false);

  uint8_t* Get(int MatchIndex = 0)
  {
    return _matches[MatchIndex];
  }
};

template <typename T>
class AutoGameAddress : public GameAddress
{
public:
  AutoGameAddress(std::string_view Name, std::initializer_list<uint8_t> Signature, int Offset, GameAddressType Type = GameAddressType::Pointer, GameAddress* SearchStartAddr = nullptr, bool MultipleMatches = false)
    : GameAddress(Name, Signature, Offset, Type, SearchStartAddr, MultipleMatches)
  {}
  AutoGameAddress(std::string_view Name, std::initializer_list<uint8_t> Signature, std::initializer_list<uint8_t> SignatureAlternate, int Offset, GameAddressType Type = GameAddressType::Pointer, GameAddress * SearchStartAddr = nullptr, bool MultipleMatches = false)
    : GameAddress(Name, Signature, SignatureAlternate, Offset, Type, SearchStartAddr, MultipleMatches)
  {}

  T Get(int MatchIndex = 0)
  {
    return (T)GameAddress::Get(MatchIndex);
  }
};

class AddressManager
{
  std::vector<GameAddress*> _addresses;
  int _numValid = 0;

public:
  AddressManager() {}

  bool Contains(GameAddress* Address)
  {
    return std::find(_addresses.begin(), _addresses.end(), Address) != _addresses.end();
  }

  void Add(GameAddress* Address)
  {
    if (!Contains(Address))
      _addresses.push_back(Address);
  }

  static auto& Instance() {
    static AddressManager mgr;
    return mgr;
  }

  int Num()
  {
    return _addresses.size();
  }
  int NumValid()
  {
    return _numValid;
  }
  std::vector<GameAddress*> GetInvalid()
  {
    std::vector<GameAddress*> invalid;
    for (GameAddress* addr : _addresses)
      if (addr->_matches.size() <= 0)
        invalid.push_back(addr);

    return invalid;
  }

  inline GameAddress& operator[](std::string_view Name)
  {
    for (auto& address : _addresses)
      if (address->Name == Name)
        return *address;

    throw std::out_of_range("GameAddress not found?");
  };

  inline GameAddress& operator[](int i)
  {
    return *_addresses[i];
  };

  inline const GameAddress& operator[](std::string_view Name) const
  {
    for (auto& address : _addresses)
      if (address->Name == Name)
        return *address;

    throw std::out_of_range("GameAddress not found?");
  };

  inline const GameAddress& operator[](int i) const
  {
    return *_addresses[i];
  };

  bool SearchAddresses(void* Base, size_t BaseLength);
};