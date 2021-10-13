#pragma once

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

	ECVF_SetByConstructor = 0x00000000,
	ECVF_SetByScalability = 0x01000000,
	ECVF_SetByGameSetting = 0x02000000,
	ECVF_SetByProjectSetting = 0x03000000,
	ECVF_SetBySystemSettingsIni = 0x04000000,
	ECVF_SetByDeviceProfile = 0x05000000,
	ECVF_SetByConsoleVariablesIni = 0x06000000,
	ECVF_SetByCommandline = 0x07000000,
	ECVF_SetByCode = 0x08000000,
	ECVF_SetByConsole = 0x09000000,
};

template <class T>
class TConsoleVariableData
{
public:
	T ShadowedValue[2];
};

class IConsoleObject
{
public:
	virtual ~IConsoleObject() = 0;
	virtual const wchar_t* GetHelp() = 0;
	virtual void SetHelp(const wchar_t* Value) = 0;
	virtual EConsoleVariableFlags GetFlags() = 0;
	virtual void SetFlags(const EConsoleVariableFlags Value) = 0;
	virtual class IConsoleVariable* AsVariable() = 0;
	virtual bool IsVariableInt() = 0;
	virtual TConsoleVariableData<int>* AsVariableInt() = 0;
	virtual TConsoleVariableData<float>* AsVariableFloat() = 0;
	virtual TConsoleVariableData<FString>* AsVariableString() = 0;
	virtual class IConsoleCommand* AsCommand() = 0;
	virtual void Release() = 0;
};

class IConsoleVariable : public IConsoleObject
{
public:
	virtual void Set(const wchar_t* InValue, EConsoleVariableFlags SetBy) = 0;
	virtual int GetInt() = 0;
	virtual float GetFloat() = 0;
	virtual FString* GetString(FString* result) = 0;
	virtual void SetOnChangedCallback(const void* Callback) = 0; // TBaseDelegate<void, IConsoleVariable*>*
};

class IConsoleCommand : public IConsoleObject
{
public:
	virtual bool Execute(const void* Args, UWorld* InWorld, FOutputDevice* OutputDevice) = 0; // Args = TArray<FString, FDefaultAllocator>*
};

class FConsoleVariableBase : public IConsoleVariable
{
public:
	FString Help;
	TEnumAsByte<EConsoleVariableFlags> Flags;
	void* OnChangedCallback0;
	void* OnChangedCallback1;
	bool bWarnedAboutThreadSafety;
};

template <class T>
class FConsoleVariableRef : public FConsoleVariableBase
{
public:
	T* RefValue;
	T MainValue;
};

struct IConsoleManager
{
	virtual IConsoleVariable* RegisterConsoleVariable(const TCHAR* Name, int32_t DefaultValue, const TCHAR* Help, uint32_t Flags) = 0;
	virtual IConsoleVariable* RegisterConsoleVariable(const TCHAR* Name, float DefaultValue, const TCHAR* Help, uint32_t Flags) = 0;
	virtual IConsoleVariable* RegisterConsoleVariable(const TCHAR* Name, const FString& DefaultValue, const TCHAR* Help, uint32_t Flags) = 0;
	virtual FConsoleVariableRef<int>* RegisterConsoleVariableRef(const TCHAR* Name, int32_t& RefValue, const TCHAR* Help, uint32_t Flags) = 0;
	virtual FConsoleVariableRef<float>* RegisterConsoleVariableRef(const TCHAR* Name, float& RefValue, const TCHAR* Help, uint32_t Flags) = 0;
	virtual FConsoleVariableRef<bool>* RegisterConsoleVariableRef(const TCHAR* Name, bool& RefValue, const TCHAR* Help, uint32_t Flags) = 0;
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
