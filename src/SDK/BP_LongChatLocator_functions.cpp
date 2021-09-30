
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

// Function BP_LongChatLocator.BP_LongChatLocator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LongChatLocator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatLocator.BP_LongChatLocator_C.UserConstructionScript");

	ABP_LongChatLocator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatLocator.BP_LongChatLocator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatLocator_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatLocator.BP_LongChatLocator_C.ReceiveTick");

	ABP_LongChatLocator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatLocator.BP_LongChatLocator_C.ExecuteUbergraph_BP_LongChatLocator
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatLocator_C::ExecuteUbergraph_BP_LongChatLocator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatLocator.BP_LongChatLocator_C.ExecuteUbergraph_BP_LongChatLocator");

	ABP_LongChatLocator_C_ExecuteUbergraph_BP_LongChatLocator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
