
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

// Function BP_PreMJ_MoveAction.BP_PreMJ_MoveAction_C.GetMoveRotationFromMaplinkRot
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 MaplinkLoc                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                MoveRotator                    (Parm, OutParm, IsPlainOldData)

void UBP_PreMJ_MoveAction_C::GetMoveRotationFromMaplinkRot(const struct FVector& MaplinkLoc, struct FRotator* MoveRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreMJ_MoveAction.BP_PreMJ_MoveAction_C.GetMoveRotationFromMaplinkRot");

	UBP_PreMJ_MoveAction_C_GetMoveRotationFromMaplinkRot_Params params;
	params.MaplinkLoc = MaplinkLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoveRotator != nullptr)
		*MoveRotator = params.MoveRotator;
}


// Function BP_PreMJ_MoveAction.BP_PreMJ_MoveAction_C.GetMoveRotationFromMaplinkDB
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapLinkName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FRotator                MoveRotator                    (Parm, OutParm, IsPlainOldData)

void UBP_PreMJ_MoveAction_C::GetMoveRotationFromMaplinkDB(const struct FString& MapLinkName, struct FRotator* MoveRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreMJ_MoveAction.BP_PreMJ_MoveAction_C.GetMoveRotationFromMaplinkDB");

	UBP_PreMJ_MoveAction_C_GetMoveRotationFromMaplinkDB_Params params;
	params.MapLinkName = MapLinkName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoveRotator != nullptr)
		*MoveRotator = params.MoveRotator;
}


// Function BP_PreMJ_MoveAction.BP_PreMJ_MoveAction_C.Main
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_PreMJ_MoveAction_C::Main(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreMJ_MoveAction.BP_PreMJ_MoveAction_C.Main");

	UBP_PreMJ_MoveAction_C_Main_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PreMJ_MoveAction.BP_PreMJ_MoveAction_C.ExecuteUbergraph_BP_PreMJ_MoveAction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PreMJ_MoveAction_C::ExecuteUbergraph_BP_PreMJ_MoveAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreMJ_MoveAction.BP_PreMJ_MoveAction_C.ExecuteUbergraph_BP_PreMJ_MoveAction");

	UBP_PreMJ_MoveAction_C_ExecuteUbergraph_BP_PreMJ_MoveAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
