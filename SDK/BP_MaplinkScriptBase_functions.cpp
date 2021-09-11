
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

// Function BP_MaplinkScriptBase.BP_MaplinkScriptBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_MaplinkScriptBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MaplinkScriptBase.BP_MaplinkScriptBase_C.ReceiveBeginPlay");

	UBP_MaplinkScriptBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MaplinkScriptBase.BP_MaplinkScriptBase_C.ExecuteUbergraph_BP_MaplinkScriptBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MaplinkScriptBase_C::ExecuteUbergraph_BP_MaplinkScriptBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MaplinkScriptBase.BP_MaplinkScriptBase_C.ExecuteUbergraph_BP_MaplinkScriptBase");

	UBP_MaplinkScriptBase_C_ExecuteUbergraph_BP_MaplinkScriptBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
