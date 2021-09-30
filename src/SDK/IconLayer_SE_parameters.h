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

// Function IconLayer_SE.IconLayer_SE_C.CreateIcon
struct UIconLayer_SE_C_CreateIcon_Params
{
};

// Function IconLayer_SE.IconLayer_SE_C.IsSymbolChak
struct UIconLayer_SE_C_IsSymbolChak_Params
{
	class AActor*                                      InSymbol;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsHitRange;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsHitShortRange;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_SE.IconLayer_SE_C.Refresh
struct UIconLayer_SE_C_Refresh_Params
{
};

// Function IconLayer_SE.IconLayer_SE_C.Update
struct UIconLayer_SE_C_Update_Params
{
};

// Function IconLayer_SE.IconLayer_SE_C.Construct
struct UIconLayer_SE_C_Construct_Params
{
};

// Function IconLayer_SE.IconLayer_SE_C.Tick
struct UIconLayer_SE_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_SE.IconLayer_SE_C.OnLoadNewLocation
struct UIconLayer_SE_C_OnLoadNewLocation_Params
{
};

// Function IconLayer_SE.IconLayer_SE_C.Destruct
struct UIconLayer_SE_C_Destruct_Params
{
};

// Function IconLayer_SE.IconLayer_SE_C.ExecuteUbergraph_IconLayer_SE
struct UIconLayer_SE_C_ExecuteUbergraph_IconLayer_SE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
