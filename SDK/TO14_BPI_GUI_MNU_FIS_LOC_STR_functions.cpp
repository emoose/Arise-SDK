
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

// Function TO14_BPI_GUI_MNU_FIS_LOC_STR.TO14_BPI_GUI_MNU_FIS_LOC_STR_C.ChangeFishNameColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OpenColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_LOC_STR_C::ChangeFishNameColor(bool OpenColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LOC_STR.TO14_BPI_GUI_MNU_FIS_LOC_STR_C.ChangeFishNameColor");

	UTO14_BPI_GUI_MNU_FIS_LOC_STR_C_ChangeFishNameColor_Params params;
	params.OpenColor = OpenColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_LOC_STR.TO14_BPI_GUI_MNU_FIS_LOC_STR_C.GetButtonLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Chara                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Label                          (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_FIS_LOC_STR_C::GetButtonLabel(const struct FString& Chara, struct FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LOC_STR.TO14_BPI_GUI_MNU_FIS_LOC_STR_C.GetButtonLabel");

	UTO14_BPI_GUI_MNU_FIS_LOC_STR_C_GetButtonLabel_Params params;
	params.Chara = Chara;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function TO14_BPI_GUI_MNU_FIS_LOC_STR.TO14_BPI_GUI_MNU_FIS_LOC_STR_C.SetButtonAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_FIS_LOC_STR_C::SetButtonAction(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LOC_STR.TO14_BPI_GUI_MNU_FIS_LOC_STR_C.SetButtonAction");

	UTO14_BPI_GUI_MNU_FIS_LOC_STR_C_SetButtonAction_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_LOC_STR.TO14_BPI_GUI_MNU_FIS_LOC_STR_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_FIS_LOC_STR_C::SetText(const struct FModifiedText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LOC_STR.TO14_BPI_GUI_MNU_FIS_LOC_STR_C.SetText");

	UTO14_BPI_GUI_MNU_FIS_LOC_STR_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_LOC_STR.TO14_BPI_GUI_MNU_FIS_LOC_STR_C.ClearText
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_LOC_STR_C::ClearText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LOC_STR.TO14_BPI_GUI_MNU_FIS_LOC_STR_C.ClearText");

	UTO14_BPI_GUI_MNU_FIS_LOC_STR_C_ClearText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
