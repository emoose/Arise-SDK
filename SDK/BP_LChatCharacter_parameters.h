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

// Function BP_LChatCharacter.BP_LChatCharacter_C.DestroyAniminstance
struct ABP_LChatCharacter_C_DestroyAniminstance_Params
{
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.SetPhysicsRestTime
struct ABP_LChatCharacter_C_SetPhysicsRestTime_Params
{
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.GetPhysicsRestTime
struct ABP_LChatCharacter_C_GetPhysicsRestTime_Params
{
	int                                                Times;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.SetCharacterTickableWhenPaused
struct ABP_LChatCharacter_C_SetCharacterTickableWhenPaused_Params
{
	bool                                               TickableWhenPaused;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.ResetFacial
struct ABP_LChatCharacter_C_ResetFacial_Params
{
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.RefreshCharacter
struct ABP_LChatCharacter_C_RefreshCharacter_Params
{
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.StopEyeBlink
struct ABP_LChatCharacter_C_StopEyeBlink_Params
{
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.RequestOpenEye
struct ABP_LChatCharacter_C_RequestOpenEye_Params
{
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.SetEyeHighlight
struct ABP_LChatCharacter_C_SetEyeHighlight_Params
{
	struct FString                                     PoseName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              PoseRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.GetFacialComponent
struct ABP_LChatCharacter_C_GetFacialComponent_Params
{
	class UAriseCharacterFacialComponent*              FacialComponent;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.SetFaicalPose
struct ABP_LChatCharacter_C_SetFaicalPose_Params
{
	struct FString                                     EyePose;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     MouthPose;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     EyelidPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.SetFaicalByDatabase
struct ABP_LChatCharacter_C_SetFaicalByDatabase_Params
{
	struct FString                                     charId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     FacialName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     EyePoseName;                                              // (Parm, OutParm, ZeroConstructor)
	struct FString                                     MouthPoseName;                                            // (Parm, OutParm, ZeroConstructor)
	struct FAchCharacterFacialPresetData               FacialDatabaseItem;                                       // (Parm, OutParm)
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.UpdateTransform
struct ABP_LChatCharacter_C_UpdateTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.AttachToCharacter
struct ABP_LChatCharacter_C_AttachToCharacter_Params
{
	class ABP_LChatCharacter_C*                        ParentChara;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.SetEyeBlinkMode
struct ABP_LChatCharacter_C_SetEyeBlinkMode_Params
{
	struct FString                                     BlinkMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.UserConstructionScript
struct ABP_LChatCharacter_C_UserConstructionScript_Params
{
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.OnForceTeleport_
struct ABP_LChatCharacter_C_OnForceTeleport__Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.ReceiveTick
struct ABP_LChatCharacter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.ReceiveBeginPlay
struct ABP_LChatCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_LChatCharacter.BP_LChatCharacter_C.ExecuteUbergraph_BP_LChatCharacter
struct ABP_LChatCharacter_C_ExecuteUbergraph_BP_LChatCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
