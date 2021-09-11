
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

// Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.IsAnimationFinish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Finished                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_INFO_ICON_C::IsAnimationFinish(bool* Finished)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.IsAnimationFinish");

	UTO14_BPI_GUI_SYS_INFO_ICON_C_IsAnimationFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Finished != nullptr)
		*Finished = params.Finished;
}


// Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.End
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_INFO_ICON_C::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.End");

	UTO14_BPI_GUI_SYS_INFO_ICON_C_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.StopTalkAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_INFO_ICON_C::StopTalkAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.StopTalkAnimation");

	UTO14_BPI_GUI_SYS_INFO_ICON_C_StopTalkAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOpen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_INFO_ICON_C::Play(bool IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.Play");

	UTO14_BPI_GUI_SYS_INFO_ICON_C_Play_Params params;
	params.IsOpen = IsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.SetIconType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETO14_InfoIconType> IconType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_INFO_ICON_C::SetIconType(TEnumAsByte<ETO14_InfoIconType> IconType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.SetIconType");

	UTO14_BPI_GUI_SYS_INFO_ICON_C_SetIconType_Params params;
	params.IconType = IconType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_INFO_ICON_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.OnAnimationFinished");

	UTO14_BPI_GUI_SYS_INFO_ICON_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_INFO_ICON
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_INFO_ICON_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_INFO_ICON(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_INFO_ICON");

	UTO14_BPI_GUI_SYS_INFO_ICON_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_INFO_ICON_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
