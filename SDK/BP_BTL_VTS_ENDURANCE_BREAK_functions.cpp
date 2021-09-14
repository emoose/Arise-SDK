
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

// Function BP_BTL_VTS_ENDURANCE_BREAK.BP_BTL_VTS_ENDURANCE_BREAK_C.Received_Begin
// (Event, Protected, BlueprintEvent)

void UBP_BTL_VTS_ENDURANCE_BREAK_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_ENDURANCE_BREAK.BP_BTL_VTS_ENDURANCE_BREAK_C.Received_Begin");

	UBP_BTL_VTS_ENDURANCE_BREAK_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_ENDURANCE_BREAK.BP_BTL_VTS_ENDURANCE_BREAK_C.ExecuteUbergraph_BP_BTL_VTS_ENDURANCE_BREAK
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_ENDURANCE_BREAK_C::ExecuteUbergraph_BP_BTL_VTS_ENDURANCE_BREAK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_ENDURANCE_BREAK.BP_BTL_VTS_ENDURANCE_BREAK_C.ExecuteUbergraph_BP_BTL_VTS_ENDURANCE_BREAK");

	UBP_BTL_VTS_ENDURANCE_BREAK_C_ExecuteUbergraph_BP_BTL_VTS_ENDURANCE_BREAK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
