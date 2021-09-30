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

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.GetFlyHeigjt
struct APFBP_EnSym_Placement_C_GetFlyHeigjt_Params
{
	float                                              FlyHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.OutputParameter
struct APFBP_EnSym_Placement_C_OutputParameter_Params
{
	struct FEncountSymbolParamData                     Output;                                                   // (Parm, OutParm)
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.SetLinkRange
struct APFBP_EnSym_Placement_C_SetLinkRange_Params
{
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.SetWanderingRange
struct APFBP_EnSym_Placement_C_SetWanderingRange_Params
{
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.SetSearchBox
struct APFBP_EnSym_Placement_C_SetSearchBox_Params
{
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.GetDatabase
struct APFBP_EnSym_Placement_C_GetDatabase_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Contains
struct APFBP_EnSym_Placement_C_Contains_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Rebuild
struct APFBP_EnSym_Placement_C_Rebuild_Params
{
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Unload
struct APFBP_EnSym_Placement_C_Unload_Params
{
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.SetFlyHeight
struct APFBP_EnSym_Placement_C_SetFlyHeight_Params
{
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Build
struct APFBP_EnSym_Placement_C_Build_Params
{
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Ground
struct APFBP_EnSym_Placement_C_Ground_Params
{
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.IsLoaded
struct APFBP_EnSym_Placement_C_IsLoaded_Params
{
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Preload
struct APFBP_EnSym_Placement_C_Preload_Params
{
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.SetRange
struct APFBP_EnSym_Placement_C_SetRange_Params
{
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.InitSplinePoint
struct APFBP_EnSym_Placement_C_InitSplinePoint_Params
{
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.GetBlueprint
struct APFBP_EnSym_Placement_C_GetBlueprint_Params
{
	class UClass*                                      Class;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.UserConstructionScript
struct APFBP_EnSym_Placement_C_UserConstructionScript_Params
{
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.ReceiveEndPlay
struct APFBP_EnSym_Placement_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.ReceiveBeginPlay
struct APFBP_EnSym_Placement_C_ReceiveBeginPlay_Params
{
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.ExecuteUbergraph_PFBP_EnSym_Placement
struct APFBP_EnSym_Placement_C_ExecuteUbergraph_PFBP_EnSym_Placement_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.OnSpawnEventWithPlacment__DelegateSignature
struct APFBP_EnSym_Placement_C_OnSpawnEventWithPlacment__DelegateSignature_Params
{
	class APFBP_EnSym_Placement_C*                     Placement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_EncountSymbolBase_C*                     Symbol;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.OnSpawnEvent__DelegateSignature
struct APFBP_EnSym_Placement_C_OnSpawnEvent__DelegateSignature_Params
{
	class APFEncountSymbol*                            Symbol;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
