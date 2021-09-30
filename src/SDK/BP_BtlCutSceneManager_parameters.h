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

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.IsMysticLevelInvisiableComplated
struct ABP_BtlCutSceneManager_C_IsMysticLevelInvisiableComplated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.IsMysticLevelVisiableComplated
struct ABP_BtlCutSceneManager_C_IsMysticLevelVisiableComplated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.IsMysticLevelReleased
struct ABP_BtlCutSceneManager_C_IsMysticLevelReleased_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.IsLeanmedMystic
struct ABP_BtlCutSceneManager_C_IsLeanmedMystic_Params
{
	class ABtlCharacterBase*                           TargetCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.UserConstructionScript
struct ABP_BtlCutSceneManager_C_UserConstructionScript_Params
{
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.PrePlayMystic
struct ABP_BtlCutSceneManager_C_PrePlayMystic_Params
{
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.PreEndMystic
struct ABP_BtlCutSceneManager_C_PreEndMystic_Params
{
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCharacterSignature__DelegateSignature
struct ABP_BtlCutSceneManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCharacterSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlCharacterSignature__DelegateSignature
struct ABP_BtlCutSceneManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlCharacterSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.LoadRequestMysticLevel
struct ABP_BtlCutSceneManager_C_LoadRequestMysticLevel_Params
{
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.UnloadRequestMysticLevel
struct ABP_BtlCutSceneManager_C_UnloadRequestMysticLevel_Params
{
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventBeginSignature__DelegateSignature
struct ABP_BtlCutSceneManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventBeginSignature__DelegateSignature_Params
{
	struct FBtlCutSceneBeginParam                      Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.ReceiveBeginPlay
struct ABP_BtlCutSceneManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.ReceiveEndPlay
struct ABP_BtlCutSceneManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.Received_OnPlayEvent
struct ABP_BtlCutSceneManager_C_Received_OnPlayEvent_Params
{
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.Received_OnEndEvent
struct ABP_BtlCutSceneManager_C_Received_OnEndEvent_Params
{
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature
struct ABP_BtlCutSceneManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.ReservationPlayMystic
struct ABP_BtlCutSceneManager_C_ReservationPlayMystic_Params
{
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSimpleSignature__DelegateSignature
struct ABP_BtlCutSceneManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.ExecuteUbergraph_BP_BtlCutSceneManager
struct ABP_BtlCutSceneManager_C_ExecuteUbergraph_BP_BtlCutSceneManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
