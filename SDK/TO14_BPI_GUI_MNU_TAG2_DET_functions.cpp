
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

// Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.OpenAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_DET_C::OpenAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.OpenAnimation");

	UTO14_BPI_GUI_MNU_TAG2_DET_C_OpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.RefreshAsTacticsLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_DET_C::RefreshAsTacticsLabel(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.RefreshAsTacticsLabel");

	UTO14_BPI_GUI_MNU_TAG2_DET_C_RefreshAsTacticsLabel_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.RefreshAsTacticsLineData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuTacticsLineData    TacticsLineData                (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_DET_C::RefreshAsTacticsLineData(const struct FMenuTacticsLineData& TacticsLineData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.RefreshAsTacticsLineData");

	UTO14_BPI_GUI_MNU_TAG2_DET_C_RefreshAsTacticsLineData_Params params;
	params.TacticsLineData = TacticsLineData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.RefreshAsTacticsData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuTacticsData        TacticsData                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_TAG2_DET_C::RefreshAsTacticsData(const struct FMenuTacticsData& TacticsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.RefreshAsTacticsData");

	UTO14_BPI_GUI_MNU_TAG2_DET_C_RefreshAsTacticsData_Params params;
	params.TacticsData = TacticsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_DET_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.Hide");

	UTO14_BPI_GUI_MNU_TAG2_DET_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_DET_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.Show");

	UTO14_BPI_GUI_MNU_TAG2_DET_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
