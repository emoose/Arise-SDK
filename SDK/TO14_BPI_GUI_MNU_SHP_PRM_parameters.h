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

// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetGaugeMaxSize
struct UTO14_BPI_GUI_MNU_SHP_PRM_C_SetGaugeMaxSize_Params
{
	float                                              Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.UpdateGaugeMax
struct UTO14_BPI_GUI_MNU_SHP_PRM_C_UpdateGaugeMax_Params
{
};

// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetGaugeText
struct UTO14_BPI_GUI_MNU_SHP_PRM_C_SetGaugeText_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               ModText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetItemStatus
struct UTO14_BPI_GUI_MNU_SHP_PRM_C_SetItemStatus_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetPreviewStatus
struct UTO14_BPI_GUI_MNU_SHP_PRM_C_SetPreviewStatus_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Armor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Accessory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShopMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.VisibleChange
struct UTO14_BPI_GUI_MNU_SHP_PRM_C_VisibleChange_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EquipMenu;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetPreviewItem
struct UTO14_BPI_GUI_MNU_SHP_PRM_C_SetPreviewItem_Params
{
	int                                                Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Armor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Accessory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EquipMenu;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetChangeNum
struct UTO14_BPI_GUI_MNU_SHP_PRM_C_SetChangeNum_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.ResetBase
struct UTO14_BPI_GUI_MNU_SHP_PRM_C_ResetBase_Params
{
	bool                                               TextSpace;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.Init
struct UTO14_BPI_GUI_MNU_SHP_PRM_C_Init_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TextSpace;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_SHP_PRM_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_PRM
struct UTO14_BPI_GUI_MNU_SHP_PRM_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_PRM_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
