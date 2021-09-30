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

// Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.SetButtonArtsLabel
struct UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C_SetButtonArtsLabel_Params
{
	struct FName                                       ButtonLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.SetNormalAttack
struct UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C_SetNormalAttack_Params
{
	bool                                               IsAir;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.SetMystic
struct UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C_SetMystic_Params
{
	struct FName                                       UnitID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.SetEnableArts
struct UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C_SetEnableArts_Params
{
	bool                                               IsAir;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.PlayNotUseAnim
struct UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C_PlayNotUseAnim_Params
{
};

// Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.SetArts
struct UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C_SetArts_Params
{
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAir;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.PlayStartKeyAnim
struct UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C_PlayStartKeyAnim_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
