
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

// Function TO14_BPI_GUI_MNU_ACC_WIN_003_STR.TO14_BPI_GUI_MNU_ACC_WIN_003_STR_C.SetItemID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ACC_WIN_003_STR_C::SetItemID(int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ACC_WIN_003_STR.TO14_BPI_GUI_MNU_ACC_WIN_003_STR_C.SetItemID");

	UTO14_BPI_GUI_MNU_ACC_WIN_003_STR_C_SetItemID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ACC_WIN_003_STR.TO14_BPI_GUI_MNU_ACC_WIN_003_STR_C.SetSkillData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemAbilityWorkData    SkillWorkData                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_ACC_WIN_003_STR_C::SetSkillData(const struct FItemAbilityWorkData& SkillWorkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ACC_WIN_003_STR.TO14_BPI_GUI_MNU_ACC_WIN_003_STR_C.SetSkillData");

	UTO14_BPI_GUI_MNU_ACC_WIN_003_STR_C_SetSkillData_Params params;
	params.SkillWorkData = SkillWorkData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
