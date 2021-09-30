
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

// Function TO14_BPI_GUI_MNU_QUE_WIN_REM.TO14_BPI_GUI_MNU_QUE_WIN_REM_C.GetItemCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_REM_C::GetItemCount(int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_REM.TO14_BPI_GUI_MNU_QUE_WIN_REM_C.GetItemCount");

	UTO14_BPI_GUI_MNU_QUE_WIN_REM_C_GetItemCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_REM.TO14_BPI_GUI_MNU_QUE_WIN_REM_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestData              QuestData                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_QUE_WIN_REM_C::Init(const struct FQuestData& QuestData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_REM.TO14_BPI_GUI_MNU_QUE_WIN_REM_C.Init");

	UTO14_BPI_GUI_MNU_QUE_WIN_REM_C_Init_Params params;
	params.QuestData = QuestData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_REM.TO14_BPI_GUI_MNU_QUE_WIN_REM_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_WIN_REM_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_REM.TO14_BPI_GUI_MNU_QUE_WIN_REM_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_QUE_WIN_REM_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_WIN_REM.TO14_BPI_GUI_MNU_QUE_WIN_REM_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN_REM
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_WIN_REM_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN_REM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_WIN_REM.TO14_BPI_GUI_MNU_QUE_WIN_REM_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN_REM");

	UTO14_BPI_GUI_MNU_QUE_WIN_REM_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN_REM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
