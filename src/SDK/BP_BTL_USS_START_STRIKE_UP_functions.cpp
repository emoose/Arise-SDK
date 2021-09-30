
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

// Function BP_BTL_USS_START_STRIKE_UP.BP_BTL_USS_START_STRIKE_UP_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_START_STRIKE_UP_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_START_STRIKE_UP.BP_BTL_USS_START_STRIKE_UP_C.OnEnabled");

	UBP_BTL_USS_START_STRIKE_UP_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_START_STRIKE_UP.BP_BTL_USS_START_STRIKE_UP_C.ExecuteUbergraph_BP_BTL_USS_START_STRIKE_UP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_START_STRIKE_UP_C::ExecuteUbergraph_BP_BTL_USS_START_STRIKE_UP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_START_STRIKE_UP.BP_BTL_USS_START_STRIKE_UP_C.ExecuteUbergraph_BP_BTL_USS_START_STRIKE_UP");

	UBP_BTL_USS_START_STRIKE_UP_C_ExecuteUbergraph_BP_BTL_USS_START_STRIKE_UP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
