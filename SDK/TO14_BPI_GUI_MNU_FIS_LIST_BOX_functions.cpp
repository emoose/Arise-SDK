
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

// Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.GetSelectLureData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLureData               LureData                       (Parm, OutParm)

void UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C::GetSelectLureData(struct FLureData* LureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.GetSelectLureData");

	UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C_GetSelectLureData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LureData != nullptr)
		*LureData = params.LureData;
}


// Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.GetSelectRodData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRodData                RodData                        (Parm, OutParm)

void UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C::GetSelectRodData(struct FRodData* RodData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.GetSelectRodData");

	UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C_GetSelectRodData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RodData != nullptr)
		*RodData = params.RodData;
}


// Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.Input
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C::Input(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.Input");

	UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C_Input_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.SetLureList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C::SetLureList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.SetLureList");

	UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C_SetLureList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.SetRodList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C::SetRodList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.SetRodList");

	UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C_SetRodList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.Init");

	UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
