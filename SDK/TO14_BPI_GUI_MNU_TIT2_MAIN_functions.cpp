
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

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ForceFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::ForceFinalize(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ForceFinalize");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.Exit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.Exit");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_Exit_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.Init");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_Init_Params params;
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


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ReadWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ReadWait");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_ReadWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.Exec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.Exec");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_Exec_Params params;
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


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.GetNextScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)
// bool                           SelfRemain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::GetNextScene(struct FString* NextSceneID, bool* SelfRemain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.GetNextScene");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_GetNextScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
	if (SelfRemain != nullptr)
		*SelfRemain = params.SelfRemain;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.Finish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.Finish");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_Finish_Params params;

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


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.DestroyTitGet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::DestroyTitGet(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.DestroyTitGet");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_DestroyTitGet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CreateTitGet
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CreateTitGet(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CreateTitGet");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CreateTitGet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestoreAutoFaderOpacity
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::RestoreAutoFaderOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestoreAutoFaderOpacity");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RestoreAutoFaderOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.StoreAutoFaderOpacity
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::StoreAutoFaderOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.StoreAutoFaderOpacity");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_StoreAutoFaderOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshSklPanels
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::RefreshSklPanels()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshSklPanels");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RefreshSklPanels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.FreeCursorToInitPos
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::FreeCursorToInitPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.FreeCursorToInitPos");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_FreeCursorToInitPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ResetLayout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  CharaID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::ResetLayout(EArisePartyID CharaID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ResetLayout");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_ResetLayout_Params params;
	params.CharaID = CharaID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshExp
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::RefreshExp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshExp");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RefreshExp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindTitGetHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 TitGetHidden                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::BindTitGetHidden(class UWidget* TitGetHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindTitGetHidden");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindTitGetHidden_Params params;
	params.TitGetHidden = TitGetHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.StopSklLearnParticleSkilPanels
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::StopSklLearnParticleSkilPanels()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.StopSklLearnParticleSkilPanels");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_StopSklLearnParticleSkilPanels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindAutoSkillLearnExpConfirmEndEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::BindAutoSkillLearnExpConfirmEndEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindAutoSkillLearnExpConfirmEndEvent");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindAutoSkillLearnExpConfirmEndEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindAutoSkillLearnExpConfirmStartEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::BindAutoSkillLearnExpConfirmStartEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindAutoSkillLearnExpConfirmStartEvent");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindAutoSkillLearnExpConfirmStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckAutoSklLearnCharaIDs
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Learnable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<EArisePartyID>          CharaIDs                       (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CheckAutoSklLearnCharaIDs(bool* Learnable, TArray<EArisePartyID>* CharaIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckAutoSklLearnCharaIDs");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckAutoSklLearnCharaIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Learnable != nullptr)
		*Learnable = params.Learnable;
	if (CharaIDs != nullptr)
		*CharaIDs = params.CharaIDs;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindTitGetRoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*            TitGetRoot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::BindTitGetRoot(class UCanvasPanel* TitGetRoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindTitGetRoot");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindTitGetRoot_Params params;
	params.TitGetRoot = TitGetRoot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckInputAutoSkillLearnSkip
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInput                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CheckInputAutoSkillLearnSkip(class AMenuPadProcess* PadProcess, bool* IsInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckInputAutoSkillLearnSkip");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckInputAutoSkillLearnSkip_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInput != nullptr)
		*IsInput = params.IsInput;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindAutoSkillLearnSkipableEndEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::BindAutoSkillLearnSkipableEndEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindAutoSkillLearnSkipableEndEvent");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindAutoSkillLearnSkipableEndEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindAutoSkillLearnSkipableStartEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::BindAutoSkillLearnSkipableStartEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindAutoSkillLearnSkipableStartEvent");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindAutoSkillLearnSkipableStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindSklPanelInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C* SklPanelInfo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::BindSklPanelInfo(class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C* SklPanelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindSklPanelInfo");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindSklPanelInfo_Params params;
	params.SklPanelInfo = SklPanelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ExecSklPanelnfo
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::ExecSklPanelnfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ExecSklPanelnfo");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_ExecSklPanelnfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.IsPausing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsPausing                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::IsPausing(bool* IsPausing)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.IsPausing");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_IsPausing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPausing != nullptr)
		*IsPausing = params.IsPausing;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.SetActive");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitRoot
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceZoom                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::InitRoot(bool ForceZoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitRoot");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitRoot_Params params;
	params.ForceZoom = ForceZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckSklPanelStatusChange
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* SklPanel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CheckSklPanelStatusChange(class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* SklPanel, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckSklPanelStatusChange");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckSklPanelStatusChange_Params params;
	params.SklPanel = SklPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RunAutoSkillLearn
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::RunAutoSkillLearn(int AliasID, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RunAutoSkillLearn");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RunAutoSkillLearn_Params params;
	params.AliasID = AliasID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckSkillMarkShowUI
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CheckSkillMarkShowUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckSkillMarkShowUI");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckSkillMarkShowUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitSklChecker
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::InitSklChecker()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitSklChecker");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitSklChecker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshSklPanelnfo
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::RefreshSklPanelnfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshSklPanelnfo");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RefreshSklPanelnfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_NAME_C* Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::BindName(class UTO14_BPI_GUI_MNU_TIT2_NAME_C* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindName");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitName
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::InitName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitName");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshName
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::RefreshName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshName");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RefreshName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshSklChecker
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewLearnUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::RefreshSklChecker(int NewLearnUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshSklChecker");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RefreshSklChecker_Params params;
	params.NewLearnUniqueID = NewLearnUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RunSklChecker
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::RunSklChecker()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RunSklChecker");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RunSklChecker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckInputSklChecker
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInput                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CheckInputSklChecker(class AMenuPadProcess* PadProcess, bool* IsInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckInputSklChecker");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckInputSklChecker_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInput != nullptr)
		*IsInput = params.IsInput;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitCharaID
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::InitCharaID()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitCharaID");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitCharaID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitSkilPanelRoot
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::InitSkilPanelRoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitSkilPanelRoot");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitSkilPanelRoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckInputToggleScale
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInput                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CheckInputToggleScale(class AMenuPadProcess* PadProcess, bool* IsInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckInputToggleScale");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckInputToggleScale_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInput != nullptr)
		*IsInput = params.IsInput;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitSklPanelInfo
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::InitSklPanelInfo(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitSklPanelInfo");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitSklPanelInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindExp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_EXP_C* Exp                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::BindExp(class UTO14_BPI_GUI_MNU_TIT2_EXP_C* Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindExp");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindExp_Params params;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CreateSkilPanel
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDynamicEntryBox*        DynamicSklPanel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* Panel                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CreateSkilPanel(class UDynamicEntryBox* DynamicSklPanel, class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CreateSkilPanel");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CreateSkilPanel_Params params;
	params.DynamicSklPanel = DynamicSklPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Panel != nullptr)
		*Panel = params.Panel;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckAutoSklLearnAliasIDs
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Learnable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    AliasIDs                       (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CheckAutoSklLearnAliasIDs(bool* Learnable, TArray<int>* AliasIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckAutoSklLearnAliasIDs");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckAutoSklLearnAliasIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Learnable != nullptr)
		*Learnable = params.Learnable;
	if (AliasIDs != nullptr)
		*AliasIDs = params.AliasIDs;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructSkilPanels
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::RestructSkilPanels(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructSkilPanels");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RestructSkilPanels_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructSkilPanel
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::RestructSkilPanel(class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* Panel, int AliasID, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructSkilPanel");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RestructSkilPanel_Params params;
	params.Panel = Panel;
	params.AliasID = AliasID;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshRP
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::RefreshRP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshRP");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RefreshRP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckInputCharaSelect
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInput                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EArisePartyID                  CharaID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CheckInputCharaSelect(class AMenuPadProcess* PadProcess, bool* IsInput, EArisePartyID* CharaID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckInputCharaSelect");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckInputCharaSelect_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInput != nullptr)
		*IsInput = params.IsInput;
	if (CharaID != nullptr)
		*CharaID = params.CharaID;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitCharaSelect
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::InitCharaSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitCharaSelect");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitCharaSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitRP
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::InitRP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitRP");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitRP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindRP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT_RP_C* RP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::BindRP(class UTO14_BPI_GUI_MNU_TIT_RP_C* RP)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindRP");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindRP_Params params;
	params.RP = RP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindCharaSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C* CharaSelect                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::BindCharaSelect(class UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C* CharaSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindCharaSelect");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindCharaSelect_Params params;
	params.CharaSelect = CharaSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.FindSklPanel
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* SklPanel                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::FindSklPanel(int AliasID, class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C** SklPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.FindSklPanel");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_FindSklPanel_Params params;
	params.AliasID = AliasID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SklPanel != nullptr)
		*SklPanel = params.SklPanel;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructFreeCursorAdsorbArea
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* SklPanel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bHover                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::RestructFreeCursorAdsorbArea(class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* SklPanel, bool bHover, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructFreeCursorAdsorbArea");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RestructFreeCursorAdsorbArea_Params params;
	params.SklPanel = SklPanel;
	params.bHover = bHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckCreateSkilPanels
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Finished                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CheckCreateSkilPanels(bool* Finished)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckCreateSkilPanels");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckCreateSkilPanels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Finished != nullptr)
		*Finished = params.Finished;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructFreeCursorHoverEvent
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* SklPanel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bHover                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::RestructFreeCursorHoverEvent(class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* SklPanel, bool bHover, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructFreeCursorHoverEvent");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RestructFreeCursorHoverEvent_Params params;
	params.SklPanel = SklPanel;
	params.bHover = bHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructFreeCursorGroupJump1
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* SklPanel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Hover                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::RestructFreeCursorGroupJump1(class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* SklPanel, bool Hover, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructFreeCursorGroupJump1");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RestructFreeCursorGroupJump1_Params params;
	params.SklPanel = SklPanel;
	params.Hover = Hover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructFreeCursorGroupJump0
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::RestructFreeCursorGroupJump0(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructFreeCursorGroupJump0");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RestructFreeCursorGroupJump0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitFreeCursor
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::InitFreeCursor(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitFreeCursor");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitFreeCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitExp
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::InitExp(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitExp");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitExp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckInputExit
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInput                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CheckInputExit(class AMenuPadProcess* PadProcess, bool* IsInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckInputExit");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckInputExit_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInput != nullptr)
		*IsInput = params.IsInput;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitDynamicSklPaneals
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::InitDynamicSklPaneals(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitDynamicSklPaneals");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitDynamicSklPaneals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ExecPad
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::ExecPad(class AMenuPadProcess* PadProcess, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ExecPad");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_ExecPad_Params params;
	params.PadProcess = PadProcess;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnInputSklChecker
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CustomEvent_OnInputSklChecker()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnInputSklChecker");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnInputSklChecker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnInputToggleView
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CustomEvent_OnInputToggleView()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnInputToggleView");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnInputToggleView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnAutoSkillLearnAliasIDs
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    AliasIDs                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CustomEvent_OnAutoSkillLearnAliasIDs(TArray<int> AliasIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnAutoSkillLearnAliasIDs");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnAutoSkillLearnAliasIDs_Params params;
	params.AliasIDs = AliasIDs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnChangedCharacter
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CustomEvent_OnChangedCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnChangedCharacter");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnChangedCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_CheckCreateSklPanel
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CustomEvent_CheckCreateSklPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_CheckCreateSklPanel");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_CheckCreateSklPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnPanelCompletFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CustomEvent_OnPanelCompletFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnPanelCompletFinished");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnPanelCompletFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnChangedPanelVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CustomEvent_OnChangedPanelVisible(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnChangedPanelVisible");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnChangedPanelVisible_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnSkillLearn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CustomEvent_OnSkillLearn(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnSkillLearn");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnSkillLearn_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnTickTitGet_SklPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::OnTickTitGet_SklPanel(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnTickTitGet_SklPanel");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnTickTitGet_SklPanel_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnOpenedLearnDialogFromSklIcon
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::OnOpenedLearnDialogFromSklIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnOpenedLearnDialogFromSklIcon");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnOpenedLearnDialogFromSklIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnClosedLearnDialogFromSklIcon
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::OnClosedLearnDialogFromSklIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnClosedLearnDialogFromSklIcon");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnClosedLearnDialogFromSklIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnHovered_FreeCursor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CustomEvent_OnHovered_FreeCursor(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnHovered_FreeCursor");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnHovered_FreeCursor_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnUnhovered_FreeCursor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CustomEvent_OnUnhovered_FreeCursor(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnUnhovered_FreeCursor");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnUnhovered_FreeCursor_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnStartGroupJump_FreeCrusor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CustomEvent_OnStartGroupJump_FreeCrusor(int Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnStartGroupJump_FreeCrusor");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnStartGroupJump_FreeCrusor_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnEndGroupJump_FreeCrusor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CustomEvent_OnEndGroupJump_FreeCrusor(int Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnEndGroupJump_FreeCrusor");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnEndGroupJump_FreeCrusor_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnInit
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::CustomEvent_OnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnInit");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.PreConstruct");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_MAIN
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_MAIN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_MAIN");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_MAIN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnAutoSkillLearnExpConfirmEndEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::OnAutoSkillLearnExpConfirmEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnAutoSkillLearnExpConfirmEndEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnAutoSkillLearnExpConfirmEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnAutoSkillLearnExpConfirmStartEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::OnAutoSkillLearnExpConfirmStartEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnAutoSkillLearnExpConfirmStartEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnAutoSkillLearnExpConfirmStartEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnAutoSkillLearnSkipEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::OnAutoSkillLearnSkipEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnAutoSkillLearnSkipEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnAutoSkillLearnSkipEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnAutoSkillLearnSkipableEndEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::OnAutoSkillLearnSkipableEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnAutoSkillLearnSkipableEndEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnAutoSkillLearnSkipableEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnAutoSkillLearnSkipableStartEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_MAIN_C::OnAutoSkillLearnSkipableStartEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnAutoSkillLearnSkipableStartEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnAutoSkillLearnSkipableStartEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
