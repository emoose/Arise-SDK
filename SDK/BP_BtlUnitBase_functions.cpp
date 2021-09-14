
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

// Function BP_BtlUnitBase.BP_BtlUnitBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlUnitBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitBase.BP_BtlUnitBase_C.UserConstructionScript");

	ABP_BtlUnitBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitBase.BP_BtlUnitBase_C.OnDeadEvent
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_BtlUnitBase_C::OnDeadEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitBase.BP_BtlUnitBase_C.OnDeadEvent");

	ABP_BtlUnitBase_C_OnDeadEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitBase.BP_BtlUnitBase_C.ExecuteUbergraph_BP_BtlUnitBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitBase_C::ExecuteUbergraph_BP_BtlUnitBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitBase.BP_BtlUnitBase_C.ExecuteUbergraph_BP_BtlUnitBase");

	ABP_BtlUnitBase_C_ExecuteUbergraph_BP_BtlUnitBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
