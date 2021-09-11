
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

// Function TO14_BPI_GUI_MNU_TOP_FRAME.TO14_BPI_GUI_MNU_TOP_FRAME_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_FRAME_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FRAME.TO14_BPI_GUI_MNU_TOP_FRAME_C.Tick");

	UTO14_BPI_GUI_MNU_TOP_FRAME_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_FRAME.TO14_BPI_GUI_MNU_TOP_FRAME_C.PlayInAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_FRAME_C::PlayInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FRAME.TO14_BPI_GUI_MNU_TOP_FRAME_C.PlayInAnimation");

	UTO14_BPI_GUI_MNU_TOP_FRAME_C_PlayInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_FRAME.TO14_BPI_GUI_MNU_TOP_FRAME_C.PlayOutAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_FRAME_C::PlayOutAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FRAME.TO14_BPI_GUI_MNU_TOP_FRAME_C.PlayOutAnimation");

	UTO14_BPI_GUI_MNU_TOP_FRAME_C_PlayOutAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_FRAME.TO14_BPI_GUI_MNU_TOP_FRAME_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_FRAME_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FRAME.TO14_BPI_GUI_MNU_TOP_FRAME_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_TOP_FRAME_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_FRAME.TO14_BPI_GUI_MNU_TOP_FRAME_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_FRAME_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FRAME.TO14_BPI_GUI_MNU_TOP_FRAME_C.Construct");

	UTO14_BPI_GUI_MNU_TOP_FRAME_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_FRAME.TO14_BPI_GUI_MNU_TOP_FRAME_C.EventInitialize
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_FRAME_C::EventInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FRAME.TO14_BPI_GUI_MNU_TOP_FRAME_C.EventInitialize");

	UTO14_BPI_GUI_MNU_TOP_FRAME_C_EventInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_FRAME.TO14_BPI_GUI_MNU_TOP_FRAME_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_FRAME
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_FRAME_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_FRAME(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FRAME.TO14_BPI_GUI_MNU_TOP_FRAME_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_FRAME");

	UTO14_BPI_GUI_MNU_TOP_FRAME_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_FRAME_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
