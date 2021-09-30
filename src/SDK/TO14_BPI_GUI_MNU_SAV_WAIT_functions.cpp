
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

// Function TO14_BPI_GUI_MNU_SAV_WAIT.TO14_BPI_GUI_MNU_SAV_WAIT_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           iModText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_SAV_WAIT_C::SetText(const struct FModifiedText& iModText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WAIT.TO14_BPI_GUI_MNU_SAV_WAIT_C.SetText");

	UTO14_BPI_GUI_MNU_SAV_WAIT_C_SetText_Params params;
	params.iModText = iModText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WAIT.TO14_BPI_GUI_MNU_SAV_WAIT_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SAV_WAIT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_WAIT_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_SAV_WAIT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WAIT.TO14_BPI_GUI_MNU_SAV_WAIT_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SAV_WAIT");

	UTO14_BPI_GUI_MNU_SAV_WAIT_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_SAV_WAIT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
