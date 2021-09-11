
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

// Function TO14_BPI_GUI_MNU_INF_PER_START.TO14_BPI_GUI_MNU_INF_PER_START_C.EventAnimationEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_INF_PER_START_C::EventAnimationEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_PER_START.TO14_BPI_GUI_MNU_INF_PER_START_C.EventAnimationEnd");

	UTO14_BPI_GUI_MNU_INF_PER_START_C_EventAnimationEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_INF_PER_START.TO14_BPI_GUI_MNU_INF_PER_START_C.EventAnimationStarted
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_INF_PER_START_C::EventAnimationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_PER_START.TO14_BPI_GUI_MNU_INF_PER_START_C.EventAnimationStarted");

	UTO14_BPI_GUI_MNU_INF_PER_START_C_EventAnimationStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_INF_PER_START.TO14_BPI_GUI_MNU_INF_PER_START_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_INF_PER_START_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_PER_START.TO14_BPI_GUI_MNU_INF_PER_START_C.Construct");

	UTO14_BPI_GUI_MNU_INF_PER_START_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_INF_PER_START.TO14_BPI_GUI_MNU_INF_PER_START_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_INF_PER_START
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_INF_PER_START_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_INF_PER_START(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_PER_START.TO14_BPI_GUI_MNU_INF_PER_START_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_INF_PER_START");

	UTO14_BPI_GUI_MNU_INF_PER_START_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_INF_PER_START_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
