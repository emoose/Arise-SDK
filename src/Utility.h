#pragma once

bool FileExists(const WCHAR* Filename);
bool DirExists(const WCHAR* DirPath);
HWND FindMainWindow(DWORD process_id);
bool INI_GetBool(const WCHAR* IniPath, const WCHAR* Section, const WCHAR* Key, bool DefaultValue);
float INI_GetFloat(const WCHAR* IniPath, const WCHAR* Section, const WCHAR* Key, float DefaultValue);
uint32_t rc_crc32(uint32_t crc, const char* buf, size_t len);
uint8_t* SearchSignature(uint8_t* Base, size_t BaseLength, const std::vector<uint8_t>& Signature);
