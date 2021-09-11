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

// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.GetDialogMessage
struct UUMG_LocamapFocusIcon_FastTravelPoint_C_GetDialogMessage_Params
{
	struct FMapAreaData                                MapAreaData;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FMapLocationData                            MapLocationData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString                                     MsgId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     MsgIdWhenNoLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FModifiedText                               Message;                                                  // (Parm, OutParm)
};

// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.SetLocationName
struct UUMG_LocamapFocusIcon_FastTravelPoint_C_SetLocationName_Params
{
	struct FString                                     InLocationName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.BindOnFastTravelEvent
struct UUMG_LocamapFocusIcon_FastTravelPoint_C_BindOnFastTravelEvent_Params
{
	struct FScriptDelegate                             OnFastTravel;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.GetFastTravelPointInfo
struct UUMG_LocamapFocusIcon_FastTravelPoint_C_GetFastTravelPointInfo_Params
{
	struct FFastTravelPointInfo                        FastTravelPointInfo;                                      // (Parm, OutParm)
};

// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.SetFastTravelPointInfo
struct UUMG_LocamapFocusIcon_FastTravelPoint_C_SetFastTravelPointInfo_Params
{
	struct FFastTravelPointInfo                        InFastTravelPointInfo;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.OnDecide
struct UUMG_LocamapFocusIcon_FastTravelPoint_C_OnDecide_Params
{
};

// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.ExecuteUbergraph_UMG_LocamapFocusIcon_FastTravelPoint
struct UUMG_LocamapFocusIcon_FastTravelPoint_C_ExecuteUbergraph_UMG_LocamapFocusIcon_FastTravelPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.OnFastTravelEvent__DelegateSignature
struct UUMG_LocamapFocusIcon_FastTravelPoint_C_OnFastTravelEvent__DelegateSignature_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
