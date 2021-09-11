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

// Function BP_PF_InteractInfoBase.BP_PF_InteractInfoBase_C.GetCPCost
struct ABP_PF_InteractInfoBase_C_GetCPCost_Params
{
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractInfoBase.BP_PF_InteractInfoBase_C.ShowActInfo
struct ABP_PF_InteractInfoBase_C_ShowActInfo_Params
{
};

// Function BP_PF_InteractInfoBase.BP_PF_InteractInfoBase_C.GetIconLocation
struct ABP_PF_InteractInfoBase_C_GetIconLocation_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PF_InteractInfoBase.BP_PF_InteractInfoBase_C.UserConstructionScript
struct ABP_PF_InteractInfoBase_C_UserConstructionScript_Params
{
};

// Function BP_PF_InteractInfoBase.BP_PF_InteractInfoBase_C.K2_HideInformation
struct ABP_PF_InteractInfoBase_C_K2_HideInformation_Params
{
};

// Function BP_PF_InteractInfoBase.BP_PF_InteractInfoBase_C.K2_ShowInformation
struct ABP_PF_InteractInfoBase_C_K2_ShowInformation_Params
{
};

// Function BP_PF_InteractInfoBase.BP_PF_InteractInfoBase_C.ReceiveTick
struct ABP_PF_InteractInfoBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractInfoBase.BP_PF_InteractInfoBase_C.K2_ShowActInformation
struct ABP_PF_InteractInfoBase_C_K2_ShowActInformation_Params
{
};

// Function BP_PF_InteractInfoBase.BP_PF_InteractInfoBase_C.K2_HideActInformation
struct ABP_PF_InteractInfoBase_C_K2_HideActInformation_Params
{
};

// Function BP_PF_InteractInfoBase.BP_PF_InteractInfoBase_C.K2_SetActInformationLabel
struct ABP_PF_InteractInfoBase_C_K2_SetActInformationLabel_Params
{
	struct FName                                       Label;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_InteractInfoBase.BP_PF_InteractInfoBase_C.ReceiveBeginPlay
struct ABP_PF_InteractInfoBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_InteractInfoBase.BP_PF_InteractInfoBase_C.ExecuteUbergraph_BP_PF_InteractInfoBase
struct ABP_PF_InteractInfoBase_C_ExecuteUbergraph_BP_PF_InteractInfoBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
