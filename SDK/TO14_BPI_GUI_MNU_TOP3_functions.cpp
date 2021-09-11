
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

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.ForceFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_C::ForceFinalize(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.ForceFinalize");

	UTO14_BPI_GUI_MNU_TOP3_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.Exit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_C::Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.Exit");

	UTO14_BPI_GUI_MNU_TOP3_C_Exit_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_C::Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.Init");

	UTO14_BPI_GUI_MNU_TOP3_C_Init_Params params;
	params.Value = Value;
	params.PrevSceneID = PrevSceneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.ReadWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_C::ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.ReadWait");

	UTO14_BPI_GUI_MNU_TOP3_C_ReadWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.Exec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_C::Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.Exec");

	UTO14_BPI_GUI_MNU_TOP3_C_Exec_Params params;
	params.Time = Time;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.GetNextScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)
// bool                           SelfRemain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_C::GetNextScene(struct FString* NextSceneID, bool* SelfRemain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.GetNextScene");

	UTO14_BPI_GUI_MNU_TOP3_C_GetNextScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
	if (SelfRemain != nullptr)
		*SelfRemain = params.SelfRemain;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.Finish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_C::Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.Finish");

	UTO14_BPI_GUI_MNU_TOP3_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (ResultValue != nullptr)
		*ResultValue = params.ResultValue;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.Get3DBGActor
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MNU_3DWIDGET_BaseActor_C* _3DBGActor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_C::Get3DBGActor(class ABP_MNU_3DWIDGET_BaseActor_C** _3DBGActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.Get3DBGActor");

	UTO14_BPI_GUI_MNU_TOP3_C_Get3DBGActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_3DBGActor != nullptr)
		*_3DBGActor = params._3DBGActor;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.CheckArtifactMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_C::CheckArtifactMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.CheckArtifactMenu");

	UTO14_BPI_GUI_MNU_TOP3_C_CheckArtifactMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.ChangeNextMenu
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_C::ChangeNextMenu(const struct FString& NextMenu, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.ChangeNextMenu");

	UTO14_BPI_GUI_MNU_TOP3_C_ChangeNextMenu_Params params;
	params.NextMenu = NextMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.CheckChangedPartyTop
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_C::CheckChangedPartyTop()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.CheckChangedPartyTop");

	UTO14_BPI_GUI_MNU_TOP3_C_CheckChangedPartyTop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.UpdatePartyTopWhenOpen
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_C::UpdatePartyTopWhenOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.UpdatePartyTopWhenOpen");

	UTO14_BPI_GUI_MNU_TOP3_C_UpdatePartyTopWhenOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.PlayAnimNext
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_C::PlayAnimNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.PlayAnimNext");

	UTO14_BPI_GUI_MNU_TOP3_C_PlayAnimNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.PlayAnimComeback
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_C::PlayAnimComeback()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.PlayAnimComeback");

	UTO14_BPI_GUI_MNU_TOP3_C_PlayAnimComeback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.PlayAnimOpen
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_C::PlayAnimOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.PlayAnimOpen");

	UTO14_BPI_GUI_MNU_TOP3_C_PlayAnimOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.PlayAnimClose
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_C::PlayAnimClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.PlayAnimClose");

	UTO14_BPI_GUI_MNU_TOP3_C_PlayAnimClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.OnChangeMenuForFromTmp
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_C::OnChangeMenuForFromTmp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.OnChangeMenuForFromTmp");

	UTO14_BPI_GUI_MNU_TOP3_C_OnChangeMenuForFromTmp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.OnChangeMenuStaFromTmp
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_C::OnChangeMenuStaFromTmp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.OnChangeMenuStaFromTmp");

	UTO14_BPI_GUI_MNU_TOP3_C_OnChangeMenuStaFromTmp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.OnInit
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_TOP3_C::OnInit(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.OnInit");

	UTO14_BPI_GUI_MNU_TOP3_C_OnInit_Params params;
	params.Value = Value;
	params.PrevSceneID = PrevSceneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.OnClosedFromTmp
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_C::OnClosedFromTmp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.OnClosedFromTmp");

	UTO14_BPI_GUI_MNU_TOP3_C_OnClosedFromTmp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.OnDecideFromTmp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TOP3_C::OnDecideFromTmp(const struct FString& MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.OnDecideFromTmp");

	UTO14_BPI_GUI_MNU_TOP3_C_OnDecideFromTmp_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3");

	UTO14_BPI_GUI_MNU_TOP3_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
