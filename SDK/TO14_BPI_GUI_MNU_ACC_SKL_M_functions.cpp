
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

// Function TO14_BPI_GUI_MNU_ACC_SKL_M.TO14_BPI_GUI_MNU_ACC_SKL_M_C.SetItemID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ACC_SKL_M_C::SetItemID(int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ACC_SKL_M.TO14_BPI_GUI_MNU_ACC_SKL_M_C.SetItemID");

	UTO14_BPI_GUI_MNU_ACC_SKL_M_C_SetItemID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ACC_SKL_M.TO14_BPI_GUI_MNU_ACC_SKL_M_C.SetSkillData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemAbilityWorkData    Data                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_ACC_SKL_M_C::SetSkillData(struct FItemAbilityWorkData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ACC_SKL_M.TO14_BPI_GUI_MNU_ACC_SKL_M_C.SetSkillData");

	UTO14_BPI_GUI_MNU_ACC_SKL_M_C_SetSkillData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
