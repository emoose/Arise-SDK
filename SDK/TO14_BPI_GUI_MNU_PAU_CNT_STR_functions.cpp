
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

// Function TO14_BPI_GUI_MNU_PAU_CNT_STR.TO14_BPI_GUI_MNU_PAU_CNT_STR_C.SetAssignText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_PAU_CNT_STR_C::SetAssignText(const struct FModifiedText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_STR.TO14_BPI_GUI_MNU_PAU_CNT_STR_C.SetAssignText");

	UTO14_BPI_GUI_MNU_PAU_CNT_STR_C_SetAssignText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_STR.TO14_BPI_GUI_MNU_PAU_CNT_STR_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_PAU_CNT_STR_C::SetButtonText(const struct FModifiedText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_STR.TO14_BPI_GUI_MNU_PAU_CNT_STR_C.SetButtonText");

	UTO14_BPI_GUI_MNU_PAU_CNT_STR_C_SetButtonText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
