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

// Function IconLayer_Quest.IconLayer_Quest_C.CheckIconType
struct UIconLayer_Quest_C_CheckIconType_Params
{
	class UUMG_LayerIconBase_C*                        Icons;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EMapIconType                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_Quest.IconLayer_Quest_C.GetIconsFromTypes
struct UIconLayer_Quest_C_GetIconsFromTypes_Params
{
	TArray<EMapIconType>                               IconTypes;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UUMG_LayerIconBase_C*>                Icons;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function IconLayer_Quest.IconLayer_Quest_C.GetIconsFromType
struct UIconLayer_Quest_C_GetIconsFromType_Params
{
	EMapIconType                                       IconType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UUMG_LayerIconBase_C*>                Icons;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function IconLayer_Quest.IconLayer_Quest_C.Refresh
struct UIconLayer_Quest_C_Refresh_Params
{
};

// Function IconLayer_Quest.IconLayer_Quest_C.Update
struct UIconLayer_Quest_C_Update_Params
{
};

// Function IconLayer_Quest.IconLayer_Quest_C.Construct
struct UIconLayer_Quest_C_Construct_Params
{
};

// Function IconLayer_Quest.IconLayer_Quest_C.EventUpdate
struct UIconLayer_Quest_C_EventUpdate_Params
{
};

// Function IconLayer_Quest.IconLayer_Quest_C.EventInitialize
struct UIconLayer_Quest_C_EventInitialize_Params
{
	class UIconLayerData_C*                            LayerData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_Quest.IconLayer_Quest_C.ExecuteUbergraph_IconLayer_Quest
struct UIconLayer_Quest_C_ExecuteUbergraph_IconLayer_Quest_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
