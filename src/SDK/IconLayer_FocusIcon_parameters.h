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

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.UpdateAsIcon_ForDebug
struct UIconLayer_FocusIcon_C_UpdateAsIcon_ForDebug_Params
{
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.GetMapLinkAttachTo
struct UIconLayer_FocusIcon_C_GetMapLinkAttachTo_Params
{
	class UPanelWidget*                                MapLinkTextAttachTo;                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.SetMapLinkAttachTo
struct UIconLayer_FocusIcon_C_SetMapLinkAttachTo_Params
{
	class UPanelWidget*                                MapLinkTextAttachTo;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.RefreshGigant
struct UIconLayer_FocusIcon_C_RefreshGigant_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.RefreshFastTravelPoint
struct UIconLayer_FocusIcon_C_RefreshFastTravelPoint_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.RefreshMapLink
struct UIconLayer_FocusIcon_C_RefreshMapLink_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.RefreshFocusable
struct UIconLayer_FocusIcon_C_RefreshFocusable_Params
{
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.GetSpritLocatorName
struct UIconLayer_FocusIcon_C_GetSpritLocatorName_Params
{
	struct FString                                     SourceString;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	unsigned char                                      Both;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapIconType                                       Override;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutString;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.UpdateAsText
struct UIconLayer_FocusIcon_C_UpdateAsText_Params
{
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.UpdateAsIcon
struct UIconLayer_FocusIcon_C_UpdateAsIcon_Params
{
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.CheckContainLocatorInfo
struct UIconLayer_FocusIcon_C_CheckContainLocatorInfo_Params
{
	struct FLocatorInfo                                LocatorInfo;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Contain;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.ClearMapLinkText
struct UIconLayer_FocusIcon_C_ClearMapLinkText_Params
{
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.AddMapLinkText
struct UIconLayer_FocusIcon_C_AddMapLinkText_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMapLinkInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUMG_LocamapText_C*                          Text;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.FindMapLinkLocator
struct UIconLayer_FocusIcon_C_FindMapLinkLocator_Params
{
	TArray<struct FLocatorInfo>                        LocatorInfos;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     LocatorName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLocatorInfo                                Locator;                                                  // (Parm, OutParm)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.BindOnRefreshedEvent
struct UIconLayer_FocusIcon_C_BindOnRefreshedEvent_Params
{
	struct FScriptDelegate                             OnRefreshed;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.BindDecideMapLinkDelegate
struct UIconLayer_FocusIcon_C_BindDecideMapLinkDelegate_Params
{
	struct FScriptDelegate                             OnDecideMapLink;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.GetIconsFromTypes
struct UIconLayer_FocusIcon_C_GetIconsFromTypes_Params
{
	TArray<EMapIconType>                               IconTypes;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UUMG_LayerIconBase_C*>                Icons;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.CheckIconType
struct UIconLayer_FocusIcon_C_CheckIconType_Params
{
	class UUMG_LayerIconBase_C*                        Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EMapIconType                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.GetIconsFromType
struct UIconLayer_FocusIcon_C_GetIconsFromType_Params
{
	EMapIconType                                       IconType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UUMG_LayerIconBase_C*>                Icons;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.Refresh
struct UIconLayer_FocusIcon_C_Refresh_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.Update
struct UIconLayer_FocusIcon_C_Update_Params
{
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.EventUpdate
struct UIconLayer_FocusIcon_C_EventUpdate_Params
{
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.EventInitialize
struct UIconLayer_FocusIcon_C_EventInitialize_Params
{
	class UIconLayerData_C*                            LayerData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnDiscoverOwl
struct UIconLayer_FocusIcon_C_OnDiscoverOwl_Params
{
	struct FString                                     InActorID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnDiscoverBreak
struct UIconLayer_FocusIcon_C_OnDiscoverBreak_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnDiscoverSearchPoint
struct UIconLayer_FocusIcon_C_OnDiscoverSearchPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnDiscoverTreasure
struct UIconLayer_FocusIcon_C_OnDiscoverTreasure_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnDiscoverGimmick
struct UIconLayer_FocusIcon_C_OnDiscoverGimmick_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.CustomEvent_1
struct UIconLayer_FocusIcon_C_CustomEvent_1_Params
{
	struct FString                                     actorId;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.Construct
struct UIconLayer_FocusIcon_C_Construct_Params
{
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.ExecuteUbergraph_IconLayer_FocusIcon
struct UIconLayer_FocusIcon_C_ExecuteUbergraph_IconLayer_FocusIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnRefreshedEvent__DelegateSignature
struct UIconLayer_FocusIcon_C_OnRefreshedEvent__DelegateSignature_Params
{
};

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.DecideMapLinkDelegate__DelegateSignature
struct UIconLayer_FocusIcon_C_DecideMapLinkDelegate__DelegateSignature_Params
{
	struct FString                                     NextLocationName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
