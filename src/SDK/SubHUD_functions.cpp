
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

// Function SubHUD.SubHUD_C.RenderHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ASubHUD_C::RenderHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubHUD.SubHUD_C.RenderHUD");

	ASubHUD_C_RenderHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubHUD.SubHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASubHUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubHUD.SubHUD_C.UserConstructionScript");

	ASubHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubHUD.SubHUD_C.RenderEvent
// (BlueprintCallable, BlueprintEvent)

void ASubHUD_C::RenderEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubHUD.SubHUD_C.RenderEvent");

	ASubHUD_C_RenderEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubHUD.SubHUD_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASubHUD_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubHUD.SubHUD_C.ReceiveTick");

	ASubHUD_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubHUD.SubHUD_C.ExecuteUbergraph_SubHUD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASubHUD_C::ExecuteUbergraph_SubHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubHUD.SubHUD_C.ExecuteUbergraph_SubHUD");

	ASubHUD_C_ExecuteUbergraph_SubHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
