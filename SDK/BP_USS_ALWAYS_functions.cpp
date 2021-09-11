
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

// Function BP_USS_ALWAYS.BP_USS_ALWAYS_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_ALWAYS_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ALWAYS.BP_USS_ALWAYS_C.OnEnabled");

	UBP_USS_ALWAYS_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_ALWAYS.BP_USS_ALWAYS_C.ExecuteUbergraph_BP_USS_ALWAYS
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_ALWAYS_C::ExecuteUbergraph_BP_USS_ALWAYS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ALWAYS.BP_USS_ALWAYS_C.ExecuteUbergraph_BP_USS_ALWAYS");

	UBP_USS_ALWAYS_C_ExecuteUbergraph_BP_USS_ALWAYS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
