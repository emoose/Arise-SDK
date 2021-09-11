
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

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.GetReturnValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTO14_BPI_GUI_SYS_WIN_BUTTON_C::GetReturnValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.GetReturnValue");

	UTO14_BPI_GUI_SYS_WIN_BUTTON_C_GetReturnValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.GetRenderSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UTO14_BPI_GUI_SYS_WIN_BUTTON_C::GetRenderSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.GetRenderSize");

	UTO14_BPI_GUI_SYS_WIN_BUTTON_C_GetRenderSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.ButtonSizeCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_BUTTON_C::ButtonSizeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.ButtonSizeCheck");

	UTO14_BPI_GUI_SYS_WIN_BUTTON_C_ButtonSizeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTO14_BPI_GUI_SYS_WIN_BUTTON_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.OnMouseButtonDown");

	UTO14_BPI_GUI_SYS_WIN_BUTTON_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.SetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_BUTTON_C::SetEnable(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.SetEnable");

	UTO14_BPI_GUI_SYS_WIN_BUTTON_C_SetEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_SYS_WIN_BUTTON_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.OnMouseEnter");

	UTO14_BPI_GUI_SYS_WIN_BUTTON_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_SYS_WIN_BUTTON_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.OnMouseLeave");

	UTO14_BPI_GUI_SYS_WIN_BUTTON_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_BUTTON_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.Tick");

	UTO14_BPI_GUI_SYS_WIN_BUTTON_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.TextChange
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   UpdateText                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FString                 DictionaryGroup                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_WIN_BUTTON_C::TextChange(const struct FText& UpdateText, const struct FString& DictionaryGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.TextChange");

	UTO14_BPI_GUI_SYS_WIN_BUTTON_C_TextChange_Params params;
	params.UpdateText = UpdateText;
	params.DictionaryGroup = DictionaryGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.PlayOpenAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_BUTTON_C::PlayOpenAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.PlayOpenAnimation");

	UTO14_BPI_GUI_SYS_WIN_BUTTON_C_PlayOpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.PlayCloseAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_BUTTON_C::PlayCloseAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.PlayCloseAnimation");

	UTO14_BPI_GUI_SYS_WIN_BUTTON_C_PlayCloseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.SetReturnValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_BUTTON_C::SetReturnValue(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.SetReturnValue");

	UTO14_BPI_GUI_SYS_WIN_BUTTON_C_SetReturnValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.SetEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_BUTTON_C::SetEnabled(bool IsEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.SetEnabled");

	UTO14_BPI_GUI_SYS_WIN_BUTTON_C_SetEnabled_Params params;
	params.IsEnable = IsEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.SetOwnerWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 SystemWindow                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_BUTTON_C::SetOwnerWidget(class UWidget* SystemWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.SetOwnerWidget");

	UTO14_BPI_GUI_SYS_WIN_BUTTON_C_SetOwnerWidget_Params params;
	params.SystemWindow = SystemWindow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_BUTTON
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_BUTTON_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_BUTTON(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_BUTTON");

	UTO14_BPI_GUI_SYS_WIN_BUTTON_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_BUTTON_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
