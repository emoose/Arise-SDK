#include "pch.h"

bool FileExists(const WCHAR* Filename)
{
  DWORD dwAttrib = GetFileAttributesW(Filename);
  return (dwAttrib != INVALID_FILE_ATTRIBUTES && !(dwAttrib & FILE_ATTRIBUTE_DIRECTORY));
}

bool DirExists(const WCHAR* DirPath)
{
  DWORD dwAttrib = GetFileAttributesW(DirPath);
  return (dwAttrib != INVALID_FILE_ATTRIBUTES && (dwAttrib & FILE_ATTRIBUTE_DIRECTORY) == FILE_ATTRIBUTE_DIRECTORY);
}

bool INI_GetBool(const WCHAR* IniPath, const WCHAR* Section, const WCHAR* Key, bool DefaultValue)
{
  WCHAR IniData[256];
  bool retVal = false;
  if (GetPrivateProfileString(Section, Key, DefaultValue ? L"true" : L"false", IniData, 256, IniPath) > 0)
    retVal = (wcscmp(IniData, L"true") == 0 || wcscmp(IniData, L"1") == 0 || wcscmp(IniData, L"yes") == 0);
  return retVal;
}

float INI_GetFloat(const WCHAR* IniPath, const WCHAR* Section, const WCHAR* Key, float DefaultValue)
{
  WCHAR IniData[256];
  float retVal = false;
  if (GetPrivateProfileString(Section, Key, std::to_wstring(DefaultValue).c_str(), IniData, 256, IniPath) > 0)
    retVal = std::stof(IniData);
  return retVal;
}

// Code to get main window HWND from https://stackoverflow.com/questions/1888863/how-to-get-main-window-handle-from-process-id
struct handle_data {
  DWORD process_id;
  HWND window_handle;
};

BOOL is_main_window(HWND handle)
{
  return GetWindow(handle, GW_OWNER) == (HWND)0 && IsWindowVisible(handle);
}

BOOL CALLBACK enum_windows_callback(HWND handle, LPARAM lParam)
{
  handle_data& data = *(handle_data*)lParam;
  if (data.window_handle)
    return TRUE;

  DWORD process_id = 0;
  GetWindowThreadProcessId(handle, &process_id);
  if (data.process_id != process_id || !is_main_window(handle))
    return TRUE;

  data.window_handle = handle;
  return FALSE;
}

HWND FindMainWindow(DWORD process_id)
{
  handle_data data;
  data.process_id = process_id;
  data.window_handle = 0;

  EnumWindows(enum_windows_callback, (LPARAM)&data);
  return data.window_handle;
}

// https://rosettacode.org/wiki/CRC-32#Implementation_2
uint32_t
rc_crc32(uint32_t crc, const char* buf, size_t len)
{
  static uint32_t table[256];
  static int have_table = 0;
  uint32_t rem;
  uint8_t octet;
  int i, j;
  const char* p, * q;

  /* This check is not thread safe; there is no mutex. */
  if (have_table == 0) {
    /* Calculate CRC table. */
    for (i = 0; i < 256; i++) {
      rem = i;  /* remainder from polynomial division */
      for (j = 0; j < 8; j++) {
        if (rem & 1) {
          rem >>= 1;
          rem ^= 0xedb88320;
        }
        else
          rem >>= 1;
      }
      table[i] = rem;
    }
    have_table = 1;
  }

  crc = ~crc;
  q = buf + len;
  for (p = buf; p < q; p++) {
    octet = *p;  /* Cast to unsigned octet. */
    crc = (crc >> 8) ^ table[(crc & 0xff) ^ octet];
  }
  return ~crc;
}


uint8_t* SearchSignature(uint8_t* Base, size_t BaseLength, const std::vector<uint8_t>& Signature)
{
  for (size_t i = 0; i < BaseLength; i++)
  {
    bool match = true;
    for (size_t j = 0; j < Signature.size(); j++)
    {
      if (Signature[j] == 0)
        continue;
      if (Signature[j] != Base[i + j])
      {
        match = false;
        break;
      }
    }

    if (match)
      return &Base[i];
  }
  return nullptr;
}

// Returns whether all addresses were found
// Count of addresses that were found can be found with .NumValid()
bool AddressManager::SearchAddresses(uint8_t* Base, size_t BaseLength)
{
  _numValid = 0;
  for (GameAddress& address : _addresses)
  {
    uint8_t* StartAddr = Base;
    size_t AddrLength = BaseLength;
    if (!address.SignatureStartAddr.empty())
    {
      // Addr wants our search to start from another addrs position
      auto addr = (*this)[address.SignatureStartAddr];
      StartAddr = addr.Address;
      AddrLength = BaseLength - (StartAddr - Base);
    }

    uint8_t* foundAddr = SearchSignature(StartAddr, AddrLength, address.Signature);
    if (!foundAddr)
      return false;

    address.Address = foundAddr + address.Offset;
    _numValid++;
  }

  return true;
}
