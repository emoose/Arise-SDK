
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

// Function TO14_BPI_GUI_MNU_FIS_INFO.TO14_BPI_GUI_MNU_FIS_INFO_C.SetLureData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLureData               Data                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_FIS_INFO_C::SetLureData(const struct FLureData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_INFO.TO14_BPI_GUI_MNU_FIS_INFO_C.SetLureData");

	UTO14_BPI_GUI_MNU_FIS_INFO_C_SetLureData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_INFO.TO14_BPI_GUI_MNU_FIS_INFO_C.SetRodData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRodData                Data                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_FIS_INFO_C::SetRodData(const struct FRodData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_INFO.TO14_BPI_GUI_MNU_FIS_INFO_C.SetRodData");

	UTO14_BPI_GUI_MNU_FIS_INFO_C_SetRodData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_INFO.TO14_BPI_GUI_MNU_FIS_INFO_C.ClearFishList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_INFO_C::ClearFishList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_INFO.TO14_BPI_GUI_MNU_FIS_INFO_C.ClearFishList");

	UTO14_BPI_GUI_MNU_FIS_INFO_C_ClearFishList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_INFO.TO14_BPI_GUI_MNU_FIS_INFO_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_INFO_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_INFO.TO14_BPI_GUI_MNU_FIS_INFO_C.Init");

	UTO14_BPI_GUI_MNU_FIS_INFO_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
