
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

// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.SetScreen
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLoadingScreenData      LoadingScreenData              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_SYS_LOADING_001_C::SetScreen(const struct FLoadingScreenData& LoadingScreenData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.SetScreen");

	UTO14_BPI_GUI_SYS_LOADING_001_C_SetScreen_Params params;
	params.LoadingScreenData = LoadingScreenData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.SelectScreen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLoadingScreenData      ScreenData                     (Parm, OutParm)

void UTO14_BPI_GUI_SYS_LOADING_001_C::SelectScreen(struct FLoadingScreenData* ScreenData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.SelectScreen");

	UTO14_BPI_GUI_SYS_LOADING_001_C_SelectScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenData != nullptr)
		*ScreenData = params.ScreenData;
}


// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.CreateScreenList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LOADING_001_C::CreateScreenList(const struct FString& LocationName, bool* found)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.CreateScreenList");

	UTO14_BPI_GUI_SYS_LOADING_001_C_CreateScreenList_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
}


// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LOADING_001_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.Construct");

	UTO14_BPI_GUI_SYS_LOADING_001_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.SetTipsData
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LOADING_001_C::SetTipsData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.SetTipsData");

	UTO14_BPI_GUI_SYS_LOADING_001_C_SetTipsData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.SetTipsVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LOADING_001_C::SetTipsVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.SetTipsVisibility");

	UTO14_BPI_GUI_SYS_LOADING_001_C_SetTipsVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.ClearTipsData
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LOADING_001_C::ClearTipsData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.ClearTipsData");

	UTO14_BPI_GUI_SYS_LOADING_001_C_ClearTipsData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_LOADING_001
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LOADING_001_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_LOADING_001(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_LOADING_001");

	UTO14_BPI_GUI_SYS_LOADING_001_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_LOADING_001_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
