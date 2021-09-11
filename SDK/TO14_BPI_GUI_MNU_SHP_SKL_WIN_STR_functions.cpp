
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

// Function TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR.TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C.SetSkillID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkillID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C::SetSkillID(int SkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR.TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C.SetSkillID");

	UTO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C_SetSkillID_Params params;
	params.SkillID = SkillID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR.TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C.SetFontColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisableColor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C::SetFontColor(bool DisableColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR.TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C.SetFontColor");

	UTO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C_SetFontColor_Params params;
	params.DisableColor = DisableColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR.TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C.SetSkillData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemAbilityWorkData    AbilityData                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C::SetSkillData(const struct FItemAbilityWorkData& AbilityData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR.TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C.SetSkillData");

	UTO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C_SetSkillData_Params params;
	params.AbilityData = AbilityData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR.TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C.OnWidgetCreated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C::OnWidgetCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR.TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C.OnWidgetCreated");

	UTO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C_OnWidgetCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR.TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR.TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR");

	UTO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
