
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

// Function BP_GSC_Title.BP_GSC_Title_C.GetGSCTitle_IsTitleMoviePlay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutIsTitleMoviePlay            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Title_C::GetGSCTitle_IsTitleMoviePlay(bool* OutIsTitleMoviePlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.GetGSCTitle_IsTitleMoviePlay");

	UBP_GSC_Title_C_GetGSCTitle_IsTitleMoviePlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsTitleMoviePlay != nullptr)
		*OutIsTitleMoviePlay = params.OutIsTitleMoviePlay;
}


// Function BP_GSC_Title.BP_GSC_Title_C.MenuBackImageUnLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::MenuBackImageUnLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.MenuBackImageUnLoad");

	UBP_GSC_Title_C_MenuBackImageUnLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.MenuBackImageLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::MenuBackImageLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.MenuBackImageLoad");

	UBP_GSC_Title_C_MenuBackImageLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.GetNewGameMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (Parm, OutParm, ZeroConstructor)

void UBP_GSC_Title_C::GetNewGameMap(struct FString* MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.GetNewGameMap");

	UBP_GSC_Title_C_GetNewGameMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapName != nullptr)
		*MapName = params.MapName;
}


// Function BP_GSC_Title.BP_GSC_Title_C.IsTitleMoviePlay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsTitleMoviePlay            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Title_C::IsTitleMoviePlay(bool* OutIsTitleMoviePlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.IsTitleMoviePlay");

	UBP_GSC_Title_C_IsTitleMoviePlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsTitleMoviePlay != nullptr)
		*OutIsTitleMoviePlay = params.OutIsTitleMoviePlay;
}


// Function BP_GSC_Title.BP_GSC_Title_C.IsEnableSystemPause
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_Title_C::IsEnableSystemPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.IsEnableSystemPause");

	UBP_GSC_Title_C_IsEnableSystemPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_Title.BP_GSC_Title_C.IsPausePossibleState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_Title_C::IsPausePossibleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.IsPausePossibleState");

	UBP_GSC_Title_C_IsPausePossibleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_Title.BP_GSC_Title_C.SetPlayerCharacterVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Title_C::SetPlayerCharacterVisibility(bool IsVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.SetPlayerCharacterVisibility");

	UBP_GSC_Title_C_SetPlayerCharacterVisibility_Params params;
	params.IsVisibility = IsVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.ResetConfig
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::ResetConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.ResetConfig");

	UBP_GSC_Title_C_ResetConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.IsMaskWhenTitleUIClosed
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsMask                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Title_C::IsMaskWhenTitleUIClosed(const struct FString& Menu, bool* IsMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.IsMaskWhenTitleUIClosed");

	UBP_GSC_Title_C_IsMaskWhenTitleUIClosed_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMask != nullptr)
		*IsMask = params.IsMask;
}


// Function BP_GSC_Title.BP_GSC_Title_C.SetShowTitleLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Title_C::SetShowTitleLevel(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.SetShowTitleLevel");

	UBP_GSC_Title_C_SetShowTitleLevel_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.PreloadNewGameMap
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::PreloadNewGameMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.PreloadNewGameMap");

	UBP_GSC_Title_C_PreloadNewGameMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.UnLoadEndLevel
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::UnLoadEndLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.UnLoadEndLevel");

	UBP_GSC_Title_C_UnLoadEndLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.UnLoadLevel
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::UnLoadLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.UnLoadLevel");

	UBP_GSC_Title_C_UnLoadLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.LoadEndLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::LoadEndLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.LoadEndLevel");

	UBP_GSC_Title_C_LoadEndLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.LoadLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::LoadLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.LoadLevel");

	UBP_GSC_Title_C_LoadLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.MountMainFunction
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::MountMainFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.MountMainFunction");

	UBP_GSC_Title_C_MountMainFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.HideNowLoading
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::HideNowLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.HideNowLoading");

	UBP_GSC_Title_C_HideNowLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.GameStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 StartMap                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           InitGameData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LoadStart                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Title_C::GameStart(const struct FString& StartMap, bool InitGameData, bool LoadStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.GameStart");

	UBP_GSC_Title_C_GameStart_Params params;
	params.StartMap = StartMap;
	params.InitGameData = InitGameData;
	params.LoadStart = LoadStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.ManagementScript
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::ManagementScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.ManagementScript");

	UBP_GSC_Title_C_ManagementScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.TitleUIClosed?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// struct FString                 SelectedMenu                   (Parm, OutParm, ZeroConstructor)

bool UBP_GSC_Title_C::TitleUIClosed_(struct FString* SelectedMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.TitleUIClosed?");

	UBP_GSC_Title_C_TitleUIClosed__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedMenu != nullptr)
		*SelectedMenu = params.SelectedMenu;

	return params.ReturnValue;
}


// Function BP_GSC_Title.BP_GSC_Title_C.BootDebugMap
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::BootDebugMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.BootDebugMap");

	UBP_GSC_Title_C_BootDebugMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.SetupFieldMap
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::SetupFieldMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.SetupFieldMap");

	UBP_GSC_Title_C_SetupFieldMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.DebugPrintSceneState
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::DebugPrintSceneState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.DebugPrintSceneState");

	UBP_GSC_Title_C_DebugPrintSceneState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.SetupScene
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::SetupScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.SetupScene");

	UBP_GSC_Title_C_SetupScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.BPE_Finalize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneFinalizeReason           finalizeReason                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Title_C::BPE_Finalize(ESceneFinalizeReason finalizeReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.BPE_Finalize");

	UBP_GSC_Title_C_BPE_Finalize_Params params;
	params.finalizeReason = finalizeReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.BPE_Initialize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneInitializeMode           initMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Title_C::BPE_Initialize(ESceneInitializeMode initMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.BPE_Initialize");

	UBP_GSC_Title_C_BPE_Initialize_Params params;
	params.initMode = initMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.BPE_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Title_C::BPE_Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.BPE_Tick");

	UBP_GSC_Title_C_BPE_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.BPE_Wakeup
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char                  PrevScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Title_C::BPE_Wakeup(unsigned char PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.BPE_Wakeup");

	UBP_GSC_Title_C_BPE_Wakeup_Params params;
	params.PrevScene = PrevScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.BPE_Sleep
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char                  nextScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Title_C::BPE_Sleep(unsigned char nextScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.BPE_Sleep");

	UBP_GSC_Title_C_BPE_Sleep_Params params;
	params.nextScene = nextScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.OnMenuShowDome
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::OnMenuShowDome()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.OnMenuShowDome");

	UBP_GSC_Title_C_OnMenuShowDome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.OnMenuOpenStart
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::OnMenuOpenStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.OnMenuOpenStart");

	UBP_GSC_Title_C_OnMenuOpenStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.OnMenuCloseViewStart
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::OnMenuCloseViewStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.OnMenuCloseViewStart");

	UBP_GSC_Title_C_OnMenuCloseViewStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.ExecuteUbergraph_BP_GSC_Title
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Title_C::ExecuteUbergraph_BP_GSC_Title(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.ExecuteUbergraph_BP_GSC_Title");

	UBP_GSC_Title_C_ExecuteUbergraph_BP_GSC_Title_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.EmitterRemoveEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Title_C::EmitterRemoveEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.EmitterRemoveEvent__DelegateSignature");

	UBP_GSC_Title_C_EmitterRemoveEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.ChengBackFlameSword__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Title_C::ChengBackFlameSword__DelegateSignature(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.ChengBackFlameSword__DelegateSignature");

	UBP_GSC_Title_C_ChengBackFlameSword__DelegateSignature_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Title.BP_GSC_Title_C.ChengBackUI__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Title_C::ChengBackUI__DelegateSignature(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Title.BP_GSC_Title_C.ChengBackUI__DelegateSignature");

	UBP_GSC_Title_C_ChengBackUI__DelegateSignature_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
