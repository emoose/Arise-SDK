
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

// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.ShowButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CachedLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C::ShowButton(bool IsShow, const struct FString& CachedLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.ShowButton");

	UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_ShowButton_Params params;
	params.IsShow = IsShow;
	params.CachedLabel = CachedLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.getIsShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsShow                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C::getIsShow(bool* OutIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.getIsShow");

	UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_getIsShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsShow != nullptr)
		*OutIsShow = params.OutIsShow;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.Refresh");

	UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.SetHelpString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Explanation                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C::SetHelpString(const struct FModifiedText& Title, const struct FModifiedText& Explanation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.SetHelpString");

	UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_SetHelpString_Params params;
	params.Title = Title;
	params.Explanation = Explanation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.OnAnimationEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C::OnAnimationEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.OnAnimationEnd");

	UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_OnAnimationEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.OnAnimationStart
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C::OnAnimationStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.OnAnimationStart");

	UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_OnAnimationStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.Hide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCloseAnima                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C::Hide(bool IsCloseAnima)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.Hide");

	UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_Hide_Params params;
	params.IsCloseAnima = IsCloseAnima;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.Show
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.Show");

	UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.Construct");

	UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE");

	UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
