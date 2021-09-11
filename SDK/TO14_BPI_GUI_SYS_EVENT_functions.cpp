
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

// Function TO14_BPI_GUI_SYS_EVENT.TO14_BPI_GUI_SYS_EVENT_C.ShowSkipGuide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EVENT_C::ShowSkipGuide(bool bNewShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EVENT.TO14_BPI_GUI_SYS_EVENT_C.ShowSkipGuide");

	UTO14_BPI_GUI_SYS_EVENT_C_ShowSkipGuide_Params params;
	params.bNewShow = bNewShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EVENT.TO14_BPI_GUI_SYS_EVENT_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EVENT_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EVENT.TO14_BPI_GUI_SYS_EVENT_C.Construct");

	UTO14_BPI_GUI_SYS_EVENT_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EVENT.TO14_BPI_GUI_SYS_EVENT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_EVENT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EVENT_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_EVENT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EVENT.TO14_BPI_GUI_SYS_EVENT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_EVENT");

	UTO14_BPI_GUI_SYS_EVENT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_EVENT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
