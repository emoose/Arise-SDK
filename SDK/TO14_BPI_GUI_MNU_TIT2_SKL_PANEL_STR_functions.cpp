
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

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindClosedShortDialogEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnClosedShortDialog            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::BindClosedShortDialogEvent(const struct FScriptDelegate& OnClosedShortDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindClosedShortDialogEvent");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BindClosedShortDialogEvent_Params params;
	params.OnClosedShortDialog = OnClosedShortDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindClosedLearnDialogEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnClosedLearnDialog            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::BindClosedLearnDialogEvent(const struct FScriptDelegate& OnClosedLearnDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindClosedLearnDialogEvent");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BindClosedLearnDialogEvent_Params params;
	params.OnClosedLearnDialog = OnClosedLearnDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetOwnerPanel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* NewParam                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::GetOwnerPanel(class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetOwnerPanel");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_GetOwnerPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetCharaID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EArisePartyID                  CharaID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::GetCharaID(EArisePartyID* CharaID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetCharaID");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_GetCharaID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharaID != nullptr)
		*CharaID = params.CharaID;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetSkillID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SkillID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::GetSkillID(int* SkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetSkillID");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_GetSkillID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkillID != nullptr)
		*SkillID = params.SkillID;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetAliasID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            AliasID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::GetAliasID(int* AliasID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetAliasID");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_GetAliasID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AliasID != nullptr)
		*AliasID = params.AliasID;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CheckSkillLearnable
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLearnable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::CheckSkillLearnable(bool* bLearnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CheckSkillLearnable");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CheckSkillLearnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLearnable != nullptr)
		*bLearnable = params.bLearnable;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindSkillLearnEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnSkillLernNew                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::BindSkillLearnEvent(const struct FScriptDelegate& OnSkillLernNew)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindSkillLearnEvent");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BindSkillLearnEvent_Params params;
	params.OnSkillLernNew = OnSkillLernNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetClickableArea
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_SKL_CLICK_AREA_C* ClickableArea                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::GetClickableArea(class UTO14_BPI_GUI_MNU_TIT2_SKL_CLICK_AREA_C** ClickableArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetClickableArea");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_GetClickableArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClickableArea != nullptr)
		*ClickableArea = params.ClickableArea;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindOpenedShortDialogEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnOpenedShortDialog            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::BindOpenedShortDialogEvent(const struct FScriptDelegate& OnOpenedShortDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindOpenedShortDialogEvent");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BindOpenedShortDialogEvent_Params params;
	params.OnOpenedShortDialog = OnOpenedShortDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OpenShortDialog
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::OpenShortDialog(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OpenShortDialog");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OpenShortDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindClosedAnyDialogEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnClosedAnyDialog              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::BindClosedAnyDialogEvent(const struct FScriptDelegate& OnClosedAnyDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindClosedAnyDialogEvent");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BindClosedAnyDialogEvent_Params params;
	params.OnClosedAnyDialog = OnClosedAnyDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindOpenedAnyDialogEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnOpenedAnyDialog              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::BindOpenedAnyDialogEvent(const struct FScriptDelegate& OnOpenedAnyDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindOpenedAnyDialogEvent");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BindOpenedAnyDialogEvent_Params params;
	params.OnOpenedAnyDialog = OnOpenedAnyDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindOpenedLeanDialogEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnOpenedLeanDialog             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::BindOpenedLeanDialogEvent(const struct FScriptDelegate& OnOpenedLeanDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindOpenedLeanDialogEvent");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BindOpenedLeanDialogEvent_Params params;
	params.OnOpenedLeanDialog = OnOpenedLeanDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.RunSkillLern
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::RunSkillLern(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.RunSkillLern");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_RunSkillLern_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OpenLernDialog
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::OpenLernDialog(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OpenLernDialog");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OpenLernDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CheckHaveSkillLearnRisePoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHave                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::CheckHaveSkillLearnRisePoint(bool* IsHave)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CheckHaveSkillLearnRisePoint");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CheckHaveSkillLearnRisePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsHave != nullptr)
		*IsHave = params.IsHave;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CheckSkillLearn
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLean                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::CheckSkillLearn(bool* IsLean)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CheckSkillLearn");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CheckSkillLearn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLean != nullptr)
		*IsLean = params.IsLean;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetAdsorbArea
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_MenuFreeCursorAdsorbArea_C* AdsorbArea                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::GetAdsorbArea(class UBP_MenuFreeCursorAdsorbArea_C** AdsorbArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetAdsorbArea");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_GetAdsorbArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdsorbArea != nullptr)
		*AdsorbArea = params.AdsorbArea;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.ActivateBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           sw                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::ActivateBP(bool sw)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.ActivateBP");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_ActivateBP_Params params;
	params.sw = sw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.Restruct
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* OwnerPanel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EArisePartyID                  CharaID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillNo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::Restruct(class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* OwnerPanel, EArisePartyID CharaID, int AliasID, int SkillNo, int SkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.Restruct");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_Restruct_Params params;
	params.OwnerPanel = OwnerPanel;
	params.CharaID = CharaID;
	params.AliasID = AliasID;
	params.SkillNo = SkillNo;
	params.SkillID = SkillID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.Initialize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  CharaID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnHovered                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         OnUnhovered                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::Initialize(EArisePartyID CharaID, int AliasID, int Index, const struct FScriptDelegate& OnHovered, const struct FScriptDelegate& OnUnhovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.Initialize");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_Initialize_Params params;
	params.CharaID = CharaID;
	params.AliasID = AliasID;
	params.Index = Index;
	params.OnHovered = OnHovered;
	params.OnUnhovered = OnUnhovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnDeselected");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnSelected");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnPanelCompleted
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::OnPanelCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnPanelCompleted");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnPanelCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnFreeCursorHovered_SKL_CLICK_AREA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::CustomEvent_OnFreeCursorHovered_SKL_CLICK_AREA(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnFreeCursorHovered_SKL_CLICK_AREA");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CustomEvent_OnFreeCursorHovered_SKL_CLICK_AREA_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnDecide
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::CustomEvent_OnDecide()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnDecide");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CustomEvent_OnDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnOpenedLeanDialog
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::CustomEvent_OnOpenedLeanDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnOpenedLeanDialog");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CustomEvent_OnOpenedLeanDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnOpenedShortDialog
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::CustomEvent_OnOpenedShortDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnOpenedShortDialog");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CustomEvent_OnOpenedShortDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnFreeCursorUnovered_SKL_CLICK_AREA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::CustomEvent_OnFreeCursorUnovered_SKL_CLICK_AREA(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnFreeCursorUnovered_SKL_CLICK_AREA");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CustomEvent_OnFreeCursorUnovered_SKL_CLICK_AREA_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnFreeCursorDecided_SKL_CLICK_AREA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::CustomEvent_OnFreeCursorDecided_SKL_CLICK_AREA(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnFreeCursorDecided_SKL_CLICK_AREA");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CustomEvent_OnFreeCursorDecided_SKL_CLICK_AREA_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BndEvt__AriseClickableArea_62_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::BndEvt__AriseClickableArea_62_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BndEvt__AriseClickableArea_62_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BndEvt__AriseClickableArea_62_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BndEvt__AriseClickableArea_62_K2Node_ComponentBoundEvent_10_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::BndEvt__AriseClickableArea_62_K2Node_ComponentBoundEvent_10_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BndEvt__AriseClickableArea_62_K2Node_ComponentBoundEvent_10_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BndEvt__AriseClickableArea_62_K2Node_ComponentBoundEvent_10_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.Activate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           sw                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::Activate(bool sw)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.Activate");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_Activate_Params params;
	params.sw = sw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BndEvt__SKL_CLICK_AREA_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::BndEvt__SKL_CLICK_AREA_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BndEvt__SKL_CLICK_AREA_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BndEvt__SKL_CLICK_AREA_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnClosedShortDialog__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::OnClosedShortDialog__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnClosedShortDialog__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnClosedShortDialog__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnClosedLearnDialog__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::OnClosedLearnDialog__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnClosedLearnDialog__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnClosedLearnDialog__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnOpenedShortDialog__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::OnOpenedShortDialog__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnOpenedShortDialog__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnOpenedShortDialog__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnClosedAnyDialog__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::OnClosedAnyDialog__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnClosedAnyDialog__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnClosedAnyDialog__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnOpenedAnyDialog__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::OnOpenedAnyDialog__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnOpenedAnyDialog__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnOpenedAnyDialog__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnOpenedLeanDialog__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::OnOpenedLeanDialog__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnOpenedLeanDialog__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnOpenedLeanDialog__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnSkillLearn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::OnSkillLearn__DelegateSignature(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnSkillLearn__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnSkillLearn__DelegateSignature_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnUnhoveredEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C::OnUnhoveredEvent__DelegateSignature(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnUnhoveredEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnUnhoveredEvent__DelegateSignature_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
