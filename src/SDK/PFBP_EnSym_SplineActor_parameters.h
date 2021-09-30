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

// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.GetOutlinerFolderPath
struct APFBP_EnSym_SplineActor_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.GetOutlinerLabelName
struct APFBP_EnSym_SplineActor_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.GetAssetName
struct APFBP_EnSym_SplineActor_C_GetAssetName_Params
{
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.UpdateSplineNum
struct APFBP_EnSym_SplineActor_C_UpdateSplineNum_Params
{
};

// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.GetSplinePointTypes
struct APFBP_EnSym_SplineActor_C_GetSplinePointTypes_Params
{
	TArray<TEnumAsByte<ESplinePointType>>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.GetSplinePoints
struct APFBP_EnSym_SplineActor_C_GetSplinePoints_Params
{
	TArray<struct FVector>                             Points;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.UserConstructionScript
struct APFBP_EnSym_SplineActor_C_UserConstructionScript_Params
{
};

// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.ImportSpline
struct APFBP_EnSym_SplineActor_C_ImportSpline_Params
{
	class USplinePointAsset*                           Asset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.ExportSpline
struct APFBP_EnSym_SplineActor_C_ExportSpline_Params
{
	struct FString                                     AssetName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.CreateFigureSpline
struct APFBP_EnSym_SplineActor_C_CreateFigureSpline_Params
{
	TArray<struct FVector>                             Points;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.ReceiveBeginPlay
struct APFBP_EnSym_SplineActor_C_ReceiveBeginPlay_Params
{
};

// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.ExecuteUbergraph_PFBP_EnSym_SplineActor
struct APFBP_EnSym_SplineActor_C_ExecuteUbergraph_PFBP_EnSym_SplineActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
