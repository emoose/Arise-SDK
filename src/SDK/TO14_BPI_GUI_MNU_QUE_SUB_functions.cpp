
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

// Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.GetViewType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_SUB_C::GetViewType(int* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.GetViewType");

	UTO14_BPI_GUI_MNU_QUE_SUB_C_GetViewType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.SetViewType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_SUB_C::SetViewType(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.SetViewType");

	UTO14_BPI_GUI_MNU_QUE_SUB_C_SetViewType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChanged                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_SUB_C::PadWork(class AMenuPadProcess* PadProcess, bool* IsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.PadWork");

	UTO14_BPI_GUI_MNU_QUE_SUB_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsChanged != nullptr)
		*IsChanged = params.IsChanged;
}


// Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.SetQuestData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestData              QuestData                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           HighPriority                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_SUB_C::SetQuestData(const struct FQuestData& QuestData, bool HighPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.SetQuestData");

	UTO14_BPI_GUI_MNU_QUE_SUB_C_SetQuestData_Params params;
	params.QuestData = QuestData;
	params.HighPriority = HighPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.DataConstruct
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_SUB_C::DataConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.DataConstruct");

	UTO14_BPI_GUI_MNU_QUE_SUB_C_DataConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_SUB_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_QUE_SUB_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_SUB
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_SUB_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_SUB(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_SUB");

	UTO14_BPI_GUI_MNU_QUE_SUB_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_SUB_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
