
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

// Function TO14_BPI_GUI_MNU_FIS_LOC.TO14_BPI_GUI_MNU_FIS_LOC_C.InitLocList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_LOC_C::InitLocList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LOC.TO14_BPI_GUI_MNU_FIS_LOC_C.InitLocList");

	UTO14_BPI_GUI_MNU_FIS_LOC_C_InitLocList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_LOC.TO14_BPI_GUI_MNU_FIS_LOC_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_LOC_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LOC.TO14_BPI_GUI_MNU_FIS_LOC_C.Init");

	UTO14_BPI_GUI_MNU_FIS_LOC_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_LOC.TO14_BPI_GUI_MNU_FIS_LOC_C.SetAreaData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFishingAreaData        AreaData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_FIS_LOC_C::SetAreaData(const struct FFishingAreaData& AreaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LOC.TO14_BPI_GUI_MNU_FIS_LOC_C.SetAreaData");

	UTO14_BPI_GUI_MNU_FIS_LOC_C_SetAreaData_Params params;
	params.AreaData = AreaData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
