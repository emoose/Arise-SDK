
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

// Function TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER.TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C.Clear
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bChanged                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C::Clear(bool* bChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER.TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C.Clear");

	UTO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChanged != nullptr)
		*bChanged = params.bChanged;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER.TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C.Refresh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bChanged                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C::Refresh(bool* bChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER.TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C.Refresh");

	UTO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChanged != nullptr)
		*bChanged = params.bChanged;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER.TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C.BindPanelStr
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C* PanelStr                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C::BindPanelStr(class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C* PanelStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER.TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C.BindPanelStr");

	UTO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C_BindPanelStr_Params params;
	params.PanelStr = PanelStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER.TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C.Restruct
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C::Restruct(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER.TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C.Restruct");

	UTO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C_Restruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
