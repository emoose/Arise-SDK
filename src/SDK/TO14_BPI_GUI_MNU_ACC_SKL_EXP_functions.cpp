
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

// Function TO14_BPI_GUI_MNU_ACC_SKL_EXP.TO14_BPI_GUI_MNU_ACC_SKL_EXP_C.SetItemSkillData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ACC_SKL_EXP_C::SetItemSkillData(int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ACC_SKL_EXP.TO14_BPI_GUI_MNU_ACC_SKL_EXP_C.SetItemSkillData");

	UTO14_BPI_GUI_MNU_ACC_SKL_EXP_C_SetItemSkillData_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ACC_SKL_EXP.TO14_BPI_GUI_MNU_ACC_SKL_EXP_C.SetSkill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Skill1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Skill2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ACC_SKL_EXP_C::SetSkill(const struct FString& Skill1, int Value1, const struct FString& Skill2, int Value2)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ACC_SKL_EXP.TO14_BPI_GUI_MNU_ACC_SKL_EXP_C.SetSkill");

	UTO14_BPI_GUI_MNU_ACC_SKL_EXP_C_SetSkill_Params params;
	params.Skill1 = Skill1;
	params.Value1 = Value1;
	params.Skill2 = Skill2;
	params.Value2 = Value2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ACC_SKL_EXP.TO14_BPI_GUI_MNU_ACC_SKL_EXP_C.SetViewType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Detail                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ACC_SKL_EXP_C::SetViewType(bool Detail)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ACC_SKL_EXP.TO14_BPI_GUI_MNU_ACC_SKL_EXP_C.SetViewType");

	UTO14_BPI_GUI_MNU_ACC_SKL_EXP_C_SetViewType_Params params;
	params.Detail = Detail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ACC_SKL_EXP.TO14_BPI_GUI_MNU_ACC_SKL_EXP_C.UpdateItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ACC_SKL_EXP_C::UpdateItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ACC_SKL_EXP.TO14_BPI_GUI_MNU_ACC_SKL_EXP_C.UpdateItem");

	UTO14_BPI_GUI_MNU_ACC_SKL_EXP_C_UpdateItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ACC_SKL_EXP.TO14_BPI_GUI_MNU_ACC_SKL_EXP_C.SetUniqueID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ACC_SKL_EXP_C::SetUniqueID(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ACC_SKL_EXP.TO14_BPI_GUI_MNU_ACC_SKL_EXP_C.SetUniqueID");

	UTO14_BPI_GUI_MNU_ACC_SKL_EXP_C_SetUniqueID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
