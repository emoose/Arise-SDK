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

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.SwitchShowMap
struct ABP_PF_TrainingEventActor_C_SwitchShowMap_Params
{
	bool                                               bShowArenaMap;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.IsBattleMapLoaded
struct ABP_PF_TrainingEventActor_C_IsBattleMapLoaded_Params
{
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.CheckTrophy
struct ABP_PF_TrainingEventActor_C_CheckTrophy_Params
{
};

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.IsArenaMapVisibled
struct ABP_PF_TrainingEventActor_C_IsArenaMapVisibled_Params
{
	bool                                               bVisibled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.SetTime
struct ABP_PF_TrainingEventActor_C_SetTime_Params
{
	float                                              NewTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.DoTrainingStart
struct ABP_PF_TrainingEventActor_C_DoTrainingStart_Params
{
	TArray<struct FBtlEncountGroupParam>               EncountGroups;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArenaData                               ArenaData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.GetResult
struct ABP_PF_TrainingEventActor_C_GetResult_Params
{
	TEnumAsByte<EDE_TrainingResult>                    NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.SetResult
struct ABP_PF_TrainingEventActor_C_SetResult_Params
{
	TEnumAsByte<EDE_TrainingResult>                    Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.DoBattleStart
struct ABP_PF_TrainingEventActor_C_DoBattleStart_Params
{
};

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.UserConstructionScript
struct ABP_PF_TrainingEventActor_C_UserConstructionScript_Params
{
};

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.ReceiveBeginPlay
struct ABP_PF_TrainingEventActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.On Training Battle End
struct ABP_PF_TrainingEventActor_C_On_Training_Battle_End_Params
{
	unsigned char                                      PrevScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.ReceiveEndPlay
struct ABP_PF_TrainingEventActor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.On Training Event Start
struct ABP_PF_TrainingEventActor_C_On_Training_Event_Start_Params
{
};

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.On Go Back Title
struct ABP_PF_TrainingEventActor_C_On_Go_Back_Title_Params
{
};

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.ExecuteUbergraph_BP_PF_TrainingEventActor
struct ABP_PF_TrainingEventActor_C_ExecuteUbergraph_BP_PF_TrainingEventActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
