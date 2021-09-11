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

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.IsFishingEnabled
struct UBP_LocationMapSupport_C_IsFishingEnabled_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.IsLocationOpened
struct UBP_LocationMapSupport_C_IsLocationOpened_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetLocamapOnCursorText
struct UBP_LocationMapSupport_C_GetLocamapOnCursorText_Params
{
	struct FLocatorInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               Text;                                                     // (Parm, OutParm)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.FindAreaPicturePath
struct UBP_LocationMapSupport_C_FindAreaPicturePath_Params
{
	struct FString                                     AreaName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PicturePath;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetMapIconList_OnlyShowList
struct UBP_LocationMapSupport_C_GetMapIconList_OnlyShowList_Params
{
	TArray<unsigned char>                              OnMapIconTypeIconArray;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<EMapIconType>                               List;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetCurrentLocation
struct UBP_LocationMapSupport_C_GetCurrentLocation_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CurrentMapLocation;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetAreaData
struct UBP_LocationMapSupport_C_GetAreaData_Params
{
	struct FString                                     AreaName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMapAreaData                                Data;                                                     // (Parm, OutParm)
	bool                                               IsFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetNextLocationName
struct UBP_LocationMapSupport_C_GetNextLocationName_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LocationName;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.DoFastTravel
struct UBP_LocationMapSupport_C_DoFastTravel_Params
{
	struct FString                                     TargetLocator;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetFastTravelPoint
struct UBP_LocationMapSupport_C_GetFastTravelPoint_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFastTravelPointInfo>                InfoList;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetVerifiedMapIconList
struct UBP_LocationMapSupport_C_GetVerifiedMapIconList_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TMap<EMapIconType, bool>                           Verified;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetMapIconData
struct UBP_LocationMapSupport_C_GetMapIconData_Params
{
	EMapIconType                                       IconType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMapIconData                                Output;                                                   // (Parm, OutParm)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.LoadAndVerifyMapIconList
struct UBP_LocationMapSupport_C_LoadAndVerifyMapIconList_Params
{
	TMap<EMapIconType, bool>                           Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TMap<EMapIconType, bool>                           Verified;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.EnableMapIcon
struct UBP_LocationMapSupport_C_EnableMapIcon_Params
{
	EMapIconType                                       IconType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               sw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetMapIconList
struct UBP_LocationMapSupport_C_GetMapIconList_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<EMapIconType>                               List;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.IsShow
struct UBP_LocationMapSupport_C_IsShow_Params
{
	EMapIconType                                       IconType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TMap<EMapIconType, bool>                           EnabledMap;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsShow;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetRegionData
struct UBP_LocationMapSupport_C_GetRegionData_Params
{
	struct FMapRegionData                              RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_RegionData                              RegionData;                                               // (Parm, OutParm)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetLocationData
struct UBP_LocationMapSupport_C_GetLocationData_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMapLocationData                            Data;                                                     // (Parm, OutParm)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetRegionList
struct UBP_LocationMapSupport_C_GetRegionList_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FST_RegionData>                      RegionList;                                               // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
