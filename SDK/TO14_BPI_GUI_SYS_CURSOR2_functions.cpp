
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

// Function TO14_BPI_GUI_SYS_CURSOR2.TO14_BPI_GUI_SYS_CURSOR2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_CURSOR2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_CURSOR2.TO14_BPI_GUI_SYS_CURSOR2_C.Construct");

	UTO14_BPI_GUI_SYS_CURSOR2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_CURSOR2.TO14_BPI_GUI_SYS_CURSOR2_C.OnDisplayMetricsChanged
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_CURSOR2_C::OnDisplayMetricsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_CURSOR2.TO14_BPI_GUI_SYS_CURSOR2_C.OnDisplayMetricsChanged");

	UTO14_BPI_GUI_SYS_CURSOR2_C_OnDisplayMetricsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_CURSOR2.TO14_BPI_GUI_SYS_CURSOR2_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_CURSOR2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_CURSOR2_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_CURSOR2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_CURSOR2.TO14_BPI_GUI_SYS_CURSOR2_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_CURSOR2");

	UTO14_BPI_GUI_SYS_CURSOR2_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_CURSOR2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
