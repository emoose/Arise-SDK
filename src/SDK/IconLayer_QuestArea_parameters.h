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

// Function IconLayer_QuestArea.IconLayer_QuestArea_C.Refresh
struct UIconLayer_QuestArea_C_Refresh_Params
{
};

// Function IconLayer_QuestArea.IconLayer_QuestArea_C.Update
struct UIconLayer_QuestArea_C_Update_Params
{
};

// Function IconLayer_QuestArea.IconLayer_QuestArea_C.Construct
struct UIconLayer_QuestArea_C_Construct_Params
{
};

// Function IconLayer_QuestArea.IconLayer_QuestArea_C.EventUpdate
struct UIconLayer_QuestArea_C_EventUpdate_Params
{
};

// Function IconLayer_QuestArea.IconLayer_QuestArea_C.EventInitialize
struct UIconLayer_QuestArea_C_EventInitialize_Params
{
	class UIconLayerData_C*                            LayerData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_QuestArea.IconLayer_QuestArea_C.ExecuteUbergraph_IconLayer_QuestArea
struct UIconLayer_QuestArea_C_ExecuteUbergraph_IconLayer_QuestArea_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
