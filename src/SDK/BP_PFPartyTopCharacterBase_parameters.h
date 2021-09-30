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

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.IsBuildCharacter
struct ABP_PFPartyTopCharacterBase_C_IsBuildCharacter_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.IsPlayVibration
struct ABP_PFPartyTopCharacterBase_C_IsPlayVibration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.IsDebugInputEnable
struct ABP_PFPartyTopCharacterBase_C_IsDebugInputEnable_Params
{
	bool                                               bOut;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.SetLookAtSymbol
struct ABP_PFPartyTopCharacterBase_C_SetLookAtSymbol_Params
{
	class AActor*                                      NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDE_PFPartyTopLookAtType>              LookAtType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.FadeOut
struct ABP_PFPartyTopCharacterBase_C_FadeOut_Params
{
	float                                              InFadeTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.FadeIn
struct ABP_PFPartyTopCharacterBase_C_FadeIn_Params
{
	float                                              InFadeTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.Initialize
struct ABP_PFPartyTopCharacterBase_C_Initialize_Params
{
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.ReconstructFromPartyTop
struct ABP_PFPartyTopCharacterBase_C_ReconstructFromPartyTop_Params
{
	bool                                               bBlock;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.UserConstructionScript
struct ABP_PFPartyTopCharacterBase_C_UserConstructionScript_Params
{
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.IF_ReconstPartyTop
struct ABP_PFPartyTopCharacterBase_C_IF_ReconstPartyTop_Params
{
	bool                                               bLock;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.Event On Game State Change
struct ABP_PFPartyTopCharacterBase_C_Event_On_Game_State_Change_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.BuildCharacter
struct ABP_PFPartyTopCharacterBase_C_BuildCharacter_Params
{
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.OnBuildCharacter
struct ABP_PFPartyTopCharacterBase_C_OnBuildCharacter_Params
{
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.OnResetCharacter
struct ABP_PFPartyTopCharacterBase_C_OnResetCharacter_Params
{
	bool                                               bInIndoorMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.Event On Post Map Change
struct ABP_PFPartyTopCharacterBase_C_Event_On_Post_Map_Change_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.Event On Pre Map Change
struct ABP_PFPartyTopCharacterBase_C_Event_On_Pre_Map_Change_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.OnChangedDisplayScene
struct ABP_PFPartyTopCharacterBase_C_OnChangedDisplayScene_Params
{
	unsigned char                                      ChangedScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldScene;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.«0¹0¿0à0¤0Ù0ó0È0_1
struct ABP_PFPartyTopCharacterBase_C_«0¹0¿0à0¤0Ù0ó0È0_1_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.ReceiveTick
struct ABP_PFPartyTopCharacterBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.«0¹0¿0à0¤0Ù0ó0È0_2
struct ABP_PFPartyTopCharacterBase_C_«0¹0¿0à0¤0Ù0ó0È0_2_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.ReceiveBeginPlay
struct ABP_PFPartyTopCharacterBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.CustomEvent_1
struct ABP_PFPartyTopCharacterBase_C_CustomEvent_1_Params
{
};

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.ExecuteUbergraph_BP_PFPartyTopCharacterBase
struct ABP_PFPartyTopCharacterBase_C_ExecuteUbergraph_BP_PFPartyTopCharacterBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
