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

// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.GetDebShowInfoMessage
struct ABP_PF_MAPOBJ_SwitchModel_C_GetDebShowInfoMessage_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutMessage;                                               // (Parm, OutParm, ZeroConstructor)
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.SetModelCollisionProfile
struct ABP_PF_MAPOBJ_SwitchModel_C_SetModelCollisionProfile_Params
{
	struct FName                                       InCollisionProfileName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.PlayGatheringEffect
struct ABP_PF_MAPOBJ_SwitchModel_C_PlayGatheringEffect_Params
{
};

// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.CollectionFadeObjects
struct ABP_PF_MAPOBJ_SwitchModel_C_CollectionFadeObjects_Params
{
};

// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.SetHideModel
struct ABP_PF_MAPOBJ_SwitchModel_C_SetHideModel_Params
{
};

// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.SetShowModel
struct ABP_PF_MAPOBJ_SwitchModel_C_SetShowModel_Params
{
};

// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.BuildModel
struct ABP_PF_MAPOBJ_SwitchModel_C_BuildModel_Params
{
};

// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.UserConstructionScript
struct ABP_PF_MAPOBJ_SwitchModel_C_UserConstructionScript_Params
{
};

// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.ReceiveUpdateActive
struct ABP_PF_MAPOBJ_SwitchModel_C_ReceiveUpdateActive_Params
{
};

// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.ReceiveBeginPlay
struct ABP_PF_MAPOBJ_SwitchModel_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.On Build Completed
struct ABP_PF_MAPOBJ_SwitchModel_C_On_Build_Completed_Params
{
};

// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.ReceiveEndPlay
struct ABP_PF_MAPOBJ_SwitchModel_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.ReceiveOnConstruction
struct ABP_PF_MAPOBJ_SwitchModel_C_ReceiveOnConstruction_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.ExecuteUbergraph_BP_PF_MAPOBJ_SwitchModel
struct ABP_PF_MAPOBJ_SwitchModel_C_ExecuteUbergraph_BP_PF_MAPOBJ_SwitchModel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
