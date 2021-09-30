
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

// Function TO14_BPI_GUI_MNU_FOR2_CHANGE.TO14_BPI_GUI_MNU_FOR2_CHANGE_C.ChengeMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFBtlChangeOrderType           InOrderType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_CHANGE_C::ChengeMaterial(EFBtlChangeOrderType InOrderType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHANGE.TO14_BPI_GUI_MNU_FOR2_CHANGE_C.ChengeMaterial");

	UTO14_BPI_GUI_MNU_FOR2_CHANGE_C_ChengeMaterial_Params params;
	params.InOrderType = InOrderType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2_CHANGE.TO14_BPI_GUI_MNU_FOR2_CHANGE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_CHANGE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHANGE.TO14_BPI_GUI_MNU_FOR2_CHANGE_C.Construct");

	UTO14_BPI_GUI_MNU_FOR2_CHANGE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2_CHANGE.TO14_BPI_GUI_MNU_FOR2_CHANGE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHANGE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_CHANGE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHANGE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHANGE.TO14_BPI_GUI_MNU_FOR2_CHANGE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHANGE");

	UTO14_BPI_GUI_MNU_FOR2_CHANGE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHANGE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
