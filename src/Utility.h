#pragma once

bool FileExists(const WCHAR* Filename);
bool DirExists(const WCHAR* DirPath);
HWND FindMainWindow(DWORD process_id);
bool INI_GetBool(const WCHAR* IniPath, const WCHAR* Section, const WCHAR* Key, bool DefaultValue);
float INI_GetFloat(const WCHAR* IniPath, const WCHAR* Section, const WCHAR* Key, float DefaultValue);
uint32_t rc_crc32(uint32_t crc, const char* buf, size_t len);

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
  // Which GameAddress to use to start signature search from
  std::string SignatureStartAddr;
  // If we should try searching for more than 1 match
  bool MultipleMatches;

  AutoGameAddress(std::string_view Name, std::initializer_list<uint8_t> Signature, int Offset, std::string_view SignatureStartAddr = "", bool MultipleMatches = false);

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

  void Add(AutoGameAddress* Address)
  {
    std::replace(Address->Name.begin(), Address->Name.end(), ':', '_');
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
    std::string name = std::string(Name);
    std::replace(name.begin(), name.end(), ':', '_');

    for (auto& address : _addresses)
      if (address->Name == name)
        return *address;

    throw std::out_of_range("GameAddress not found?");
  };

  inline AutoGameAddress& operator[](int i)
  {
    return *_addresses[i];
  };

  inline const AutoGameAddress& operator[](std::string_view Name) const
  {
    std::string name = std::string(Name);
    std::replace(name.begin(), name.end(), ':', '_');

    for (auto& address : _addresses)
      if (address->Name == name)
        return *address;

    throw std::out_of_range("GameAddress not found?");
  };

  inline const AutoGameAddress& operator[](int i) const
  {
    return *_addresses[i];
  };

  bool SearchAddresses(void* Base, size_t BaseLength);
};