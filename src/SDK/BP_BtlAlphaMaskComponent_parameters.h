#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.BattleDeferredCollection
struct UBP_BtlAlphaMaskComponent_C_BattleDeferredCollection_Params
{
};

// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.Received_CollectionCameraFadeComponent
struct UBP_BtlAlphaMaskComponent_C_Received_CollectionCameraFadeComponent_Params
{
	TArray<class UCameraFadeComponent*>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.Received_CollectionMeshComponent
struct UBP_BtlAlphaMaskComponent_C_Received_CollectionMeshComponent_Params
{
	TArray<class UMeshComponent*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.OnDeadCharacter
struct UBP_BtlAlphaMaskComponent_C_OnDeadCharacter_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.RemoveComponent
struct UBP_BtlAlphaMaskComponent_C_RemoveComponent_Params
{
};

// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.RegistComponent
struct UBP_BtlAlphaMaskComponent_C_RegistComponent_Params
{
};

// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.ReceiveBeginPlay
struct UBP_BtlAlphaMaskComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.ReceiveEndPlay
struct UBP_BtlAlphaMaskComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C.ExecuteUbergraph_BP_BtlAlphaMaskComponent
struct UBP_BtlAlphaMaskComponent_C_ExecuteUbergraph_BP_BtlAlphaMaskComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
