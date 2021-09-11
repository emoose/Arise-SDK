
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

// Function TO14_BPI_GUI_MNU_FIS_SET.TO14_BPI_GUI_MNU_FIS_SET_C.InputPad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_SET_C::InputPad(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_SET.TO14_BPI_GUI_MNU_FIS_SET_C.InputPad");

	UTO14_BPI_GUI_MNU_FIS_SET_C_InputPad_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_SET.TO14_BPI_GUI_MNU_FIS_SET_C.SetEquipData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_SET_C::SetEquipData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_SET.TO14_BPI_GUI_MNU_FIS_SET_C.SetEquipData");

	UTO14_BPI_GUI_MNU_FIS_SET_C_SetEquipData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_SET.TO14_BPI_GUI_MNU_FIS_SET_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_SET_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_SET.TO14_BPI_GUI_MNU_FIS_SET_C.Init");

	UTO14_BPI_GUI_MNU_FIS_SET_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
