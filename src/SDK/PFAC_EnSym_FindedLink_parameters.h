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

// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.IsSpawned
struct UPFAC_EnSym_FindedLink_C_IsSpawned_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.IsBattle
struct UPFAC_EnSym_FindedLink_C_IsBattle_Params
{
	class AActor*                                      InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.RegisterSymbol
struct UPFAC_EnSym_FindedLink_C_RegisterSymbol_Params
{
	struct FPFST_EnSym_FindedLink                      Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.RemoveInvalid
struct UPFAC_EnSym_FindedLink_C_RemoveInvalid_Params
{
};

// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.OutputParameter
struct UPFAC_EnSym_FindedLink_C_OutputParameter_Params
{
	struct FEncountSymbolFindedParamData               Output;                                                   // (Parm, OutParm)
};

// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.ReceiveBeginPlay
struct UPFAC_EnSym_FindedLink_C_ReceiveBeginPlay_Params
{
};

// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.ReceiveEndPlay
struct UPFAC_EnSym_FindedLink_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.Refresh
struct UPFAC_EnSym_FindedLink_C_Refresh_Params
{
};

// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.ExecuteUbergraph_PFAC_EnSym_FindedLink
struct UPFAC_EnSym_FindedLink_C_ExecuteUbergraph_PFAC_EnSym_FindedLink_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
