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

// Function LandscapeWall.LandscapeWallBase.Unbuild
struct ALandscapeWallBase_Unbuild_Params
{
};

// Function LandscapeWall.LandscapeWallBase.SetHalfThickness
struct ALandscapeWallBase_SetHalfThickness_Params
{
	float                                              InHalfThickness;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LandscapeWall.LandscapeWallBase.Rebuild
struct ALandscapeWallBase_Rebuild_Params
{
};

// Function LandscapeWall.LandscapeWallBase.PostRebuild
struct ALandscapeWallBase_PostRebuild_Params
{
};

// Function LandscapeWall.LandscapeWallBase.GetWallComponent
struct ALandscapeWallBase_GetWallComponent_Params
{
	class ULandscapeWallComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function LandscapeWall.LandscapeWallBase.GetHalfThickness
struct ALandscapeWallBase_GetHalfThickness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LandscapeWall.LandscapeWallBase.GetHalfHeight
struct ALandscapeWallBase_GetHalfHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LandscapeWall.LandscapeWallBase.GetDecalClass
struct ALandscapeWallBase_GetDecalClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LandscapeWall.LandscapeWallNavAreaBox.SetMobility
struct ALandscapeWallNavAreaBox_SetMobility_Params
{
	TEnumAsByte<EComponentMobility>                    NewMobility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LandscapeWall.LandscapeWallNavAreaBox.SetBoxExtent
struct ALandscapeWallNavAreaBox_SetBoxExtent_Params
{
	class ANavModifierVolume*                          Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LandscapeWall.LandscapeWallNavAreaBox.SetAreaClass
struct ALandscapeWallNavAreaBox_SetAreaClass_Params
{
	class UClass*                                      InAreaClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LandscapeWall.LandscapeWallSpline.GetSplineComponent
struct ALandscapeWallSpline_GetSplineComponent_Params
{
	class ULandscapeWallSplineComponent*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
