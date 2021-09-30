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

// Function IconLayer_Camera.IconLayer_Camera_C.CreateIcon
struct UIconLayer_Camera_C_CreateIcon_Params
{
};

// Function IconLayer_Camera.IconLayer_Camera_C.Refresh
struct UIconLayer_Camera_C_Refresh_Params
{
};

// Function IconLayer_Camera.IconLayer_Camera_C.Update
struct UIconLayer_Camera_C_Update_Params
{
};

// Function IconLayer_Camera.IconLayer_Camera_C.Construct
struct UIconLayer_Camera_C_Construct_Params
{
};

// Function IconLayer_Camera.IconLayer_Camera_C.Tick
struct UIconLayer_Camera_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_Camera.IconLayer_Camera_C.EventUpdate
struct UIconLayer_Camera_C_EventUpdate_Params
{
};

// Function IconLayer_Camera.IconLayer_Camera_C.EventInitialize
struct UIconLayer_Camera_C_EventInitialize_Params
{
	class UIconLayerData_C*                            LayerData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_Camera.IconLayer_Camera_C.Destruct
struct UIconLayer_Camera_C_Destruct_Params
{
};

// Function IconLayer_Camera.IconLayer_Camera_C.ExecuteUbergraph_IconLayer_Camera
struct UIconLayer_Camera_C_ExecuteUbergraph_IconLayer_Camera_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
