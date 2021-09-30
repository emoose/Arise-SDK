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

// Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.GetDynamicMaterialInstance
struct ABP_GetAliasScreenMask_C_GetDynamicMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.UserConstructionScript
struct ABP_GetAliasScreenMask_C_UserConstructionScript_Params
{
};

// Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.ReceiveBeginPlay
struct ABP_GetAliasScreenMask_C_ReceiveBeginPlay_Params
{
};

// Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.SetVisible
struct ABP_GetAliasScreenMask_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.DoScreenFade
struct ABP_GetAliasScreenMask_C_DoScreenFade_Params
{
	bool                                               FadeWhite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.ExecuteUbergraph_BP_GetAliasScreenMask
struct ABP_GetAliasScreenMask_C_ExecuteUbergraph_BP_GetAliasScreenMask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
