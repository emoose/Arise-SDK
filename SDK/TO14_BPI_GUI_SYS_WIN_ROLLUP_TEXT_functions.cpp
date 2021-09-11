
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

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.GetBarLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::GetBarLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.GetBarLength");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_GetBarLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetAriseScrollBar
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::SetAriseScrollBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetAriseScrollBar");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_SetAriseScrollBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.RefreshScrollBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::RefreshScrollBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.RefreshScrollBar");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_RefreshScrollBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetScrollBarLength
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlider*                 self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          PanelLength                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ContentLength                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::SetScrollBarLength(class USlider* self2, float PanelLength, float ContentLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetScrollBarLength");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_SetScrollBarLength_Params params;
	params.self2 = self2;
	params.PanelLength = PanelLength;
	params.ContentLength = ContentLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.EnableLanguageButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::EnableLanguageButton(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.EnableLanguageButton");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_EnableLanguageButton_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.GetLineAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::GetLineAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.GetLineAmount");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_GetLineAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.GetPageAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::GetPageAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.GetPageAmount");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_GetPageAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.Move
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDown                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::Move(bool IsDown, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.Move");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_Move_Params params;
	params.IsDown = IsDown;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetScrollBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::SetScrollBar(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetScrollBar");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_SetScrollBar_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetTranslatedButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ButtonTextLabel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EULA_Language                  Lang                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::SetTranslatedButton(const struct FString& ButtonTextLabel, EULA_Language Lang, const struct FString& Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetTranslatedButton");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_SetTranslatedButton_Params params;
	params.ButtonTextLabel = ButtonTextLabel;
	params.Lang = Lang;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetTranslatedText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TextLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EULA_Language                  Lang                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::SetTranslatedText(const struct FString& TextLabel, EULA_Language Lang)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetTranslatedText");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_SetTranslatedText_Params params;
	params.TextLabel = TextLabel;
	params.Lang = Lang;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetModifiedText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::SetModifiedText(const struct FModifiedText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetModifiedText");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_SetModifiedText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.Construct");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.Tick");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.񣌘򠳾񍯐�0�0_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::񣌘򠳾񍯐�0�0_1(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.񣌘򠳾񍯐�0�0_1");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_񣌘򠳾񍯐�0�0_1_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::Activate(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.Activate");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_Activate_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.UpdateMoveText
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::UpdateMoveText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.UpdateMoveText");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_UpdateMoveText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.BndEvt__AriseScrollBar_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::BndEvt__AriseScrollBar_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.BndEvt__AriseScrollBar_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_BndEvt__AriseScrollBar_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.LanguageButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::LanguageButtonClicked__DelegateSignature(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.LanguageButtonClicked__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_LanguageButtonClicked__DelegateSignature_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.NextClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::NextClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.NextClicked__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_NextClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.PrevClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C::PrevClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.PrevClicked__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_PrevClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
