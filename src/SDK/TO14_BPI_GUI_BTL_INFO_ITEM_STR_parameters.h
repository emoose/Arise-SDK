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

// Function TO14_BPI_GUI_BTL_INFO_ITEM_STR.TO14_BPI_GUI_BTL_INFO_ITEM_STR_C.SetAbnomalIcon
struct UTO14_BPI_GUI_BTL_INFO_ITEM_STR_C_SetAbnomalIcon_Params
{
	EAbnormalType                                      Abnormal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_INFO_ITEM_STR.TO14_BPI_GUI_BTL_INFO_ITEM_STR_C.SetElementIcon
struct UTO14_BPI_GUI_BTL_INFO_ITEM_STR_C_SetElementIcon_Params
{
	EBtlElementType                                    Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_INFO_ITEM_STR.TO14_BPI_GUI_BTL_INFO_ITEM_STR_C.GetTargetImage
struct UTO14_BPI_GUI_BTL_INFO_ITEM_STR_C_GetTargetImage_Params
{
	class UImage*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_INFO_ITEM_STR.TO14_BPI_GUI_BTL_INFO_ITEM_STR_C.SetString
struct UTO14_BPI_GUI_BTL_INFO_ITEM_STR_C_SetString_Params
{
	struct FText                                       String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
