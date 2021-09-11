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

// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.GetDefine
struct UBP_SCHOBJ_BaseComponent_C_GetDefine_Params
{
	EPFSCHObjDefine                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.GetTargetLocation
struct UBP_SCHOBJ_BaseComponent_C_GetTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.GetPFDelegateManager
struct UBP_SCHOBJ_BaseComponent_C_GetPFDelegateManager_Params
{
	class APFDelegateManager*                          Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.GetInteractiveSize
struct UBP_SCHOBJ_BaseComponent_C_GetInteractiveSize_Params
{
	float                                              Field;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Dungeon;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Town;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.GetShortChatDatabase
struct UBP_SCHOBJ_BaseComponent_C_GetShortChatDatabase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.OnLookAt_StartImpl
struct UBP_SCHOBJ_BaseComponent_C_OnLookAt_StartImpl_Params
{
	class AActor*                                      Target;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PC;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.ReceiveBeginPlay
struct UBP_SCHOBJ_BaseComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.OnChangeStateBP
struct UBP_SCHOBJ_BaseComponent_C_OnChangeStateBP_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.OnLookAt_LoopImpl
struct UBP_SCHOBJ_BaseComponent_C_OnLookAt_LoopImpl_Params
{
	class AActor*                                      PC;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.OnPFDelegate
struct UBP_SCHOBJ_BaseComponent_C_OnPFDelegate_Params
{
	class UPFDelegateArgs_EnableControl*               InArgs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.BindEvent
struct UBP_SCHOBJ_BaseComponent_C_BindEvent_Params
{
};

// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.ReceiveEndPlay
struct UBP_SCHOBJ_BaseComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.ExecuteUbergraph_BP_SCHOBJ_BaseComponent
struct UBP_SCHOBJ_BaseComponent_C_ExecuteUbergraph_BP_SCHOBJ_BaseComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
