
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

// Function DUMG_TextWidget.DUMG_TextWidget_C.GetBgColorAndOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UDUMG_TextWidget_C::GetBgColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function DUMG_TextWidget.DUMG_TextWidget_C.GetBgColorAndOpacity");

	UDUMG_TextWidget_C_GetBgColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DUMG_TextWidget.DUMG_TextWidget_C.GetTextColorAndOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UDUMG_TextWidget_C::GetTextColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function DUMG_TextWidget.DUMG_TextWidget_C.GetTextColorAndOpacity");

	UDUMG_TextWidget_C_GetTextColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DUMG_TextWidget.DUMG_TextWidget_C.GetText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UDUMG_TextWidget_C::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DUMG_TextWidget.DUMG_TextWidget_C.GetText");

	UDUMG_TextWidget_C_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DUMG_TextWidget.DUMG_TextWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDUMG_TextWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DUMG_TextWidget.DUMG_TextWidget_C.Tick");

	UDUMG_TextWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DUMG_TextWidget.DUMG_TextWidget_C.SetText
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   NewText                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDUMG_TextWidget_C::SetText(const struct FText& NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function DUMG_TextWidget.DUMG_TextWidget_C.SetText");

	UDUMG_TextWidget_C_SetText_Params params;
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DUMG_TextWidget.DUMG_TextWidget_C.SetTextColor
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateColor             NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UDUMG_TextWidget_C::SetTextColor(const struct FSlateColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DUMG_TextWidget.DUMG_TextWidget_C.SetTextColor");

	UDUMG_TextWidget_C_SetTextColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DUMG_TextWidget.DUMG_TextWidget_C.SetBgColor
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UDUMG_TextWidget_C::SetBgColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DUMG_TextWidget.DUMG_TextWidget_C.SetBgColor");

	UDUMG_TextWidget_C_SetBgColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DUMG_TextWidget.DUMG_TextWidget_C.ExecuteUbergraph_DUMG_TextWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDUMG_TextWidget_C::ExecuteUbergraph_DUMG_TextWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DUMG_TextWidget.DUMG_TextWidget_C.ExecuteUbergraph_DUMG_TextWidget");

	UDUMG_TextWidget_C_ExecuteUbergraph_DUMG_TextWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
