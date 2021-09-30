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

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEyelid
struct ABP_PF_NpcCharacterStand_C_SetFacialEyelid_Params
{
	int                                                No;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.GetFacialPresetSelection
struct ABP_PF_NpcCharacterStand_C_GetFacialPresetSelection_Params
{
	int                                                PresetNo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPFNpcFacialPresetData                      PresetData;                                               // (Parm, OutParm)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialPreset
struct ABP_PF_NpcCharacterStand_C_SetFacialPreset_Params
{
	int                                                PresetNo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEye_LookAt
struct ABP_PF_NpcCharacterStand_C_SetFacialEye_LookAt_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetDefaultFacialData
struct ABP_PF_NpcCharacterStand_C_SetDefaultFacialData_Params
{
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetOverrideFacialData
struct ABP_PF_NpcCharacterStand_C_SetOverrideFacialData_Params
{
	struct FPFNpcDefineFacialData                      OverrideFacialData;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialData
struct ABP_PF_NpcCharacterStand_C_SetFacialData_Params
{
	struct FPFNpcDefineFacialData                      FacialData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialIris
struct ABP_PF_NpcCharacterStand_C_SetFacialIris_Params
{
	int                                                No;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEye_Highlight
struct ABP_PF_NpcCharacterStand_C_SetFacialEye_Highlight_Params
{
	int                                                No;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialWrinkle1
struct ABP_PF_NpcCharacterStand_C_SetFacialWrinkle1_Params
{
	int                                                No;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialWrinkle0
struct ABP_PF_NpcCharacterStand_C_SetFacialWrinkle0_Params
{
	int                                                No;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEmotion1
struct ABP_PF_NpcCharacterStand_C_SetFacialEmotion1_Params
{
	int                                                No;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEmotion0
struct ABP_PF_NpcCharacterStand_C_SetFacialEmotion0_Params
{
	int                                                No;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.BuildCharacter
struct ABP_PF_NpcCharacterStand_C_BuildCharacter_Params
{
	struct FPFNpcPlacementData                         PlacementInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bNoCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockBuild;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCameraFade;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedsFacePoseOnly;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Use_Render_Culling;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoadImmediate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEmpty;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetEnableFacialLip
struct ABP_PF_NpcCharacterStand_C_SetEnableFacialLip_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialLip
struct ABP_PF_NpcCharacterStand_C_SetFacialLip_Params
{
	int                                                LipNo;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialAutoLip
struct ABP_PF_NpcCharacterStand_C_SetFacialAutoLip_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LimitTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialPresetNo
struct ABP_PF_NpcCharacterStand_C_SetFacialPresetNo_Params
{
	int                                                FacialPresetNo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEye
struct ABP_PF_NpcCharacterStand_C_SetFacialEye_Params
{
	int                                                EyeNo;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialAutoBlink
struct ABP_PF_NpcCharacterStand_C_SetFacialAutoBlink_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.UserConstructionScript
struct ABP_PF_NpcCharacterStand_C_UserConstructionScript_Params
{
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.ReceiveBeginPlay
struct ABP_PF_NpcCharacterStand_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.BeginOneTop
struct ABP_PF_NpcCharacterStand_C_BeginOneTop_Params
{
	class AActor*                                      Listener;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.EndOneTop
struct ABP_PF_NpcCharacterStand_C_EndOneTop_Params
{
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.ReceiveEndPlay
struct ABP_PF_NpcCharacterStand_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.ReceiveBuildCharacterInitAnim
struct ABP_PF_NpcCharacterStand_C_ReceiveBuildCharacterInitAnim_Params
{
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.OnBuildCharacter
struct ABP_PF_NpcCharacterStand_C_OnBuildCharacter_Params
{
};

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.ExecuteUbergraph_BP_PF_NpcCharacterStand
struct ABP_PF_NpcCharacterStand_C_ExecuteUbergraph_BP_PF_NpcCharacterStand_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
