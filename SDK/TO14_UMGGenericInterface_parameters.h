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

// Function TO14_UMGGenericInterface.TO14_UMGGenericInterface_C.CanHide
struct UTO14_UMGGenericInterface_C_CanHide_Params
{
	bool                                               bCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_UMGGenericInterface.TO14_UMGGenericInterface_C.RequestShowNowlodingIcon
struct UTO14_UMGGenericInterface_C_RequestShowNowlodingIcon_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWhite;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_UMGGenericInterface.TO14_UMGGenericInterface_C.If_IsShow
struct UTO14_UMGGenericInterface_C_If_IsShow_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_UMGGenericInterface.TO14_UMGGenericInterface_C.RequestShow
struct UTO14_UMGGenericInterface_C_RequestShow_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
