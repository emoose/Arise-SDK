
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.GetUMGDebugHudInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UUMG_GameDebugHUD_Interface_C> DebugHUD                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemodeDevelop_C::GetUMGDebugHudInterface(TScriptInterface<class UUMG_GameDebugHUD_Interface_C>* DebugHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.GetUMGDebugHudInterface");

	ABP_AriseGamemodeDevelop_C_GetUMGDebugHudInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DebugHUD != nullptr)
		*DebugHUD = params.DebugHUD;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.GetDebugHudInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADebugHUD_C*             DebugHUD                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemodeDevelop_C::GetDebugHudInstance(class ADebugHUD_C** DebugHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.GetDebugHudInstance");

	ABP_AriseGamemodeDevelop_C_GetDebugHudInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DebugHUD != nullptr)
		*DebugHUD = params.DebugHUD;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.IsWaitSymbolLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bOut                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemodeDevelop_C::IsWaitSymbolLoaded(const struct FString& UserData, bool* bOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.IsWaitSymbolLoaded");

	ABP_AriseGamemodeDevelop_C_IsWaitSymbolLoaded_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOut != nullptr)
		*bOut = params.bOut;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.IsOpenDebugMenuButtonPressed
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_AriseGamemodeDevelop_C::IsOpenDebugMenuButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.IsOpenDebugMenuButtonPressed");

	ABP_AriseGamemodeDevelop_C_IsOpenDebugMenuButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.IsDebugInputEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bOut                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemodeDevelop_C::IsDebugInputEnable(bool* bOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.IsDebugInputEnable");

	ABP_AriseGamemodeDevelop_C_IsDebugInputEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOut != nullptr)
		*bOut = params.bOut;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.IsDevelopEnabled
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_AriseGamemodeDevelop_C::IsDevelopEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.IsDevelopEnabled");

	ABP_AriseGamemodeDevelop_C_IsDevelopEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemodeDevelop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.UserConstructionScript");

	ABP_AriseGamemodeDevelop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AriseGamemodeDevelop_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.ReceiveBeginPlay");

	ABP_AriseGamemodeDevelop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemodeDevelop_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.ReceiveTick");

	ABP_AriseGamemodeDevelop_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemodeDevelop_C::CustomEvent(int Flag, bool bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.CustomEvent");

	ABP_AriseGamemodeDevelop_C_CustomEvent_Params params;
	params.Flag = Flag;
	params.bValid = bValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.AddLevelDebugMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         LevelNames                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_AriseGamemodeDevelop_C::AddLevelDebugMenu(TArray<struct FString>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.AddLevelDebugMenu");

	ABP_AriseGamemodeDevelop_C_AddLevelDebugMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnStartSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  StartedSection                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemodeDevelop_C::OnStartSection(unsigned char StartedSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnStartSection");

	ABP_AriseGamemodeDevelop_C_OnStartSection_Params params;
	params.StartedSection = StartedSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.SetDebugInputEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNew                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemodeDevelop_C::SetDebugInputEnable(bool bNew)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.SetDebugInputEnable");

	ABP_AriseGamemodeDevelop_C_SetDebugInputEnable_Params params;
	params.bNew = bNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.򹘞򬿾󘍈􉞆�0n0鬴癳
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemodeDevelop_C::򹘞򬿾󘍈􉞆�0n0鬴癳()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.򹘞򬿾󘍈􉞆�0n0鬴癳");

	ABP_AriseGamemodeDevelop_C_򹘞򬿾󘍈􉞆�0n0鬴癳_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDispMapObjInfo
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemodeDevelop_C::OnToggleDispMapObjInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDispMapObjInfo");

	ABP_AriseGamemodeDevelop_C_OnToggleDispMapObjInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDispCameraCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemodeDevelop_C::OnToggleDispCameraCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDispCameraCollision");

	ABP_AriseGamemodeDevelop_C_OnToggleDispCameraCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDispCharacterCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemodeDevelop_C::OnToggleDispCharacterCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDispCharacterCollision");

	ABP_AriseGamemodeDevelop_C_OnToggleDispCharacterCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDispInteractArea
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemodeDevelop_C::OnToggleDispInteractArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDispInteractArea");

	ABP_AriseGamemodeDevelop_C_OnToggleDispInteractArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnChangeDispUELog
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemodeDevelop_C::OnChangeDispUELog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnChangeDispUELog");

	ABP_AriseGamemodeDevelop_C_OnChangeDispUELog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnChangeDispCustomLog
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemodeDevelop_C::OnChangeDispCustomLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnChangeDispCustomLog");

	ABP_AriseGamemodeDevelop_C_OnChangeDispCustomLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDispEncountArea
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemodeDevelop_C::OnToggleDispEncountArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDispEncountArea");

	ABP_AriseGamemodeDevelop_C_OnToggleDispEncountArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleMemoryCulc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::OnToggleMemoryCulc(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleMemoryCulc");

	ABP_AriseGamemodeDevelop_C_OnToggleMemoryCulc_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnDecideWaitSymbolLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::OnDecideWaitSymbolLoaded(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnDecideWaitSymbolLoaded");

	ABP_AriseGamemodeDevelop_C_OnDecideWaitSymbolLoaded_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnSetWaitSymbolLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemodeDevelop_C::OnSetWaitSymbolLoaded(const struct FString& UserData, bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnSetWaitSymbolLoaded");

	ABP_AriseGamemodeDevelop_C_OnSetWaitSymbolLoaded_Params params;
	params.UserData = UserData;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnMemoryRefresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::OnMemoryRefresh(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnMemoryRefresh");

	ABP_AriseGamemodeDevelop_C_OnMemoryRefresh_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::CustomEvent_4(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.CustomEvent_4");

	ABP_AriseGamemodeDevelop_C_CustomEvent_4_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnOpenCommandAssetExt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::OnOpenCommandAssetExt(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnOpenCommandAssetExt");

	ABP_AriseGamemodeDevelop_C_OnOpenCommandAssetExt_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.MakeSendExecuteCommandButton
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         TitleLists                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         CommandLists                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_AriseGamemodeDevelop_C::MakeSendExecuteCommandButton(TArray<struct FString> TitleLists, TArray<struct FString> CommandLists)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.MakeSendExecuteCommandButton");

	ABP_AriseGamemodeDevelop_C_MakeSendExecuteCommandButton_Params params;
	params.TitleLists = TitleLists;
	params.CommandLists = CommandLists;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.SendConsoleCommand
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::SendConsoleCommand(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.SendConsoleCommand");

	ABP_AriseGamemodeDevelop_C_SendConsoleCommand_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::CustomEvent_3(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.CustomEvent_3");

	ABP_AriseGamemodeDevelop_C_CustomEvent_3_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::CustomEvent_2(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.CustomEvent_2");

	ABP_AriseGamemodeDevelop_C_CustomEvent_2_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.On Toggle Show Navigation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::On_Toggle_Show_Navigation(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.On Toggle Show Navigation");

	ABP_AriseGamemodeDevelop_C_On_Toggle_Show_Navigation_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.On Toggle Show Collision
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::On_Toggle_Show_Collision(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.On Toggle Show Collision");

	ABP_AriseGamemodeDevelop_C_On_Toggle_Show_Collision_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleMemoryHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::OnToggleMemoryHUD(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleMemoryHUD");

	ABP_AriseGamemodeDevelop_C_OnToggleMemoryHUD_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleLoadLog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::OnToggleLoadLog(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleLoadLog");

	ABP_AriseGamemodeDevelop_C_OnToggleLoadLog_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDebugHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::OnToggleDebugHUD(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDebugHUD");

	ABP_AriseGamemodeDevelop_C_OnToggleDebugHUD_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnGoBackTitle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::OnGoBackTitle(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnGoBackTitle");

	ABP_AriseGamemodeDevelop_C_OnGoBackTitle_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnSetScreenMaskAlpha
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemodeDevelop_C::OnSetScreenMaskAlpha(const struct FString& UserData, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnSetScreenMaskAlpha");

	ABP_AriseGamemodeDevelop_C_OnSetScreenMaskAlpha_Params params;
	params.UserData = UserData;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnBugReport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::OnBugReport(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnBugReport");

	ABP_AriseGamemodeDevelop_C_OnBugReport_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnLevels
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::OnLevels(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnLevels");

	ABP_AriseGamemodeDevelop_C_OnLevels_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnFps
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::OnFps(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnFps");

	ABP_AriseGamemodeDevelop_C_OnFps_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.ExecuteUbergraph_BP_AriseGamemodeDevelop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemodeDevelop_C::ExecuteUbergraph_BP_AriseGamemodeDevelop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.ExecuteUbergraph_BP_AriseGamemodeDevelop");

	ABP_AriseGamemodeDevelop_C_ExecuteUbergraph_BP_AriseGamemodeDevelop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventOpenFastTravelPoint_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::EventOpenFastTravelPoint_0__DelegateSignature(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventOpenFastTravelPoint_0__DelegateSignature");

	ABP_AriseGamemodeDevelop_C_EventOpenFastTravelPoint_0__DelegateSignature_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventRestartFieldScene_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemodeDevelop_C::EventRestartFieldScene_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventRestartFieldScene_0__DelegateSignature");

	ABP_AriseGamemodeDevelop_C_EventRestartFieldScene_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventChangeLocation_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewLocationName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::EventChangeLocation_0__DelegateSignature(const struct FString& NewLocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventChangeLocation_0__DelegateSignature");

	ABP_AriseGamemodeDevelop_C_EventChangeLocation_0__DelegateSignature_Params params;
	params.NewLocationName = NewLocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventBattleStart_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemodeDevelop_C::EventBattleStart_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventBattleStart_0__DelegateSignature");

	ABP_AriseGamemodeDevelop_C_EventBattleStart_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventPreMapChange_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::EventPreMapChange_0__DelegateSignature(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventPreMapChange_0__DelegateSignature");

	ABP_AriseGamemodeDevelop_C_EventPreMapChange_0__DelegateSignature_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventFieldWakeup_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  PrevScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemodeDevelop_C::EventFieldWakeup_0__DelegateSignature(unsigned char PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventFieldWakeup_0__DelegateSignature");

	ABP_AriseGamemodeDevelop_C_EventFieldWakeup_0__DelegateSignature_Params params;
	params.PrevScene = PrevScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventPostMapChange_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::EventPostMapChange_0__DelegateSignature(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventPostMapChange_0__DelegateSignature");

	ABP_AriseGamemodeDevelop_C_EventPostMapChange_0__DelegateSignature_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnChangeWorldTime_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewWorldTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemodeDevelop_C::OnChangeWorldTime_0__DelegateSignature(float NewWorldTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnChangeWorldTime_0__DelegateSignature");

	ABP_AriseGamemodeDevelop_C_OnChangeWorldTime_0__DelegateSignature_Params params;
	params.NewWorldTime = NewWorldTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.DoChangeMapEnvironment_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EnvName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemodeDevelop_C::DoChangeMapEnvironment_0__DelegateSignature(const struct FString& EnvName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.DoChangeMapEnvironment_0__DelegateSignature");

	ABP_AriseGamemodeDevelop_C_DoChangeMapEnvironment_0__DelegateSignature_Params params;
	params.EnvName = EnvName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.DoCaptureScene_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              CaptureTransform               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UCameraComponent*        BaseCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_AriseGamemodeDevelop_C::DoCaptureScene_0__DelegateSignature(const struct FTransform& CaptureTransform, class UCameraComponent* BaseCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.DoCaptureScene_0__DelegateSignature");

	ABP_AriseGamemodeDevelop_C_DoCaptureScene_0__DelegateSignature_Params params;
	params.CaptureTransform = CaptureTransform;
	params.BaseCamera = BaseCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
