
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

// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_NEXT_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.Refresh");

	UTO14_BPI_GUI_SYS_PF_NEXT_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           InModifiedText                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_PF_NEXT_C::SetText(const struct FModifiedText& InModifiedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.SetText");

	UTO14_BPI_GUI_SYS_PF_NEXT_C_SetText_Params params;
	params.InModifiedText = InModifiedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.SetIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsMainQuest                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_NEXT_C::SetIcon(bool InIsMainQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.SetIcon");

	UTO14_BPI_GUI_SYS_PF_NEXT_C_SetIcon_Params params;
	params.InIsMainQuest = InIsMainQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.SetShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_NEXT_C::SetShow(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.SetShow");

	UTO14_BPI_GUI_SYS_PF_NEXT_C_SetShow_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.PFUIHelp_Close
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_NEXT_C::PFUIHelp_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.PFUIHelp_Close");

	UTO14_BPI_GUI_SYS_PF_NEXT_C_PFUIHelp_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.PFUIHelp_Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsMainQuest                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_NEXT_C::PFUIHelp_Open(bool InIsMainQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.PFUIHelp_Open");

	UTO14_BPI_GUI_SYS_PF_NEXT_C_PFUIHelp_Open_Params params;
	params.InIsMainQuest = InIsMainQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.getIsShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutIsShow                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_NEXT_C::getIsShow(bool* OutIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.getIsShow");

	UTO14_BPI_GUI_SYS_PF_NEXT_C_getIsShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsShow != nullptr)
		*OutIsShow = params.OutIsShow;
}


// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_NEXT_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.Construct");

	UTO14_BPI_GUI_SYS_PF_NEXT_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.AnimaStarted
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_NEXT_C::AnimaStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.AnimaStarted");

	UTO14_BPI_GUI_SYS_PF_NEXT_C_AnimaStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.AnimaFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_NEXT_C::AnimaFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.AnimaFinished");

	UTO14_BPI_GUI_SYS_PF_NEXT_C_AnimaFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.OpenStarted
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_NEXT_C::OpenStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.OpenStarted");

	UTO14_BPI_GUI_SYS_PF_NEXT_C_OpenStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.CloseFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_NEXT_C::CloseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.CloseFinished");

	UTO14_BPI_GUI_SYS_PF_NEXT_C_CloseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_NEXT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_NEXT_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_NEXT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_NEXT");

	UTO14_BPI_GUI_SYS_PF_NEXT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_NEXT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
