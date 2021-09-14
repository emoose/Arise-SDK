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

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.GetDebShowInfoMessage
struct ABP_PF_MAPOBJ_BreakBase_C_GetDebShowInfoMessage_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutMessage;                                               // (Parm, OutParm, ZeroConstructor)
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.OnSetHideModel
struct ABP_PF_MAPOBJ_BreakBase_C_OnSetHideModel_Params
{
	bool                                               bVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.OnSetGatheredModel
struct ABP_PF_MAPOBJ_BreakBase_C_OnSetGatheredModel_Params
{
	bool                                               bVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.OnSetBaseModel
struct ABP_PF_MAPOBJ_BreakBase_C_OnSetBaseModel_Params
{
	bool                                               bVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.IsPop
struct ABP_PF_MAPOBJ_BreakBase_C_IsPop_Params
{
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.SetDiscover
struct ABP_PF_MAPOBJ_BreakBase_C_SetDiscover_Params
{
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.IsDiscover
struct ABP_PF_MAPOBJ_BreakBase_C_IsDiscover_Params
{
	bool                                               bCleared;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.GetPrimitiveComponent
struct ABP_PF_MAPOBJ_BreakBase_C_GetPrimitiveComponent_Params
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.GetLineTraceHit
struct ABP_PF_MAPOBJ_BreakBase_C_GetLineTraceHit_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HeightOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTrace;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.FinishBreak
struct ABP_PF_MAPOBJ_BreakBase_C_FinishBreak_Params
{
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.Break
struct ABP_PF_MAPOBJ_BreakBase_C_Break_Params
{
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.FinishDamage
struct ABP_PF_MAPOBJ_BreakBase_C_FinishDamage_Params
{
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.Damage
struct ABP_PF_MAPOBJ_BreakBase_C_Damage_Params
{
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.OnDamage
struct ABP_PF_MAPOBJ_BreakBase_C_OnDamage_Params
{
	int                                                Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBreak;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.UserConstructionScript
struct ABP_PF_MAPOBJ_BreakBase_C_UserConstructionScript_Params
{
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.On Receive Field Action
struct ABP_PF_MAPOBJ_BreakBase_C_On_Receive_Field_Action_Params
{
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.ReceiveOnConstruction
struct ABP_PF_MAPOBJ_BreakBase_C_ReceiveOnConstruction_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.OnFoundTrapIn
struct ABP_PF_MAPOBJ_BreakBase_C_OnFoundTrapIn_Params
{
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.SetShowModel
struct ABP_PF_MAPOBJ_BreakBase_C_SetShowModel_Params
{
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.ReceiveBeginPlay
struct ABP_PF_MAPOBJ_BreakBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.ExecuteUbergraph_BP_PF_MAPOBJ_BreakBase
struct ABP_PF_MAPOBJ_BreakBase_C_ExecuteUbergraph_BP_PF_MAPOBJ_BreakBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
