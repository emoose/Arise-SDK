
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

// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.getIsShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsShow                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C::getIsShow(bool* OutIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.getIsShow");

	UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_getIsShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsShow != nullptr)
		*OutIsShow = params.OutIsShow;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.Refresh");

	UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.Construct");

	UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.Tick");

	UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EKeyHelpMode>      Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C::Show(TEnumAsByte<EKeyHelpMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.Show");

	UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_Show_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.Hide");

	UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.SetMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EKeyHelpMode>      Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C::SetMode(TEnumAsByte<EKeyHelpMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.SetMode");

	UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_SetMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.OnAnimationEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C::OnAnimationEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.OnAnimationEnd");

	UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_OnAnimationEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TUTORIAL_KEY
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_TUTORIAL_KEY(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TUTORIAL_KEY");

	UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TUTORIAL_KEY_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
