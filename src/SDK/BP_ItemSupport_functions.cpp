
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

// Function BP_ItemSupport.BP_ItemSupport_C.GetItemRarity
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutRarity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ItemSupport_C::STATIC_GetItemRarity(int InItemID, class UObject* __WorldContext, float* OutRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemSupport.BP_ItemSupport_C.GetItemRarity");

	UBP_ItemSupport_C_GetItemRarity_Params params;
	params.InItemID = InItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRarity != nullptr)
		*OutRarity = params.OutRarity;
}


// Function BP_ItemSupport.BP_ItemSupport_C.IsSkillItem
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ItemSupport_C::STATIC_IsSkillItem(int ItemID, class UObject* __WorldContext, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemSupport.BP_ItemSupport_C.IsSkillItem");

	UBP_ItemSupport_C_IsSkillItem_Params params;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_ItemSupport.BP_ItemSupport_C.IsAttrItem
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ItemSupport_C::STATIC_IsAttrItem(int ItemID, class UObject* __WorldContext, bool* NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemSupport.BP_ItemSupport_C.IsAttrItem");

	UBP_ItemSupport_C_IsAttrItem_Params params;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function BP_ItemSupport.BP_ItemSupport_C.SetItemSkill
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemWorkData           WorkData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTO14_BPI_ICN_SKL_SLOT_C* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ItemSupport_C::STATIC_SetItemSkill(const struct FItemWorkData& WorkData, class UTO14_BPI_ICN_SKL_SLOT_C* Target, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemSupport.BP_ItemSupport_C.SetItemSkill");

	UBP_ItemSupport_C_SetItemSkill_Params params;
	params.WorkData = WorkData;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemSupport.BP_ItemSupport_C.SetItemAttr
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  ATT1                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UImage*                  ATT2                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UImage*                  ATT3                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UImage*                  ATT4                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UImage*                  ATT5                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UImage*                  ATT6                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ItemSupport_C::STATIC_SetItemAttr(int ItemID, class UImage* ATT1, class UImage* ATT2, class UImage* ATT3, class UImage* ATT4, class UImage* ATT5, class UImage* ATT6, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemSupport.BP_ItemSupport_C.SetItemAttr");

	UBP_ItemSupport_C_SetItemAttr_Params params;
	params.ItemID = ItemID;
	params.ATT1 = ATT1;
	params.ATT2 = ATT2;
	params.ATT3 = ATT3;
	params.ATT4 = ATT4;
	params.ATT5 = ATT5;
	params.ATT6 = ATT6;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemSupport.BP_ItemSupport_C.SetItemText
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAriseTextWidget*        Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAriseTextWidget*        Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ItemSupport_C::STATIC_SetItemText(int ItemID, class UAriseTextWidget* Name, class UAriseTextWidget* Text, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemSupport.BP_ItemSupport_C.SetItemText");

	UBP_ItemSupport_C_SetItemText_Params params;
	params.ItemID = ItemID;
	params.Name = Name;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemSupport.BP_ItemSupport_C.SetItemIcon
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ItemSupport_C::STATIC_SetItemIcon(int ItemID, class UImage* Target, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemSupport.BP_ItemSupport_C.SetItemIcon");

	UBP_ItemSupport_C_SetItemIcon_Params params;
	params.ItemID = ItemID;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
