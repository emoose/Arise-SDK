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

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.GetListItemObject
struct UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_GetListItemObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.GetTextSize
struct UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_GetTextSize_Params
{
	struct FVector2D                                   OutSize;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.BP_OnEntryReleased
struct UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_BP_OnEntryReleased_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.BP_OnItemExpansionChanged
struct UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.BP_OnItemSelectionChanged
struct UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.OnListItemObjectSet
struct UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.Construct
struct UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.Tick
struct UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_LICENSE_Text
struct UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_LICENSE_Text_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
