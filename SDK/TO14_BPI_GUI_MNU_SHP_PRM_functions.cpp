
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetGaugeMaxSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SHP_PRM_C::SetGaugeMaxSize(float Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetGaugeMaxSize");

	UTO14_BPI_GUI_MNU_SHP_PRM_C_SetGaugeMaxSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.UpdateGaugeMax
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SHP_PRM_C::UpdateGaugeMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.UpdateGaugeMax");

	UTO14_BPI_GUI_MNU_SHP_PRM_C_UpdateGaugeMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetGaugeText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           ModText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_SHP_PRM_C::SetGaugeText(int Index, const struct FModifiedText& ModText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetGaugeText");

	UTO14_BPI_GUI_MNU_SHP_PRM_C_SetGaugeText_Params params;
	params.Index = Index;
	params.ModText = ModText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetItemStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SHP_PRM_C::SetItemStatus(int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetItemStatus");

	UTO14_BPI_GUI_MNU_SHP_PRM_C_SetItemStatus_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetPreviewStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Armor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Accessory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShopMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SHP_PRM_C::SetPreviewStatus(int CharacterID, int Weapon, int Armor, int Accessory, bool ShopMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetPreviewStatus");

	UTO14_BPI_GUI_MNU_SHP_PRM_C_SetPreviewStatus_Params params;
	params.CharacterID = CharacterID;
	params.Weapon = Weapon;
	params.Armor = Armor;
	params.Accessory = Accessory;
	params.ShopMode = ShopMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.VisibleChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EquipMenu                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SHP_PRM_C::VisibleChange(int Type, int ItemID, bool EquipMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.VisibleChange");

	UTO14_BPI_GUI_MNU_SHP_PRM_C_VisibleChange_Params params;
	params.Type = Type;
	params.ItemID = ItemID;
	params.EquipMenu = EquipMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetPreviewItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Armor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Accessory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EquipMenu                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SHP_PRM_C::SetPreviewItem(int Weapon, int Armor, int Accessory, bool EquipMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetPreviewItem");

	UTO14_BPI_GUI_MNU_SHP_PRM_C_SetPreviewItem_Params params;
	params.Weapon = Weapon;
	params.Armor = Armor;
	params.Accessory = Accessory;
	params.EquipMenu = EquipMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetChangeNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SHP_PRM_C::SetChangeNum(int Index, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.SetChangeNum");

	UTO14_BPI_GUI_MNU_SHP_PRM_C_SetChangeNum_Params params;
	params.Index = Index;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.ResetBase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TextSpace                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SHP_PRM_C::ResetBase(bool TextSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.ResetBase");

	UTO14_BPI_GUI_MNU_SHP_PRM_C_ResetBase_Params params;
	params.TextSpace = TextSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TextSpace                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SHP_PRM_C::Init(int CharacterID, bool TextSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.Init");

	UTO14_BPI_GUI_MNU_SHP_PRM_C_Init_Params params;
	params.CharacterID = CharacterID;
	params.TextSpace = TextSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SHP_PRM_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_SHP_PRM_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_PRM
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SHP_PRM_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_PRM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_PRM.TO14_BPI_GUI_MNU_SHP_PRM_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_PRM");

	UTO14_BPI_GUI_MNU_SHP_PRM_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_PRM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
