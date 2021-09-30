
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

// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_3DPARTICLE_C::SetScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.SetScale");

	UBP_MNU_3DPARTICLE_C_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.IsPlaying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsPlaying                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_3DPARTICLE_C::IsPlaying(bool* IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.IsPlaying");

	UBP_MNU_3DPARTICLE_C_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}


// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.SetWidgetComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        WidgetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MNU_3DPARTICLE_C::SetWidgetComponent(class UWidgetComponent* WidgetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.SetWidgetComponent");

	UBP_MNU_3DPARTICLE_C_SetWidgetComponent_Params params;
	params.WidgetComponent = WidgetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MNU_3DPARTICLE_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.Stop");

	UBP_MNU_3DPARTICLE_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.Play
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_MNU_3DPARTICLE_C::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.Play");

	UBP_MNU_3DPARTICLE_C_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.OnPlayEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_3DPARTICLE_C::OnPlayEnd(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.OnPlayEnd");

	UBP_MNU_3DPARTICLE_C_OnPlayEnd_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_3DPARTICLE_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.Tick");

	UBP_MNU_3DPARTICLE_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.ExecuteUbergraph_BP_MNU_3DPARTICLE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_3DPARTICLE_C::ExecuteUbergraph_BP_MNU_3DPARTICLE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.ExecuteUbergraph_BP_MNU_3DPARTICLE");

	UBP_MNU_3DPARTICLE_C_ExecuteUbergraph_BP_MNU_3DPARTICLE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
