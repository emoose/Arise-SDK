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

// Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.Init2
struct UUMG_Navimap_Icon_C_Init2_Params
{
	struct FLocatorInfo                                LocatorInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.SetIconImageData
struct UUMG_Navimap_Icon_C_SetIconImageData_Params
{
	EMapIconType                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.SetIconIndex
struct UUMG_Navimap_Icon_C_SetIconIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.GetLocation
struct UUMG_Navimap_Icon_C_GetLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.Construct
struct UUMG_Navimap_Icon_C_Construct_Params
{
};

// Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.ExecuteUbergraph_UMG_Navimap_Icon
struct UUMG_Navimap_Icon_C_ExecuteUbergraph_UMG_Navimap_Icon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
