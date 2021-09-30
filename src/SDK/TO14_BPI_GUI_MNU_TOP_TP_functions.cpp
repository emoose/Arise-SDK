
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

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_TP_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.Refresh");

	UTO14_BPI_GUI_MNU_TOP_TP_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.BindOnPreviewEvemt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TOP_TP_C::BindOnPreviewEvemt(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.BindOnPreviewEvemt");

	UTO14_BPI_GUI_MNU_TOP_TP_C_BindOnPreviewEvemt_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.GetVisibleFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_C::GetVisibleFlag(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.GetVisibleFlag");

	UTO14_BPI_GUI_MNU_TOP_TP_C_GetVisibleFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.CursorIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_C::CursorIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.CursorIndex");

	UTO14_BPI_GUI_MNU_TOP_TP_C_CursorIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.HPHeal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_C::HPHeal(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.HPHeal");

	UTO14_BPI_GUI_MNU_TOP_TP_C_HPHeal_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.TPPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_C::TPPreview(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.TPPreview");

	UTO14_BPI_GUI_MNU_TOP_TP_C_TPPreview_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.PadWork");

	UTO14_BPI_GUI_MNU_TOP_TP_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_TP_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.Close");

	UTO14_BPI_GUI_MNU_TOP_TP_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.Open
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_TP_C::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.Open");

	UTO14_BPI_GUI_MNU_TOP_TP_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_TP_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.Init");

	UTO14_BPI_GUI_MNU_TOP_TP_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.OnInit
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_TP_C::OnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.OnInit");

	UTO14_BPI_GUI_MNU_TOP_TP_C_OnInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.OnPreviewFromCmdList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EArisePartyID, int>       HealHPMap                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            UseTP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_C::OnPreviewFromCmdList(TMap<EArisePartyID, int> HealHPMap, int UseTP)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.OnPreviewFromCmdList");

	UTO14_BPI_GUI_MNU_TOP_TP_C_OnPreviewFromCmdList_Params params;
	params.HealHPMap = HealHPMap;
	params.UseTP = UseTP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_24_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_TP_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_24_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_24_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TOP_TP_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_24_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_TOP_TP_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_TP_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TOP_TP_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_TP_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TOP_TP_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_TP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_TP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_TP");

	UTO14_BPI_GUI_MNU_TOP_TP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_TP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
