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

// Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.SetColor
struct UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C_SetColor_Params
{
	struct FLinearColor                                InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.GetStock
struct UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C_GetStock_Params
{
	int                                                OutStock;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.GetGaugeMaterial
struct UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C_GetGaugeMaterial_Params
{
	class UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_C*         InGaugeWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    OutMaterial;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.SetAddValue
struct UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C_SetAddValue_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.AddGaugeEvent
struct UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C_AddGaugeEvent_Params
{
	float                                              InNowValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InOldValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.SetValue
struct UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C_SetValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
