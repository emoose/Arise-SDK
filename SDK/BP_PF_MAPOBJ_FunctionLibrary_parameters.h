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

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetRepopLockBreakPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetRepopLockBreakPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bLock;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetRepopLockSearchPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetRepopLockSearchPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bLock;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetUseRecovery
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetUseRecovery_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                RepopTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.GetUsedRecovery
struct UBP_PF_MAPOBJ_FunctionLibrary_C_GetUsedRecovery_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetSearchableObjectVisibilityAll
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetSearchableObjectVisibilityAll_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.ResetRepopTimeBreakPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_ResetRepopTimeBreakPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.ResetRepopTimeSearchPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_ResetRepopTimeSearchPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetAcquireOnceBreakPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetAcquireOnceBreakPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetAcquireOnceSearchPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetAcquireOnceSearchPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsSearchMapGimmick
struct UBP_PF_MAPOBJ_FunctionLibrary_C_IsSearchMapGimmick_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MapGimmickActorID;                                        // (Parm, OutParm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetHideMapGimmick
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetHideMapGimmick_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsHideMapGimmick
struct UBP_PF_MAPOBJ_FunctionLibrary_C_IsHideMapGimmick_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUnlock;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsValidMapGimmick
struct UBP_PF_MAPOBJ_FunctionLibrary_C_IsValidMapGimmick_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetDiscoverCampPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetDiscoverCampPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsDiscoverCampPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_IsDiscoverCampPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDiscover;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.GetOwlCharacterID
struct UBP_PF_MAPOBJ_FunctionLibrary_C_GetOwlCharacterID_Params
{
	ESearchOwlType                                     InOwlType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutCharacterID;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.GetOwlModelID
struct UBP_PF_MAPOBJ_FunctionLibrary_C_GetOwlModelID_Params
{
	ESearchOwlType                                     InOwlType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutModelID;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.RefreshIconBreakPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_RefreshIconBreakPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.RefreshIconSearchPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_RefreshIconSearchPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetUnlockMapGimmick
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetUnlockMapGimmick_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsUnlockMapGimmick
struct UBP_PF_MAPOBJ_FunctionLibrary_C_IsUnlockMapGimmick_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUnlock;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetDiscoverMapGimmick
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetDiscoverMapGimmick_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsDiscoverMapGimmick
struct UBP_PF_MAPOBJ_FunctionLibrary_C_IsDiscoverMapGimmick_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDiscover;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetOpenTreasurePoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetOpenTreasurePoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsOpenTreasurePoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_IsOpenTreasurePoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOpen;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetDiscoverTreasurePoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetDiscoverTreasurePoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsDiscoverTreasurePoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_IsDiscoverTreasurePoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDiscover;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetRepopTimeBreakPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetRepopTimeBreakPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                RepopTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetRepopTimeSearchPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetRepopTimeSearchPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                RepopTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetDiscoverBreakPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetDiscoverBreakPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetDiscoverSearchPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_SetDiscoverSearchPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsPopBreakPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_IsPopBreakPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsPopSearchPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_IsPopSearchPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.GetPopStatusBreakPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_GetPopStatusBreakPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPop;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsDiscoverBreakPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_IsDiscoverBreakPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDiscover;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.GetPopStatusSearchPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_GetPopStatusSearchPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPop;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsDiscoverSearchPoint
struct UBP_PF_MAPOBJ_FunctionLibrary_C_IsDiscoverSearchPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDiscover;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
