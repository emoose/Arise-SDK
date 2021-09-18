#pragma once

class IConsoleVariable
{
	// TODO
};

struct IConsoleManager
{
	virtual IConsoleVariable* RegisterConsoleVariable(const TCHAR* Name, int32_t DefaultValue, const TCHAR* Help, uint32_t Flags) = 0;
	virtual IConsoleVariable* RegisterConsoleVariable(const TCHAR* Name, float DefaultValue, const TCHAR* Help, uint32_t Flags) = 0;
	virtual IConsoleVariable* RegisterConsoleVariable(const TCHAR* Name, const FString& DefaultValue, const TCHAR* Help, uint32_t Flags) = 0;
	virtual IConsoleVariable* RegisterConsoleVariableRef(const TCHAR* Name, int32_t& RefValue, const TCHAR* Help, uint32_t Flags) = 0;
	virtual IConsoleVariable* RegisterConsoleVariableRef(const TCHAR* Name, float& RefValue, const TCHAR* Help, uint32_t Flags) = 0;
	virtual IConsoleVariable* RegisterConsoleVariableRef(const TCHAR* Name, bool& RefValue, const TCHAR* Help, uint32_t Flags) = 0;
	virtual IConsoleVariable* RegisterConsoleVariableBitRef(const TCHAR* CVarName, const TCHAR* FlagName, uint32_t BitNumber, uint8_t* Force0MaskPtr, uint8_t* Force1MaskPtr, const TCHAR* Help, uint32_t Flags) = 0;

	// there's a bunch more but those aren't too important
};
