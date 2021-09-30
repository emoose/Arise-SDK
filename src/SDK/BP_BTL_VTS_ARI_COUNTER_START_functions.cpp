
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

// Function BP_BTL_VTS_ARI_COUNTER_START.BP_BTL_VTS_ARI_COUNTER_START_C.Received_Begin
// (Event, Protected, BlueprintEvent)

void UBP_BTL_VTS_ARI_COUNTER_START_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_ARI_COUNTER_START.BP_BTL_VTS_ARI_COUNTER_START_C.Received_Begin");

	UBP_BTL_VTS_ARI_COUNTER_START_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_ARI_COUNTER_START.BP_BTL_VTS_ARI_COUNTER_START_C.ExecuteUbergraph_BP_BTL_VTS_ARI_COUNTER_START
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_ARI_COUNTER_START_C::ExecuteUbergraph_BP_BTL_VTS_ARI_COUNTER_START(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_ARI_COUNTER_START.BP_BTL_VTS_ARI_COUNTER_START_C.ExecuteUbergraph_BP_BTL_VTS_ARI_COUNTER_START");

	UBP_BTL_VTS_ARI_COUNTER_START_C_ExecuteUbergraph_BP_BTL_VTS_ARI_COUNTER_START_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
