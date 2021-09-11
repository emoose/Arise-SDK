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

// Function WorldMap.WorldMapBPLibrary.WorldMapSampleFunction
struct UWorldMapBPLibrary_WorldMapSampleFunction_Params
{
	float                                              Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldMap.WorldMapManager.WorldInitialize
struct AWorldMapManager_WorldInitialize_Params
{
};

// Function WorldMap.WorldMapManager.RemakeCurrentGrid
struct AWorldMapManager_RemakeCurrentGrid_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WorldMap.WorldMapManager.MakeStreamDatabase
struct AWorldMapManager_MakeStreamDatabase_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Header;                                                   // (Parm, ZeroConstructor)
	struct FString                                     sep;                                                      // (Parm, ZeroConstructor)
	struct FString                                     footer;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldMap.WorldMapManager.MakeNewGrid
struct AWorldMapManager_MakeNewGrid_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WorldMap.WorldMapManager.MakeCurrentGrid
struct AWorldMapManager_MakeCurrentGrid_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WorldMap.WorldMapManager.IsLevelLoading
struct AWorldMapManager_IsLevelLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldMap.WorldMapManager.GetWroldStream
struct AWorldMapManager_GetWroldStream_Params
{
	TArray<struct FWorldStreamInfo>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WorldMap.WorldMapManager.GetTickState
struct AWorldMapManager_GetTickState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldMap.WorldMapManager.GetLevelName
struct AWorldMapManager_GetLevelName_Params
{
	int                                                NormaledGridX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NormaledGridY;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldMap.WorldMapManager.GetCurrentViewGrid
struct AWorldMapManager_GetCurrentViewGrid_Params
{
	TArray<struct FWorldGridInfo>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WorldMap.WorldMapManager.GetCurrentGridVisibled
struct AWorldMapManager_GetCurrentGridVisibled_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldMap.WorldMapManager.GetCurrentGridPosition
struct AWorldMapManager_GetCurrentGridPosition_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMap.WorldMapManager.EnableStreamLevelControl
struct AWorldMapManager_EnableStreamLevelControl_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMap.WorldMapManager.DumpStreamDatabase
struct AWorldMapManager_DumpStreamDatabase_Params
{
};

// Function WorldMap.WorldMapManager.DumpRemoveGrid
struct AWorldMapManager_DumpRemoveGrid_Params
{
};

// Function WorldMap.WorldMapManager.DumpDiffGrid
struct AWorldMapManager_DumpDiffGrid_Params
{
};

// Function WorldMap.WorldMapManager.DumpCurrentGrid
struct AWorldMapManager_DumpCurrentGrid_Params
{
};

// Function WorldMap.WorldMapManager.CurrentLoadingMapName
struct AWorldMapManager_CurrentLoadingMapName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
