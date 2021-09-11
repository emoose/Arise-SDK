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

// Function IconLayer_Enemy.IconLayer_Enemy_C.CreateIcon_Strong
struct UIconLayer_Enemy_C_CreateIcon_Strong_Params
{
};

// Function IconLayer_Enemy.IconLayer_Enemy_C.CreateIcon_Nomal
struct UIconLayer_Enemy_C_CreateIcon_Nomal_Params
{
};

// Function IconLayer_Enemy.IconLayer_Enemy_C.CreateIcon
struct UIconLayer_Enemy_C_CreateIcon_Params
{
	unsigned char                                      LocatorType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UUMG_LayerIconBase_C*>                InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                CreateCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_Enemy.IconLayer_Enemy_C.Refresh
struct UIconLayer_Enemy_C_Refresh_Params
{
};

// Function IconLayer_Enemy.IconLayer_Enemy_C.Update
struct UIconLayer_Enemy_C_Update_Params
{
};

// Function IconLayer_Enemy.IconLayer_Enemy_C.Construct
struct UIconLayer_Enemy_C_Construct_Params
{
};

// Function IconLayer_Enemy.IconLayer_Enemy_C.EventUpdate
struct UIconLayer_Enemy_C_EventUpdate_Params
{
};

// Function IconLayer_Enemy.IconLayer_Enemy_C.EventInitialize
struct UIconLayer_Enemy_C_EventInitialize_Params
{
	class UIconLayerData_C*                            LayerData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_Enemy.IconLayer_Enemy_C.ExecuteUbergraph_IconLayer_Enemy
struct UIconLayer_Enemy_C_ExecuteUbergraph_IconLayer_Enemy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
