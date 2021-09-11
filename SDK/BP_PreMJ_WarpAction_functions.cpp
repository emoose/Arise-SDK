
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

// Function BP_PreMJ_WarpAction.BP_PreMJ_WarpAction_C.GetNearWarpActor
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 BascLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class ATO14_BP_WarpBase_C*     WarpActor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PreMJ_WarpAction_C::GetNearWarpActor(const struct FVector& BascLocation, class ATO14_BP_WarpBase_C** WarpActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreMJ_WarpAction.BP_PreMJ_WarpAction_C.GetNearWarpActor");

	UBP_PreMJ_WarpAction_C_GetNearWarpActor_Params params;
	params.BascLocation = BascLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WarpActor != nullptr)
		*WarpActor = params.WarpActor;
}


// Function BP_PreMJ_WarpAction.BP_PreMJ_WarpAction_C.Main
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_PreMJ_WarpAction_C::Main(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreMJ_WarpAction.BP_PreMJ_WarpAction_C.Main");

	UBP_PreMJ_WarpAction_C_Main_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PreMJ_WarpAction.BP_PreMJ_WarpAction_C.ExecuteUbergraph_BP_PreMJ_WarpAction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PreMJ_WarpAction_C::ExecuteUbergraph_BP_PreMJ_WarpAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreMJ_WarpAction.BP_PreMJ_WarpAction_C.ExecuteUbergraph_BP_PreMJ_WarpAction");

	UBP_PreMJ_WarpAction_C_ExecuteUbergraph_BP_PreMJ_WarpAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
