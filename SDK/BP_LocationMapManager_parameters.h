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

// Function BP_LocationMapManager.BP_LocationMapManager_C.SetPlayerPosition
struct ABP_LocationMapManager_C_SetPlayerPosition_Params
{
	struct FTransform                                  ActorTransform;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.GetLocationName
struct ABP_LocationMapManager_C_GetLocationName_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               LocationChanged;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.SetForceAllOpen
struct ABP_LocationMapManager_C_SetForceAllOpen_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               sw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.IsForceAllOpen
struct ABP_LocationMapManager_C_IsForceAllOpen_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsOpened;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.ShowDummyUI
struct ABP_LocationMapManager_C_ShowDummyUI_Params
{
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.GetLocationData
struct ABP_LocationMapManager_C_GetLocationData_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FMapLocationData                            LocationData;                                             // (Parm, OutParm)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.ShowDebug
struct ABP_LocationMapManager_C_ShowDebug_Params
{
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.LoadDatabase
struct ABP_LocationMapManager_C_LoadDatabase_Params
{
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.LoadLocationMap
struct ABP_LocationMapManager_C_LoadLocationMap_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.UserConstructionScript
struct ABP_LocationMapManager_C_UserConstructionScript_Params
{
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.OnMapChange
struct ABP_LocationMapManager_C_OnMapChange_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.CustomEvent_1
struct ABP_LocationMapManager_C_CustomEvent_1_Params
{
	struct FString                                     NewLocationName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.DoCollectLocators
struct ABP_LocationMapManager_C_DoCollectLocators_Params
{
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.CustomEvent_3
struct ABP_LocationMapManager_C_CustomEvent_3_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.ReceiveBeginPlay
struct ABP_LocationMapManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.ExecuteUbergraph_BP_LocationMapManager
struct ABP_LocationMapManager_C_ExecuteUbergraph_BP_LocationMapManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.EventPostLocationChange__DelegateSignature
struct ABP_LocationMapManager_C_EventPostLocationChange__DelegateSignature_Params
{
	struct FString                                     NewLocationName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldLocationName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.OnPlayerMoved__DelegateSignature
struct ABP_LocationMapManager_C_OnPlayerMoved__DelegateSignature_Params
{
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.EventOnMenuLocationChanged__DelegateSignature
struct ABP_LocationMapManager_C_EventOnMenuLocationChanged__DelegateSignature_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.EventUpdateQuestLocator__DelegateSignature
struct ABP_LocationMapManager_C_EventUpdateQuestLocator__DelegateSignature_Params
{
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.EventPostCollectionLocator__DelegateSignature
struct ABP_LocationMapManager_C_EventPostCollectionLocator__DelegateSignature_Params
{
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.EventCollectionLocator__DelegateSignature
struct ABP_LocationMapManager_C_EventCollectionLocator__DelegateSignature_Params
{
};

// Function BP_LocationMapManager.BP_LocationMapManager_C.EventLoadNewLocationMap__DelegateSignature
struct ABP_LocationMapManager_C_EventLoadNewLocationMap__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
