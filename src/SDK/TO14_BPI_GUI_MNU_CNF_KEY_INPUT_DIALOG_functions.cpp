
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

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           InChengeTitleText              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           InButtunMessageText            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           InButtunIDText                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           InChengeMessage                (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG_C::SetText(const struct FModifiedText& InChengeTitleText, const struct FModifiedText& InButtunMessageText, const struct FModifiedText& InButtunIDText, const struct FModifiedText& InChengeMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG_C.SetText");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG_C_SetText_Params params;
	params.InChengeTitleText = InChengeTitleText;
	params.InButtunMessageText = InButtunMessageText;
	params.InButtunIDText = InButtunIDText;
	params.InChengeMessage = InChengeMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG_C.PlayCloseAnime
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG_C::PlayCloseAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG_C.PlayCloseAnime");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG_C_PlayCloseAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG_C.PlayOpenAnime
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG_C::PlayOpenAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG_C.PlayOpenAnime");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_DIALOG_C_PlayOpenAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
