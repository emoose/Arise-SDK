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

// Function BP_MenuCamera.BP_MenuCamera_C.CalcLocations_New2
struct ABP_MenuCamera_C_CalcLocations_New2_Params
{
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSafeZone;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Camera;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BG;                                                       // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MenuCamera.BP_MenuCamera_C.GetCharacterPosition
struct ABP_MenuCamera_C_GetCharacterPosition_Params
{
	struct FVector                                     OutCharaPosition;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MenuCamera.BP_MenuCamera_C.CalcLocations
struct ABP_MenuCamera_C_CalcLocations_Params
{
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Camera;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BG;                                                       // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MenuCamera.BP_MenuCamera_C.SetOffset
struct ABP_MenuCamera_C_SetOffset_Params
{
	struct FVector2D                                   Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_MenuCamera.BP_MenuCamera_C.CalcLocations_New
struct ABP_MenuCamera_C_CalcLocations_New_Params
{
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Camera;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BG;                                                       // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MenuCamera.BP_MenuCamera_C.GetRadiusOfInscribedCircle
struct ABP_MenuCamera_C_GetRadiusOfInscribedCircle_Params
{
	float                                              Bottom;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuCamera.BP_MenuCamera_C.GetDistanceFromFOV
struct ABP_MenuCamera_C_GetDistanceFromFOV_Params
{
	float                                              BGWidth;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSafeZone;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MenuCamera.BP_MenuCamera_C.SetPositionAuto
struct ABP_MenuCamera_C_SetPositionAuto_Params
{
	struct FTransform                                  Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_MenuCamera.BP_MenuCamera_C.UserConstructionScript
struct ABP_MenuCamera_C_UserConstructionScript_Params
{
};

// Function BP_MenuCamera.BP_MenuCamera_C.ReceiveBeginPlay
struct ABP_MenuCamera_C_ReceiveBeginPlay_Params
{
};

// Function BP_MenuCamera.BP_MenuCamera_C.ExecuteUbergraph_BP_MenuCamera
struct ABP_MenuCamera_C_ExecuteUbergraph_BP_MenuCamera_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
