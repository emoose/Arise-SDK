
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

// Function HitObjectMemory.HitObjectMemory_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UHitObjectMemory_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitObjectMemory.HitObjectMemory_C.ReceiveBeginPlay");

	UHitObjectMemory_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitObjectMemory.HitObjectMemory_C.ExecuteUbergraph_HitObjectMemory
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitObjectMemory_C::ExecuteUbergraph_HitObjectMemory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitObjectMemory.HitObjectMemory_C.ExecuteUbergraph_HitObjectMemory");

	UHitObjectMemory_C_ExecuteUbergraph_HitObjectMemory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
