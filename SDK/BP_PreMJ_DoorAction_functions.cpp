
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

// Function BP_PreMJ_DoorAction.BP_PreMJ_DoorAction_C.Main
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_PreMJ_DoorAction_C::Main(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreMJ_DoorAction.BP_PreMJ_DoorAction_C.Main");

	UBP_PreMJ_DoorAction_C_Main_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PreMJ_DoorAction.BP_PreMJ_DoorAction_C.ExecuteUbergraph_BP_PreMJ_DoorAction
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PreMJ_DoorAction_C::ExecuteUbergraph_BP_PreMJ_DoorAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreMJ_DoorAction.BP_PreMJ_DoorAction_C.ExecuteUbergraph_BP_PreMJ_DoorAction");

	UBP_PreMJ_DoorAction_C_ExecuteUbergraph_BP_PreMJ_DoorAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
