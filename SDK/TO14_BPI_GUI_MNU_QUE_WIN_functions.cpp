
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

// Function TO14_BPI_GUI_MNU_QUE_WIN.TO14_BPI_GUI_MNU_QUE_WIN_C.SetLocationData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestData              Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_QUE_WIN_C::SetLocationData(struct FQuestData* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN.TO14_BPI_GUI_MNU_QUE_WIN_C.SetLocationData");

	UTO14_BPI_GUI_MNU_QUE_WIN_C_SetLocationData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quest != nullptr)
		*Quest = params.Quest;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN.TO14_BPI_GUI_MNU_QUE_WIN_C.DataConstruct
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_WIN_C::DataConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN.TO14_BPI_GUI_MNU_QUE_WIN_C.DataConstruct");

	UTO14_BPI_GUI_MNU_QUE_WIN_C_DataConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN.TO14_BPI_GUI_MNU_QUE_WIN_C.SetQuestData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestData              Quest                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_QUE_WIN_C::SetQuestData(const struct FQuestData& Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN.TO14_BPI_GUI_MNU_QUE_WIN_C.SetQuestData");

	UTO14_BPI_GUI_MNU_QUE_WIN_C_SetQuestData_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN.TO14_BPI_GUI_MNU_QUE_WIN_C.OnWidgetCreated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_WIN_C::OnWidgetCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN.TO14_BPI_GUI_MNU_QUE_WIN_C.OnWidgetCreated");

	UTO14_BPI_GUI_MNU_QUE_WIN_C_OnWidgetCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN.TO14_BPI_GUI_MNU_QUE_WIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN.TO14_BPI_GUI_MNU_QUE_WIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN");

	UTO14_BPI_GUI_MNU_QUE_WIN_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
