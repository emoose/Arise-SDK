
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

// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY_STR.TO14_BPI_GUI_SYS_TUTORIAL_KEY_STR_C.SetHelpText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 ButtonLabel1                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ButtonLabel2                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ButtonLabel3                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ButtonLabel4                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_TUTORIAL_KEY_STR_C::SetHelpText(const struct FModifiedText& Text, const struct FString& ButtonLabel1, const struct FString& ButtonLabel2, const struct FString& ButtonLabel3, const struct FString& ButtonLabel4)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_KEY_STR.TO14_BPI_GUI_SYS_TUTORIAL_KEY_STR_C.SetHelpText");

	UTO14_BPI_GUI_SYS_TUTORIAL_KEY_STR_C_SetHelpText_Params params;
	params.Text = Text;
	params.ButtonLabel1 = ButtonLabel1;
	params.ButtonLabel2 = ButtonLabel2;
	params.ButtonLabel3 = ButtonLabel3;
	params.ButtonLabel4 = ButtonLabel4;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
