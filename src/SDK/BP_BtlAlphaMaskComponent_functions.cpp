
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

// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.BattleDeferredCollection
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlAlphaMaskComponent_C::BattleDeferredCollection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.BattleDeferredCollection");

	UBP_BtlAlphaMaskComponent_C_BattleDeferredCollection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.Received_CollectionCameraFadeComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UCameraFadeComponent*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UCameraFadeComponent*> UBP_BtlAlphaMaskComponent_C::Received_CollectionCameraFadeComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.Received_CollectionCameraFadeComponent");

	UBP_BtlAlphaMaskComponent_C_Received_CollectionCameraFadeComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.Received_CollectionMeshComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UMeshComponent*>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMeshComponent*> UBP_BtlAlphaMaskComponent_C::Received_CollectionMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.Received_CollectionMeshComponent");

	UBP_BtlAlphaMaskComponent_C_Received_CollectionMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.OnDeadCharacter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BtlAlphaMaskComponent_C::OnDeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.OnDeadCharacter");

	UBP_BtlAlphaMaskComponent_C_OnDeadCharacter_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.RemoveComponent
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlAlphaMaskComponent_C::RemoveComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.RemoveComponent");

	UBP_BtlAlphaMaskComponent_C_RemoveComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.RegistComponent
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlAlphaMaskComponent_C::RegistComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.RegistComponent");

	UBP_BtlAlphaMaskComponent_C_RegistComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_BtlAlphaMaskComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.ReceiveBeginPlay");

	UBP_BtlAlphaMaskComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAlphaMaskComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.ReceiveEndPlay");

	UBP_BtlAlphaMaskComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.ExecuteUbergraph_BP_BtlAlphaMaskComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAlphaMaskComponent_C::ExecuteUbergraph_BP_BtlAlphaMaskComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.ExecuteUbergraph_BP_BtlAlphaMaskComponent");

	UBP_BtlAlphaMaskComponent_C_ExecuteUbergraph_BP_BtlAlphaMaskComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
