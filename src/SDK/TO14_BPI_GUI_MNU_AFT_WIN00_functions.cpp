
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

// Function TO14_BPI_GUI_MNU_AFT_WIN00.TO14_BPI_GUI_MNU_AFT_WIN00_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_AFT_WIN00_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_WIN00.TO14_BPI_GUI_MNU_AFT_WIN00_C.Init");

	UTO14_BPI_GUI_MNU_AFT_WIN00_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_WIN00.TO14_BPI_GUI_MNU_AFT_WIN00_C.SetupItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArtifactData           AtifactData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           PartsComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExParts                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_WIN00_C::SetupItem(const struct FArtifactData& AtifactData, bool PartsComp, bool ExParts)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_WIN00.TO14_BPI_GUI_MNU_AFT_WIN00_C.SetupItem");

	UTO14_BPI_GUI_MNU_AFT_WIN00_C_SetupItem_Params params;
	params.AtifactData = AtifactData;
	params.PartsComp = PartsComp;
	params.ExParts = ExParts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
