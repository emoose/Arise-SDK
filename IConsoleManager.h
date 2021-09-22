#pragma once

class IConsoleObject
{

};
class IConsoleVariable : public IConsoleObject
{
	// TODO
};

class IConsoleCommand : public IConsoleObject
{
	// TODO
};

enum EConsoleVariableFlags
{
	ECVF_Default = 0,
	ECVF_Cheat = (1 << 0),
	ECVF_ReadOnly = (1 << 2),
	ECVF_Unregistered = (1 << 3),
	ECVF_CreatedFromIni = (1 << 4),
	ECVF_RenderThreadSafe = (1 << 5),
	ECVF_Scalability = (1 << 6),
	ECVF_ScalabilityGroup = (1 << 7),
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
	virtual void CallAllConsoleVariableSinks() = 0;
	virtual void* RegisterConsoleVariableSink_Handle(void* Command) = 0;
	virtual void UnregisterConsoleVariableSink_Handle(void* Handle) = 0;

	virtual IConsoleCommand* RegisterConsoleCommand(const TCHAR* Name, const TCHAR* Help, void* Command, uint32_t Flags) = 0; // Command = const FConsoleCommandDelegate&
	virtual IConsoleCommand* RegisterConsoleCommand_1(const TCHAR* Name, const TCHAR* Help, void* Command, uint32_t Flags) = 0; // Command = const FConsoleCommandWithArgsDelegate&
	virtual IConsoleCommand* RegisterConsoleCommand_2(const TCHAR* Name, const TCHAR* Help, void* Command, uint32_t Flags) = 0; // Command = const FConsoleCommandWithWorldDelegate&
	virtual IConsoleCommand* RegisterConsoleCommand_3(const TCHAR* Name, const TCHAR* Help, void* Command, uint32_t Flags) = 0; // Command = const FConsoleCommandWithWorldAndArgsDelegate&
	virtual IConsoleCommand* RegisterConsoleCommand_4(const TCHAR* Name, const TCHAR* Help, void* Command, uint32_t Flags) = 0; // Command = const FConsoleCommandWithWorldArgsAndOutputDeviceDelegate&
	virtual IConsoleCommand* RegisterConsoleCommand_5(const TCHAR* Name, const TCHAR* Help, void* Command, uint32_t Flags) = 0; // Command = const FConsoleCommandWithOutputDeviceDelegate&
	virtual IConsoleCommand* RegisterConsoleCommand(const TCHAR* Name, const TCHAR* Help, uint32_t Flags) = 0;

	virtual void UnregisterConsoleObject(IConsoleObject* ConsoleObject, bool bKeepState = true) = 0;
	virtual IConsoleVariable* FindConsoleVariable(const TCHAR* Name) const = 0;
	virtual IConsoleObject* FindConsoleObject(const TCHAR* Name) const = 0;

	// there's a bunch more but those aren't too important
};
