
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

// Function UMG_EventPause.UMG_EventPause_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_EventPause_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_EventPause.UMG_EventPause_C.Tick");

	UUMG_EventPause_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_EventPause.UMG_EventPause_C.OnChangeDebugCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_EventPause_C::OnChangeDebugCamera(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_EventPause.UMG_EventPause_C.OnChangeDebugCamera");

	UUMG_EventPause_C_OnChangeDebugCamera_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_EventPause.UMG_EventPause_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_EventPause_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_EventPause.UMG_EventPause_C.Construct");

	UUMG_EventPause_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_EventPause.UMG_EventPause_C.ExecuteUbergraph_UMG_EventPause
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_EventPause_C::ExecuteUbergraph_UMG_EventPause(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_EventPause.UMG_EventPause_C.ExecuteUbergraph_UMG_EventPause");

	UUMG_EventPause_C_ExecuteUbergraph_UMG_EventPause_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
