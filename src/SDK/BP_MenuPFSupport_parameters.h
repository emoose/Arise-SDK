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

// Function BP_MenuPFSupport.BP_MenuPFSupport_C.BuildPartyTop
struct UBP_MenuPFSupport_C_BuildPartyTop_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuPFSupport.BP_MenuPFSupport_C.IsBuildPartyTop
struct UBP_MenuPFSupport_C_IsBuildPartyTop_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBuilded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuPFSupport.BP_MenuPFSupport_C.IsPartyTopMoving
struct UBP_MenuPFSupport_C_IsPartyTopMoving_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutMoving;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuPFSupport.BP_MenuPFSupport_C.GetGaldMax
struct UBP_MenuPFSupport_C_GetGaldMax_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GaldMax;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuPFSupport.BP_MenuPFSupport_C.GetClampedGald
struct UBP_MenuPFSupport_C_GetClampedGald_Params
{
	int                                                Gald;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ClampedGald;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuPFSupport.BP_MenuPFSupport_C.GetArenaSelectLabel
struct UBP_MenuPFSupport_C_GetArenaSelectLabel_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Label;                                                    // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
