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

// Function TO14_BPI_GUI_SYS_WIN_ITEM.TO14_BPI_GUI_SYS_WIN_ITEM_C.SetItemData
struct UTO14_BPI_GUI_SYS_WIN_ITEM_C_SetItemData_Params
{
	struct FString                                     ItemLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StrikeThrough;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasStrikeThrough;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
