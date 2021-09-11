
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

// Function BP_BTL_USS_MOVE_SPEED_UP.BP_BTL_USS_MOVE_SPEED_UP_C.OnUnapplySkill
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_MOVE_SPEED_UP_C::OnUnapplySkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_MOVE_SPEED_UP.BP_BTL_USS_MOVE_SPEED_UP_C.OnUnapplySkill");

	UBP_BTL_USS_MOVE_SPEED_UP_C_OnUnapplySkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_MOVE_SPEED_UP.BP_BTL_USS_MOVE_SPEED_UP_C.OnApplySkill
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_MOVE_SPEED_UP_C::OnApplySkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_MOVE_SPEED_UP.BP_BTL_USS_MOVE_SPEED_UP_C.OnApplySkill");

	UBP_BTL_USS_MOVE_SPEED_UP_C_OnApplySkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_MOVE_SPEED_UP.BP_BTL_USS_MOVE_SPEED_UP_C.UpdateMoveSpeed
// (BlueprintCallable, BlueprintEvent)

void UBP_BTL_USS_MOVE_SPEED_UP_C::UpdateMoveSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_MOVE_SPEED_UP.BP_BTL_USS_MOVE_SPEED_UP_C.UpdateMoveSpeed");

	UBP_BTL_USS_MOVE_SPEED_UP_C_UpdateMoveSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_MOVE_SPEED_UP.BP_BTL_USS_MOVE_SPEED_UP_C.ExecuteUbergraph_BP_BTL_USS_MOVE_SPEED_UP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_MOVE_SPEED_UP_C::ExecuteUbergraph_BP_BTL_USS_MOVE_SPEED_UP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_MOVE_SPEED_UP.BP_BTL_USS_MOVE_SPEED_UP_C.ExecuteUbergraph_BP_BTL_USS_MOVE_SPEED_UP");

	UBP_BTL_USS_MOVE_SPEED_UP_C_ExecuteUbergraph_BP_BTL_USS_MOVE_SPEED_UP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
