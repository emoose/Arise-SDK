
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

// Function TO14_BPI_GUI_BTL_BACK.TO14_BPI_GUI_BTL_BACK_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_BACK_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_BACK.TO14_BPI_GUI_BTL_BACK_C.Construct");

	UTO14_BPI_GUI_BTL_BACK_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_BACK.TO14_BPI_GUI_BTL_BACK_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_BACK
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_BACK_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_BACK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_BACK.TO14_BPI_GUI_BTL_BACK_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_BACK");

	UTO14_BPI_GUI_BTL_BACK_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_BACK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
