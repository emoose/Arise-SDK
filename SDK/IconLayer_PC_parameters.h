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

// Function IconLayer_PC.IconLayer_PC_C.Refresh
struct UIconLayer_PC_C_Refresh_Params
{
};

// Function IconLayer_PC.IconLayer_PC_C.Update
struct UIconLayer_PC_C_Update_Params
{
};

// Function IconLayer_PC.IconLayer_PC_C.Construct
struct UIconLayer_PC_C_Construct_Params
{
};

// Function IconLayer_PC.IconLayer_PC_C.EventUpdate
struct UIconLayer_PC_C_EventUpdate_Params
{
};

// Function IconLayer_PC.IconLayer_PC_C.EventInitialize
struct UIconLayer_PC_C_EventInitialize_Params
{
	class UIconLayerData_C*                            LayerData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_PC.IconLayer_PC_C.ExecuteUbergraph_IconLayer_PC
struct UIconLayer_PC_C_ExecuteUbergraph_IconLayer_PC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
