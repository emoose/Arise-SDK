
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

// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.SetPageDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C::SetPageDisplay(bool IsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.SetPageDisplay");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C_SetPageDisplay_Params params;
	params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.SetViewType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C::SetViewType(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.SetViewType");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C_SetViewType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.PageAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C::PageAnimation(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.PageAnimation");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C_PageAnimation_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChanged                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C::PadWork(class AMenuPadProcess* PadProcess, bool* IsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.PadWork");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsChanged != nullptr)
		*IsChanged = params.IsChanged;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.SetQuestStepData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestData              Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           HighPriority                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C::SetQuestStepData(bool HighPriority, struct FQuestData* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.SetQuestStepData");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C_SetQuestStepData_Params params;
	params.HighPriority = HighPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quest != nullptr)
		*Quest = params.Quest;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.SetQuestData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestData              QuestData                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           HighPriority                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C::SetQuestData(const struct FQuestData& QuestData, bool HighPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.SetQuestData");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C_SetQuestData_Params params;
	params.QuestData = QuestData;
	params.HighPriority = HighPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.DataConstruct
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C::DataConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.DataConstruct");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C_DataConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.OnWidgetCreated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C::OnWidgetCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.OnWidgetCreated");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C_OnWidgetCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB.TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
