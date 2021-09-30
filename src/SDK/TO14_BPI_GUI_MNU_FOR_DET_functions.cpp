
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

// Function TO14_BPI_GUI_MNU_FOR_DET.TO14_BPI_GUI_MNU_FOR_DET_C.SetTextDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsDisplay                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR_DET_C::SetTextDisplay(bool InIsDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR_DET.TO14_BPI_GUI_MNU_FOR_DET_C.SetTextDisplay");

	UTO14_BPI_GUI_MNU_FOR_DET_C_SetTextDisplay_Params params;
	params.InIsDisplay = InIsDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR_DET.TO14_BPI_GUI_MNU_FOR_DET_C.SetPlayerID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR_DET_C::SetPlayerID(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR_DET.TO14_BPI_GUI_MNU_FOR_DET_C.SetPlayerID");

	UTO14_BPI_GUI_MNU_FOR_DET_C_SetPlayerID_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR_DET.TO14_BPI_GUI_MNU_FOR_DET_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR_DET_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR_DET.TO14_BPI_GUI_MNU_FOR_DET_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_FOR_DET_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR_DET.TO14_BPI_GUI_MNU_FOR_DET_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR_DET
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR_DET_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR_DET(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR_DET.TO14_BPI_GUI_MNU_FOR_DET_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR_DET");

	UTO14_BPI_GUI_MNU_FOR_DET_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR_DET_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
