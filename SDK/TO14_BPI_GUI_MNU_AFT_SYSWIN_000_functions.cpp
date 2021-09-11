
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

// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.GuideChange
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C::GuideChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.GuideChange");

	UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_GuideChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.FlagChangeCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ChangeOK                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C::FlagChangeCheck(int Index, bool* ChangeOK)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.FlagChangeCheck");

	UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_FlagChangeCheck_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChangeOK != nullptr)
		*ChangeOK = params.ChangeOK;
}


// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.SwitchItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C::SwitchItem(int UniqueId, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.SwitchItem");

	UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_SwitchItem_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.Input
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C::Input(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.Input");

	UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_Input_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.CBMouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C::CBMouseEnter(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.CBMouseEnter");

	UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_CBMouseEnter_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.CBMouseOver
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C::CBMouseOver(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.CBMouseOver");

	UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_CBMouseOver_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C::Select(int NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.Select");

	UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_Select_Params params;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.RestructList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C::RestructList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.RestructList");

	UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_RestructList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.Init
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FArtifactData>   ArtifactMaster                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C::Init(TArray<struct FArtifactData>* ArtifactMaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.Init");

	UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArtifactMaster != nullptr)
		*ArtifactMaster = params.ArtifactMaster;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
