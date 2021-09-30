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

// Function BP_BattleManager.BP_BattleManager_C.LineTraceForWall
struct ABP_BattleManager_C_LineTraceForWall_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BattleManager.BP_BattleManager_C.ScreenMaskCaptchImpl
struct ABP_BattleManager_C_ScreenMaskCaptchImpl_Params
{
	struct FBtlScreenCaptchaWidget_DatabaseLabel       Label;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABP_ScreenEncountEffectWidgetBase_C*         ScreenMask;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManager.BP_BattleManager_C.UserConstructionScript
struct ABP_BattleManager_C_UserConstructionScript_Params
{
};

// Function BP_BattleManager.BP_BattleManager_C.ScreenCaptchaAddViewport
struct ABP_BattleManager_C_ScreenCaptchaAddViewport_Params
{
	struct FBtlScreenCaptchaWidget_DatabaseLabel       WidgetLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BattleManager.BP_BattleManager_C.ScreenCaptchaFadeOut
struct ABP_BattleManager_C_ScreenCaptchaFadeOut_Params
{
};

// Function BP_BattleManager.BP_BattleManager_C.ReceiveFinalize
struct ABP_BattleManager_C_ReceiveFinalize_Params
{
};

// Function BP_BattleManager.BP_BattleManager_C.ReceiveBeginPlay
struct ABP_BattleManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_BattleManager.BP_BattleManager_C.ReceiveEndPlay
struct ABP_BattleManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManager.BP_BattleManager_C.OnChangeEquipmentEvent
struct ABP_BattleManager_C_OnChangeEquipmentEvent_Params
{
	EArisePartyID                                      Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManager.BP_BattleManager_C.ExecuteUbergraph_BP_BattleManager
struct ABP_BattleManager_C_ExecuteUbergraph_BP_BattleManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
