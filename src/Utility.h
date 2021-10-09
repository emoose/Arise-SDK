#pragma once

bool FileExists(const WCHAR* Filename);
bool DirExists(const WCHAR* DirPath);
HWND FindMainWindow(DWORD process_id);
bool INI_GetBool(const WCHAR* IniPath, const WCHAR* Section, const WCHAR* Key, bool DefaultValue);
float INI_GetFloat(const WCHAR* IniPath, const WCHAR* Section, const WCHAR* Key, float DefaultValue);
uint32_t rc_crc32(uint32_t crc, const char* buf, size_t len);

struct GameAddress
{
  // Name to use to refer to this address
  std::string Name;
  // Signature to search for to find this address, 00 bytes are wildcard
  std::vector<uint8_t> Signature;
  // Offset from the signature to where this address is found
  int Offset;
  // Which GameAddress to use to start signature search from
  std::string SignatureStartAddr;
  // Where the signature + offset has been located, nullptr if not found
  uint8_t* Address = nullptr;
};

class AddressManager
{
  std::vector<GameAddress> _addresses;
  int _numValid = 0;

public:
  AddressManager(std::initializer_list<GameAddress> Addresses) : _addresses(Addresses) {
    for (auto& addr : _addresses)
    {
      std::replace(addr.Name.begin(), addr.Name.end(), ':', '_');
    }
  }

  int Num()
  {
    return _addresses.size();
  }
  int NumValid()
  {
    return _numValid;
  }

  inline GameAddress& operator[](std::string_view Name)
  {
    std::string name = std::string(Name);
    std::replace(name.begin(), name.end(), ':', '_');

    for (auto& address : _addresses)
      if (address.Name == name)
        return address;

    throw std::out_of_range("GameAddress not found?");
  };

  inline GameAddress& operator[](int i)
  {
    return _addresses[i];
  };

  inline const GameAddress& operator[](std::string_view Name) const
  {
    std::string name = std::string(Name);
    std::replace(name.begin(), name.end(), ':', '_');

    for (auto& address : _addresses)
      if (address.Name == name)
        return address;

    throw std::out_of_range("GameAddress not found?");
  };

  inline const GameAddress& operator[](int i) const
  {
    return _addresses[i];
  };

  bool SearchAddresses(uint8_t* Base, size_t BaseLength);
};
