
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

// Function TO14_BPI_GUI_SYS_PF_LOC.TO14_BPI_GUI_SYS_PF_LOC_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_LOC_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_LOC.TO14_BPI_GUI_SYS_PF_LOC_C.Refresh");

	UTO14_BPI_GUI_SYS_PF_LOC_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_LOC.TO14_BPI_GUI_SYS_PF_LOC_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_LOC_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_LOC.TO14_BPI_GUI_SYS_PF_LOC_C.Construct");

	UTO14_BPI_GUI_SYS_PF_LOC_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_LOC.TO14_BPI_GUI_SYS_PF_LOC_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_LOC_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_LOC.TO14_BPI_GUI_SYS_PF_LOC_C.Tick");

	UTO14_BPI_GUI_SYS_PF_LOC_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_LOC.TO14_BPI_GUI_SYS_PF_LOC_C.EventOnCloseAnimationEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_LOC_C::EventOnCloseAnimationEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_LOC.TO14_BPI_GUI_SYS_PF_LOC_C.EventOnCloseAnimationEnd");

	UTO14_BPI_GUI_SYS_PF_LOC_C_EventOnCloseAnimationEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_LOC.TO14_BPI_GUI_SYS_PF_LOC_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_LOC
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_LOC_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_LOC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_LOC.TO14_BPI_GUI_SYS_PF_LOC_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_LOC");

	UTO14_BPI_GUI_SYS_PF_LOC_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_LOC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
