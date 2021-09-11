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

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.Battle_Enable
struct UBP_EncountSymbolSaveData_C_Battle_Enable_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               InEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.IsBattle
struct UBP_EncountSymbolSaveData_C_IsBattle_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.Battle
struct UBP_EncountSymbolSaveData_C_Battle_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.IsValid
struct UBP_EncountSymbolSaveData_C_IsValid_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.IsMapVisible
struct UBP_EncountSymbolSaveData_C_IsMapVisible_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.MapVisible
struct UBP_EncountSymbolSaveData_C_MapVisible_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.IsChunkEnable
struct UBP_EncountSymbolSaveData_C_IsChunkEnable_Params
{
	struct FString                                     InActorID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     InChunkPostFix;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.IsDiscover
struct UBP_EncountSymbolSaveData_C_IsDiscover_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.SetChunkEnable
struct UBP_EncountSymbolSaveData_C_SetChunkEnable_Params
{
	struct FString                                     InActorID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     InChunkPostFix;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               InEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.Discover
struct UBP_EncountSymbolSaveData_C_Discover_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.Register
struct UBP_EncountSymbolSaveData_C_Register_Params
{
	struct FString                                     InLevelName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                InNum;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.RegisterParameter
struct UBP_EncountSymbolSaveData_C_RegisterParameter_Params
{
};

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.OnNewGame
struct UBP_EncountSymbolSaveData_C_OnNewGame_Params
{
};

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.OnLoad
struct UBP_EncountSymbolSaveData_C_OnLoad_Params
{
};

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.ExecuteUbergraph_BP_EncountSymbolSaveData
struct UBP_EncountSymbolSaveData_C_ExecuteUbergraph_BP_EncountSymbolSaveData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
