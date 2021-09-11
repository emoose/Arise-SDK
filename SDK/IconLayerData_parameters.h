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

// Function IconLayerData.IconLayerData_C.SetMapIconTypesOnMap
struct UIconLayerData_C_SetMapIconTypesOnMap_Params
{
	TArray<unsigned char>                              MapIconType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IconLayerData.IconLayerData_C.ClearMapIconTypesOnMap
struct UIconLayerData_C_ClearMapIconTypesOnMap_Params
{
};

// Function IconLayerData.IconLayerData_C.AddMapIconTypeOnMap
struct UIconLayerData_C_AddMapIconTypeOnMap_Params
{
	unsigned char                                      MapIconType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayerData.IconLayerData_C.Initialize
struct UIconLayerData_C_Initialize_Params
{
	bool                                               IsNaviMap;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayerData.IconLayerData_C.Update
struct UIconLayerData_C_Update_Params
{
	struct FVector2D                                   CanvasSize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class ABP_AriseGamemode_C*                         Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayerData.IconLayerData_C.OnUpdate__DelegateSignature
struct UIconLayerData_C_OnUpdate__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
