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

// Function BP_FishingSaveData.BP_FishingSaveData_C.CheckEXNewGameInheritFlag
struct UBP_FishingSaveData_C_CheckEXNewGameInheritFlag_Params
{
	class UAriseScriptSaveDataChunk*                   ChunkData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSaveData.BP_FishingSaveData_C.GetFishTypeNum
struct UBP_FishingSaveData_C_GetFishTypeNum_Params
{
	int                                                Nums;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSaveData.BP_FishingSaveData_C.SetFishingItem
struct UBP_FishingSaveData_C_SetFishingItem_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSaveData.BP_FishingSaveData_C.GetFishingItem
struct UBP_FishingSaveData_C_GetFishingItem_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSaveData.BP_FishingSaveData_C.GetCatchedFishCount
struct UBP_FishingSaveData_C_GetCatchedFishCount_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                outCount;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSaveData.BP_FishingSaveData_C.GetFishRewardGetFlag
struct UBP_FishingSaveData_C_GetFishRewardGetFlag_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlag;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSaveData.BP_FishingSaveData_C.SetFishRewardGetFlag
struct UBP_FishingSaveData_C_SetFishRewardGetFlag_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlag;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSaveData.BP_FishingSaveData_C.GetBigRecordFishTypeCount
struct UBP_FishingSaveData_C_GetBigRecordFishTypeCount_Params
{
	int                                                outTypeCount;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                EpicTypeCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bLegendCatch;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSaveData.BP_FishingSaveData_C.GetCatchedFishTypeCount
struct UBP_FishingSaveData_C_GetCatchedFishTypeCount_Params
{
	int                                                outTypeCount;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSaveData.BP_FishingSaveData_C.GetFishSizeChunk
struct UBP_FishingSaveData_C_GetFishSizeChunk_Params
{
	class UAriseScriptSaveDataChunk_INT32*             Chunk;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSaveData.BP_FishingSaveData_C.GetFishCountChunk
struct UBP_FishingSaveData_C_GetFishCountChunk_Params
{
	class UAriseScriptSaveDataChunk_INT32*             Chunk;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSaveData.BP_FishingSaveData_C.SaveFishingRecord
struct UBP_FishingSaveData_C_SaveFishingRecord_Params
{
	int                                                FishId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SizeRecordUpdate;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSaveData.BP_FishingSaveData_C.RegisterParameter
struct UBP_FishingSaveData_C_RegisterParameter_Params
{
};

// Function BP_FishingSaveData.BP_FishingSaveData_C.OnNewGame
struct UBP_FishingSaveData_C_OnNewGame_Params
{
};

// Function BP_FishingSaveData.BP_FishingSaveData_C.ExecuteUbergraph_BP_FishingSaveData
struct UBP_FishingSaveData_C_ExecuteUbergraph_BP_FishingSaveData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
