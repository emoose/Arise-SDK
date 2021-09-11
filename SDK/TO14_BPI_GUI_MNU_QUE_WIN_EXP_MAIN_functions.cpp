
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

// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.SetPageDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C::SetPageDisplay(bool IsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.SetPageDisplay");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_SetPageDisplay_Params params;
	params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.SetViewType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C::SetViewType(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.SetViewType");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_SetViewType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.ChangeAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C::ChangeAnimation(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.ChangeAnimation");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_ChangeAnimation_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChanged                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C::PadWork(class AMenuPadProcess* PadProcess, bool* IsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.PadWork");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsChanged != nullptr)
		*IsChanged = params.IsChanged;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.SetQuestStepData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestData              Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsMainQuest                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C::SetQuestStepData(bool IsMainQuest, struct FQuestData* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.SetQuestStepData");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_SetQuestStepData_Params params;
	params.IsMainQuest = IsMainQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quest != nullptr)
		*Quest = params.Quest;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.DataConstruct
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C::DataConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.DataConstruct");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_DataConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.SetQuestData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestData              Quest                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C::SetQuestData(const struct FQuestData& Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.SetQuestData");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_SetQuestData_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN");

	UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
