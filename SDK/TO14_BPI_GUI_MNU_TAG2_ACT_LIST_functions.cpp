
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

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.SortMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::SortMode(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.SortMode");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_SortMode_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.CheckWidgetsVisibleChange
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::CheckWidgetsVisibleChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.CheckWidgetsVisibleChange");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_CheckWidgetsVisibleChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.BindToggleCheckEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnToggleCheck                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::BindToggleCheckEvent(const struct FScriptDelegate& OnToggleCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.BindToggleCheckEvent");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_BindToggleCheckEvent_Params params;
	params.OnToggleCheck = OnToggleCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.CB_ToggleCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ListIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::CB_ToggleCheck(int ListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.CB_ToggleCheck");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_CB_ToggleCheck_Params params;
	params.ListIndex = ListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.ActiveNonSelectActs
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::ActiveNonSelectActs()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.ActiveNonSelectActs");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_ActiveNonSelectActs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.DeactiveNonSelectActs
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::DeactiveNonSelectActs()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.DeactiveNonSelectActs");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_DeactiveNonSelectActs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.Refresh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuTacticsData        MenuTacticsData                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::Refresh(const struct FMenuTacticsData& MenuTacticsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.Refresh");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_Refresh_Params params;
	params.MenuTacticsData = MenuTacticsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.UpdateNumList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::UpdateNumList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.UpdateNumList");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_UpdateNumList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.GetSelectedActDrawIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            DrawIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::GetSelectedActDrawIndex(int* DrawIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.GetSelectedActDrawIndex");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_GetSelectedActDrawIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DrawIndex != nullptr)
		*DrawIndex = params.DrawIndex;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.AddCreateNew
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::AddCreateNew()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.AddCreateNew");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_AddCreateNew_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.GetSelectedAct
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TAG2_ACT_C* ActWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::GetSelectedAct(class UTO14_BPI_GUI_MNU_TAG2_ACT_C** ActWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.GetSelectedAct");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_GetSelectedAct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActWidget != nullptr)
		*ActWidget = params.ActWidget;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.ChangeActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::ChangeActive(int Index, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.ChangeActive");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_ChangeActive_Params params;
	params.Index = Index;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.RemoveAct
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuTacticsData        TacticsData                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::RemoveAct(int Index, struct FMenuTacticsData* TacticsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.RemoveAct");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_RemoveAct_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TacticsData != nullptr)
		*TacticsData = params.TacticsData;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.InsertAct
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuTacticsData        TacticsData                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            OriginalIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::InsertAct(int OriginalIndex, int TargetIndex, struct FMenuTacticsData* TacticsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.InsertAct");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_InsertAct_Params params;
	params.OriginalIndex = OriginalIndex;
	params.TargetIndex = TargetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TacticsData != nullptr)
		*TacticsData = params.TacticsData;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.EV_ListMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MoveValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ListIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ChildIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsTrigger                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::EV_ListMove(int MoveValue, int ListIndex, int ChildIndex, bool IsTrigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.EV_ListMove");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_EV_ListMove_Params params;
	params.MoveValue = MoveValue;
	params.ListIndex = ListIndex;
	params.ChildIndex = ChildIndex;
	params.IsTrigger = IsTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.CreateAct
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuTacticsLineData    LineData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::CreateAct(const struct FMenuTacticsLineData& LineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.CreateAct");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_CreateAct_Params params;
	params.LineData = LineData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.PadWork");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.CB_MouseMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ListIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CategoryIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::CB_MouseMove(int ListIndex, int CategoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.CB_MouseMove");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_CB_MouseMove_Params params;
	params.ListIndex = ListIndex;
	params.CategoryIndex = CategoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.CB_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ListIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CategoryIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::CB_MouseEnter(int ListIndex, int CategoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.CB_MouseEnter");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_CB_MouseEnter_Params params;
	params.ListIndex = ListIndex;
	params.CategoryIndex = CategoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuTacticsData        TacticsData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            SelectIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TopIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::Initialize(const struct FMenuTacticsData& TacticsData, int SelectIndex, int TopIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.Initialize");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_Initialize_Params params;
	params.TacticsData = TacticsData;
	params.SelectIndex = SelectIndex;
	params.TopIndex = TopIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.OnInit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TopIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::OnInit(int TopIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.OnInit");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_OnInit_Params params;
	params.TopIndex = TopIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.OnSwapTactics
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuTacticsData        TacticsData                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Index0                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::OnSwapTactics(int Index0, int Index1, struct FMenuTacticsData* TacticsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.OnSwapTactics");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_OnSwapTactics_Params params;
	params.Index0 = Index0;
	params.Index1 = Index1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TacticsData != nullptr)
		*TacticsData = params.TacticsData;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_LIST
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_LIST(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_LIST");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_LIST_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.ToggleCheckEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ListIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C::ToggleCheckEvent__DelegateSignature(int ListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.ToggleCheckEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_ToggleCheckEvent__DelegateSignature_Params params;
	params.ListIndex = ListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
