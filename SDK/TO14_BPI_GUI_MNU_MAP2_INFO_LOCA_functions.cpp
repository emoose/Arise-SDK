
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

// Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.RefreshAsLocation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C::RefreshAsLocation(struct FMapLocationData* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.RefreshAsLocation");

	UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C_RefreshAsLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.OnViewClose");

	UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.OnViewOpenFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C::OnViewOpenFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.OnViewOpenFinished");

	UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C_OnViewOpenFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.OnRefreshAsLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C::OnRefreshAsLocation(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.OnRefreshAsLocation");

	UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C_OnRefreshAsLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_INFO_LOCA
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_INFO_LOCA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_INFO_LOCA");

	UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
