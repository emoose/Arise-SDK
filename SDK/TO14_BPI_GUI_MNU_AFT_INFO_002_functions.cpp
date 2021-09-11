
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

// Function TO14_BPI_GUI_MNU_AFT_INFO_002.TO14_BPI_GUI_MNU_AFT_INFO_002_C.SetSource
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_AFT_INFO_002_C::SetSource(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_INFO_002.TO14_BPI_GUI_MNU_AFT_INFO_002_C.SetSource");

	UTO14_BPI_GUI_MNU_AFT_INFO_002_C_SetSource_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_INFO_002.TO14_BPI_GUI_MNU_AFT_INFO_002_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_AFT_INFO_002_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_INFO_002.TO14_BPI_GUI_MNU_AFT_INFO_002_C.Init");

	UTO14_BPI_GUI_MNU_AFT_INFO_002_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
