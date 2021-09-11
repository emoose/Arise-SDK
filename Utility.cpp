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
