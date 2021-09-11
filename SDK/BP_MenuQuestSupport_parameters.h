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

// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.NotifyOnQuestUpdate
struct UBP_MenuQuestSupport_C_NotifyOnQuestUpdate_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetPF_PlayerLocation
struct UBP_MenuQuestSupport_C_GetPF_PlayerLocation_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetQuestLocationDataMulti
struct UBP_MenuQuestSupport_C_GetQuestLocationDataMulti_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             LocationNameArray;                                        // (Parm, OutParm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetQuestIdFromLocatorInfo
struct UBP_MenuQuestSupport_C_GetQuestIdFromLocatorInfo_Params
{
	struct FLocatorInfo                                LocatorInfo;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     QuestID;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetQuestLocationData
struct UBP_MenuQuestSupport_C_GetQuestLocationData_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LocationName;                                             // (Parm, OutParm, ZeroConstructor)
	struct FModifiedText                               Area;                                                     // (Parm, OutParm)
	struct FModifiedText                               Location;                                                 // (Parm, OutParm)
};

// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetNearQuestLocator
struct UBP_MenuQuestSupport_C_GetNearQuestLocator_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLocatorInfo>                        ioLocatorList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.SetSubQuestMarkByID
struct UBP_MenuQuestSupport_C_SetSubQuestMarkByID_Params
{
	struct FString                                     Quest_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.IsSubQuestMarked
struct UBP_MenuQuestSupport_C_IsSubQuestMarked_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMarked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetOpenedSteps
struct UBP_MenuQuestSupport_C_GetOpenedSteps_Params
{
	struct FString                                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Steps1;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetQuestOwnerPosition
struct UBP_MenuQuestSupport_C_GetQuestOwnerPosition_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, IsPlainOldData)
	EMapIconType                                       IconType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetCurrentSubQuest
struct UBP_MenuQuestSupport_C_GetCurrentSubQuest_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             RetSubQuestIDs;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        retSubStepIndices;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetCurrentMainQuest
struct UBP_MenuQuestSupport_C_GetCurrentMainQuest_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     retMainQuestID;                                           // (Parm, OutParm, ZeroConstructor)
	int                                                retMainStepIndex;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.AddQuestIcon
struct UBP_MenuQuestSupport_C_AddQuestIcon_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetCurrentQuest
struct UBP_MenuQuestSupport_C_GetCurrentQuest_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MainQuestID;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                MainStepIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SubQuestIDs;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        SubStepIndices;                                           // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
