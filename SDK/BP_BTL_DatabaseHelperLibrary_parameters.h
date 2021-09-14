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

// Function BP_BTL_DatabaseHelperLibrary.BP_BTL_DatabaseHelperLibrary_C.GetHitStatusRecord
struct UBP_BTL_DatabaseHelperLibrary_C_GetHitStatusRecord_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlHitStatusRecord                         OutRow;                                                   // (Parm, OutParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_DatabaseHelperLibrary.BP_BTL_DatabaseHelperLibrary_C.GetCurrentEncountDependenceUnitIds
struct UBP_BTL_DatabaseHelperLibrary_C_GetCurrentEncountDependenceUnitIds_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBtlUnitID>                          DependenceList;                                           // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
