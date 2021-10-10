#pragma once

bool FileExists(const WCHAR* Filename);
bool DirExists(const WCHAR* DirPath);
HWND FindMainWindow(DWORD process_id);
bool INI_GetBool(const WCHAR* IniPath, const WCHAR* Section, const WCHAR* Key, bool DefaultValue);
float INI_GetFloat(const WCHAR* IniPath, const WCHAR* Section, const WCHAR* Key, float DefaultValue);
uint32_t rc_crc32(uint32_t crc, const char* buf, size_t len);

enum class AutoGameAddressType
{
  // Pointer: This addr just points to anything that matches our signature
  Pointer = 0,
  // OffsetN - This addr should be taken as an offset, resulting in addr + N + offset
  Offset4 = 4,
  Offset6 = 6,
  Offset8 = 8
};

class AutoGameAddress
{
  friend class AddressManager;
  // Addresses that match the signature
  std::vector<uint8_t*> _matches;

public:
  // Name to use to refer to this address
  std::string Name;
  // Signature to search for to find this address, 00 bytes are wildcard
  std::vector<uint8_t> Signature;
  // Offset from the signature to where this address is found
  int Offset;
  // Type of AutoGameAddress
  AutoGameAddressType Type;
  // Which AutoGameAddress to use to start signature search from
  AutoGameAddress* SignatureStartAddr;
  // If we should try searching for more than 1 match
  bool MultipleMatches;

  AutoGameAddress(std::string_view Name, std::initializer_list<uint8_t> Signature, int Offset, AutoGameAddressType Type = AutoGameAddressType::Pointer, AutoGameAddress* SignatureStartAddr = nullptr, bool MultipleMatches = false);

  uint8_t* Get(int MatchIndex = 0)
  {
    return _matches[MatchIndex];
  }
};

class AddressManager
{
  std::vector<AutoGameAddress*> _addresses;
  int _numValid = 0;

public:
  AddressManager() {}

  bool Contains(AutoGameAddress* Address)
  {
    return std::find(_addresses.begin(), _addresses.end(), Address) != _addresses.end();
  }

  void Add(AutoGameAddress* Address)
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
  std::vector<AutoGameAddress*> GetInvalid()
  {
    std::vector<AutoGameAddress*> invalid;
    for (AutoGameAddress* addr : _addresses)
      if (addr->_matches.size() <= 0)
        invalid.push_back(addr);

    return invalid;
  }

  inline AutoGameAddress& operator[](std::string_view Name)
  {
    for (auto& address : _addresses)
      if (address->Name == Name)
        return *address;

    throw std::out_of_range("GameAddress not found?");
  };

  inline AutoGameAddress& operator[](int i)
  {
    return *_addresses[i];
  };

  inline const AutoGameAddress& operator[](std::string_view Name) const
  {
    for (auto& address : _addresses)
      if (address->Name == Name)
        return *address;

    throw std::out_of_range("GameAddress not found?");
  };

  inline const AutoGameAddress& operator[](int i) const
  {
    return *_addresses[i];
  };

  bool SearchAddresses(void* Base, size_t BaseLength);
};