
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

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.IsRunningGroupJump
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bRunning                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::IsRunningGroupJump(bool* bRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.IsRunningGroupJump");

	UBP_MNU_FREE_CURSOR_Base_C_IsRunningGroupJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRunning != nullptr)
		*bRunning = params.bRunning;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ForceRunGroupJump
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::ForceRunGroupJump(int Group, class UWidget* To, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ForceRunGroupJump");

	UBP_MNU_FREE_CURSOR_Base_C_ForceRunGroupJump_Params params;
	params.Group = Group;
	params.To = To;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.MouseUnhoverAll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::MouseUnhoverAll(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.MouseUnhoverAll");

	UBP_MNU_FREE_CURSOR_Base_C_MouseUnhoverAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.MouseUnhover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::MouseUnhover(class UWidget* Widget, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.MouseUnhover");

	UBP_MNU_FREE_CURSOR_Base_C_MouseUnhover_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.MouseHover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::MouseHover(class UWidget* Widget, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.MouseHover");

	UBP_MNU_FREE_CURSOR_Base_C_MouseHover_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RequestInitGroupJump
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MNU_FREE_CURSOR_Base_C::RequestInitGroupJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RequestInitGroupJump");

	UBP_MNU_FREE_CURSOR_Base_C_RequestInitGroupJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckInitGroupJump
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::CheckInitGroupJump(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckInitGroupJump");

	UBP_MNU_FREE_CURSOR_Base_C_CheckInitGroupJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ContainsHitVisibleHoveredAreas
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::ContainsHitVisibleHoveredAreas(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ContainsHitVisibleHoveredAreas");

	UBP_MNU_FREE_CURSOR_Base_C_ContainsHitVisibleHoveredAreas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetDragMoveSpeedScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::SetDragMoveSpeedScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetDragMoveSpeedScale");

	UBP_MNU_FREE_CURSOR_Base_C_SetDragMoveSpeedScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.DragMove
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MousePos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::DragMove(const struct FVector2D& MousePos, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.DragMove");

	UBP_MNU_FREE_CURSOR_Base_C_DragMove_Params params;
	params.MousePos = MousePos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetWidgetComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        WidgetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::SetWidgetComponent(class UWidgetComponent* WidgetComponent, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetWidgetComponent");

	UBP_MNU_FREE_CURSOR_Base_C_SetWidgetComponent_Params params;
	params.WidgetComponent = WidgetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.UnbindDecideEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnDecide                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MNU_FREE_CURSOR_Base_C::UnbindDecideEvent(const struct FScriptDelegate& OnDecide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.UnbindDecideEvent");

	UBP_MNU_FREE_CURSOR_Base_C_UnbindDecideEvent_Params params;
	params.OnDecide = OnDecide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindMoveCanvasEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MNU_FREE_CURSOR_Base_C::BindMoveCanvasEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindMoveCanvasEvent");

	UBP_MNU_FREE_CURSOR_Base_C_BindMoveCanvasEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.IsAdsorbEnable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::IsAdsorbEnable(bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.IsAdsorbEnable");

	UBP_MNU_FREE_CURSOR_Base_C_IsAdsorbEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetAdsorbEnable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::SetAdsorbEnable(bool bEnable, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetAdsorbEnable");

	UBP_MNU_FREE_CURSOR_Base_C_SetAdsorbEnable_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CanAdsorb
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::CanAdsorb(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CanAdsorb");

	UBP_MNU_FREE_CURSOR_Base_C_CanAdsorb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetMoveSpeedScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::SetMoveSpeedScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetMoveSpeedScale");

	UBP_MNU_FREE_CURSOR_Base_C_SetMoveSpeedScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetEntityVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::SetEntityVisible(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetEntityVisible");

	UBP_MNU_FREE_CURSOR_Base_C_SetEntityVisible_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.GetEntityWidget
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::GetEntityWidget(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.GetEntityWidget");

	UBP_MNU_FREE_CURSOR_Base_C_GetEntityWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.StopGroupJump
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::StopGroupJump(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.StopGroupJump");

	UBP_MNU_FREE_CURSOR_Base_C_StopGroupJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.StopAdsorb
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_MNU_FREE_CURSOR_Base_C::StopAdsorb()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.StopAdsorb");

	UBP_MNU_FREE_CURSOR_Base_C_StopAdsorb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.DeReaction
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           EndReaction                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::DeReaction(class UWidget* Widget, bool* EndReaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.DeReaction");

	UBP_MNU_FREE_CURSOR_Base_C_DeReaction_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EndReaction != nullptr)
		*EndReaction = params.EndReaction;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Reaction
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           StartReaction                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::Reaction(class UWidget* Widget, bool* StartReaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Reaction");

	UBP_MNU_FREE_CURSOR_Base_C_Reaction_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartReaction != nullptr)
		*StartReaction = params.StartReaction;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Hover
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::Hover(class UWidget* Widget, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Hover");

	UBP_MNU_FREE_CURSOR_Base_C_Hover_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ClampMoveLimit
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               InPos                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               OutPos                         (Parm, OutParm, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::ClampMoveLimit(const struct FVector2D& InPos, struct FVector2D* OutPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ClampMoveLimit");

	UBP_MNU_FREE_CURSOR_Base_C_ClampMoveLimit_Params params;
	params.InPos = InPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPos != nullptr)
		*OutPos = params.OutPos;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetMoveLimitOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::SetMoveLimitOffset(const struct FVector2D& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetMoveLimitOffset");

	UBP_MNU_FREE_CURSOR_Base_C_SetMoveLimitOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindDecideEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnDecide                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MNU_FREE_CURSOR_Base_C::BindDecideEvent(const struct FScriptDelegate& OnDecide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindDecideEvent");

	UBP_MNU_FREE_CURSOR_Base_C_BindDecideEvent_Params params;
	params.OnDecide = OnDecide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ResetMove
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::ResetMove(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ResetMove");

	UBP_MNU_FREE_CURSOR_Base_C_ResetMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RemoveHoverAreaAll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::RemoveHoverAreaAll(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RemoveHoverAreaAll");

	UBP_MNU_FREE_CURSOR_Base_C_RemoveHoverAreaAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindEndGroupJumpEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnEndGroupJump                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MNU_FREE_CURSOR_Base_C::BindEndGroupJumpEvent(const struct FScriptDelegate& OnEndGroupJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindEndGroupJumpEvent");

	UBP_MNU_FREE_CURSOR_Base_C_BindEndGroupJumpEvent_Params params;
	params.OnEndGroupJump = OnEndGroupJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindStartGroupJumpEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnStartGroupJump               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MNU_FREE_CURSOR_Base_C::BindStartGroupJumpEvent(const struct FScriptDelegate& OnStartGroupJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindStartGroupJumpEvent");

	UBP_MNU_FREE_CURSOR_Base_C_BindStartGroupJumpEvent_Params params;
	params.OnStartGroupJump = OnStartGroupJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CanInput
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::CanInput(bool* Can)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CanInput");

	UBP_MNU_FREE_CURSOR_Base_C_CanInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.GetHoveredAreas
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>         HoveredAreas                   (Parm, OutParm, ZeroConstructor)

void UBP_MNU_FREE_CURSOR_Base_C::GetHoveredAreas(TArray<class UWidget*>* HoveredAreas)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.GetHoveredAreas");

	UBP_MNU_FREE_CURSOR_Base_C_GetHoveredAreas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HoveredAreas != nullptr)
		*HoveredAreas = params.HoveredAreas;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetGroupJumpInputButtons
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FST_MenuFreeCursorButton> Buttons                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MNU_FREE_CURSOR_Base_C::SetGroupJumpInputButtons(int Group, TArray<struct FST_MenuFreeCursorButton>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetGroupJumpInputButtons");

	UBP_MNU_FREE_CURSOR_Base_C_SetGroupJumpInputButtons_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.GetGroupJumpArea
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UWidget*>         Widgets                        (Parm, OutParm, ZeroConstructor)

void UBP_MNU_FREE_CURSOR_Base_C::GetGroupJumpArea(int Group, TArray<class UWidget*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.GetGroupJumpArea");

	UBP_MNU_FREE_CURSOR_Base_C_GetGroupJumpArea_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Unhover
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::Unhover(class UWidget* Widget, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Unhover");

	UBP_MNU_FREE_CURSOR_Base_C_Unhover_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.UnhoverAll
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::UnhoverAll(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.UnhoverAll");

	UBP_MNU_FREE_CURSOR_Base_C_UnhoverAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RemoveHoverArea
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::RemoveHoverArea(class UWidget* Widget, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RemoveHoverArea");

	UBP_MNU_FREE_CURSOR_Base_C_RemoveHoverArea_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ExecGroupJump
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::ExecGroupJump(float Time, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ExecGroupJump");

	UBP_MNU_FREE_CURSOR_Base_C_ExecGroupJump_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindUnhoveredEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnUnhovered                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MNU_FREE_CURSOR_Base_C::BindUnhoveredEvent(const struct FScriptDelegate& OnUnhovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindUnhoveredEvent");

	UBP_MNU_FREE_CURSOR_Base_C_BindUnhoveredEvent_Params params;
	params.OnUnhovered = OnUnhovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindHoveredEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnHovered                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MNU_FREE_CURSOR_Base_C::BindHoveredEvent(const struct FScriptDelegate& OnHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindHoveredEvent");

	UBP_MNU_FREE_CURSOR_Base_C_BindHoveredEvent_Params params;
	params.OnHovered = OnHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RunMove
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InputAxis                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::RunMove(const struct FVector2D& InputAxis, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RunMove");

	UBP_MNU_FREE_CURSOR_Base_C_RunMove_Params params;
	params.InputAxis = InputAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RunGroup1Jump
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InputDir                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::RunGroup1Jump(const struct FVector2D& InputDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RunGroup1Jump");

	UBP_MNU_FREE_CURSOR_Base_C_RunGroup1Jump_Params params;
	params.InputDir = InputDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RunGroup0Jump
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InputDir                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::RunGroup0Jump(const struct FVector2D& InputDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RunGroup0Jump");

	UBP_MNU_FREE_CURSOR_Base_C_RunGroup0Jump_Params params;
	params.InputDir = InputDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.AddGroupJumpArea
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UWidget*>         Widgets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MNU_FREE_CURSOR_Base_C::AddGroupJumpArea(int Group, TArray<class UWidget*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.AddGroupJumpArea");

	UBP_MNU_FREE_CURSOR_Base_C_AddGroupJumpArea_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.DecideHoveredAreas
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_MNU_FREE_CURSOR_Base_C::DecideHoveredAreas()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.DecideHoveredAreas");

	UBP_MNU_FREE_CURSOR_Base_C_DecideHoveredAreas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckDecideInput
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInput                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::CheckDecideInput(class AMenuPadProcess* PadProcess, bool* IsInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckDecideInput");

	UBP_MNU_FREE_CURSOR_Base_C_CheckDecideInput_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInput != nullptr)
		*IsInput = params.IsInput;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindMoveCanvasWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 MoveCanvastWidget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::BindMoveCanvasWidget(class UWidget* MoveCanvastWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindMoveCanvasWidget");

	UBP_MNU_FREE_CURSOR_Base_C_BindMoveCanvasWidget_Params params;
	params.MoveCanvastWidget = MoveCanvastWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.AddHoverArea
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::AddHoverArea(class UWidget* Widget, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.AddHoverArea");

	UBP_MNU_FREE_CURSOR_Base_C_AddHoverArea_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.AddAdsorbAreas
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// TArray<class UBP_MenuFreeCursorAdsorbArea_C*> AdsorbAreas                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::AddAdsorbAreas(class UWidget* Key, TArray<class UBP_MenuFreeCursorAdsorbArea_C*>* AdsorbAreas, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.AddAdsorbAreas");

	UBP_MNU_FREE_CURSOR_Base_C_AddAdsorbAreas_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdsorbAreas != nullptr)
		*AdsorbAreas = params.AdsorbAreas;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Term
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MNU_FREE_CURSOR_Base_C::Term()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Term");

	UBP_MNU_FREE_CURSOR_Base_C_Term_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckGroup1JumpInput
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInput                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               InputDir                       (Parm, OutParm, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::CheckGroup1JumpInput(class AMenuPadProcess* PadProcess, bool* IsInput, struct FVector2D* InputDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckGroup1JumpInput");

	UBP_MNU_FREE_CURSOR_Base_C_CheckGroup1JumpInput_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInput != nullptr)
		*IsInput = params.IsInput;
	if (InputDir != nullptr)
		*InputDir = params.InputDir;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckMoveInput
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInput                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               InputAxis                      (Parm, OutParm, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::CheckMoveInput(class AMenuPadProcess* PadProcess, bool* IsInput, struct FVector2D* InputAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckMoveInput");

	UBP_MNU_FREE_CURSOR_Base_C_CheckMoveInput_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInput != nullptr)
		*IsInput = params.IsInput;
	if (InputAxis != nullptr)
		*InputAxis = params.InputAxis;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.FindNearlyAdsorbArea
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// TArray<class UBP_MenuFreeCursorAdsorbArea_C*> OutNearlyAdsorbAreaHierarchy   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBP_MenuFreeCursorAdsorbArea_C* NearlyAdsorbArea               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::FindNearlyAdsorbArea(class UWidget* Key, TArray<class UBP_MenuFreeCursorAdsorbArea_C*>* OutNearlyAdsorbAreaHierarchy, bool* found, class UBP_MenuFreeCursorAdsorbArea_C** NearlyAdsorbArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.FindNearlyAdsorbArea");

	UBP_MNU_FREE_CURSOR_Base_C_FindNearlyAdsorbArea_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNearlyAdsorbAreaHierarchy != nullptr)
		*OutNearlyAdsorbAreaHierarchy = params.OutNearlyAdsorbAreaHierarchy;
	if (found != nullptr)
		*found = params.found;
	if (NearlyAdsorbArea != nullptr)
		*NearlyAdsorbArea = params.NearlyAdsorbArea;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckGroup0JumpInput
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInputExtInputProcessBase* PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInput                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               InputDir                       (Parm, OutParm, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::CheckGroup0JumpInput(class AInputExtInputProcessBase* PadProcess, bool* IsInput, struct FVector2D* InputDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckGroup0JumpInput");

	UBP_MNU_FREE_CURSOR_Base_C_CheckGroup0JumpInput_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInput != nullptr)
		*IsInput = params.IsInput;
	if (InputDir != nullptr)
		*InputDir = params.InputDir;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckDushInput
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInputExtInputProcessBase* PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInput                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::CheckDushInput(class AInputExtInputProcessBase* PadProcess, bool* IsInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckDushInput");

	UBP_MNU_FREE_CURSOR_Base_C_CheckDushInput_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInput != nullptr)
		*IsInput = params.IsInput;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.MoveCanvas
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               DeltaMove                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Threshold                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::MoveCanvas(const struct FVector2D& DeltaMove, float Threshold, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.MoveCanvas");

	UBP_MNU_FREE_CURSOR_Base_C_MoveCanvas_Params params;
	params.DeltaMove = DeltaMove;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckMouseCursorHover
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::CheckMouseCursorHover(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckMouseCursorHover");

	UBP_MNU_FREE_CURSOR_Base_C_CheckMouseCursorHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckPadCursorHover
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::CheckPadCursorHover(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckPadCursorHover");

	UBP_MNU_FREE_CURSOR_Base_C_CheckPadCursorHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ExecAdsorb
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::ExecAdsorb(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ExecAdsorb");

	UBP_MNU_FREE_CURSOR_Base_C_ExecAdsorb_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ExecPadInput
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::ExecPadInput(class AMenuPadProcess* PadProcess, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ExecPadInput");

	UBP_MNU_FREE_CURSOR_Base_C_ExecPadInput_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ExecMouseInput
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::ExecMouseInput(class AMenuPadProcess* PadProcess, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ExecMouseInput");

	UBP_MNU_FREE_CURSOR_Base_C_ExecMouseInput_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckControl
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMouse                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::CheckControl(class AMenuPadProcess* PadProcess, bool* IsMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckControl");

	UBP_MNU_FREE_CURSOR_Base_C_CheckControl_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMouse != nullptr)
		*IsMouse = params.IsMouse;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Exec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMenuData               GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::Exec(float Time, class AMenuPadProcess* PadProcess, const struct FMenuData& GlobalData, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Exec");

	UBP_MNU_FREE_CURSOR_Base_C_Exec_Params params;
	params.Time = Time;
	params.PadProcess = PadProcess;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::Init(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Init");

	UBP_MNU_FREE_CURSOR_Base_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnCloseSystemWindow
// (BlueprintCallable, BlueprintEvent)

void UBP_MNU_FREE_CURSOR_Base_C::OnCloseSystemWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnCloseSystemWindow");

	UBP_MNU_FREE_CURSOR_Base_C_OnCloseSystemWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnMouseControlStart
// (BlueprintCallable, BlueprintEvent)

void UBP_MNU_FREE_CURSOR_Base_C::OnMouseControlStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnMouseControlStart");

	UBP_MNU_FREE_CURSOR_Base_C_OnMouseControlStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnPadControlStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::OnPadControlStart(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnPadControlStart");

	UBP_MNU_FREE_CURSOR_Base_C_OnPadControlStart_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnDushStart
// (BlueprintCallable, BlueprintEvent)

void UBP_MNU_FREE_CURSOR_Base_C::OnDushStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnDushStart");

	UBP_MNU_FREE_CURSOR_Base_C_OnDushStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnDushEnd
// (BlueprintCallable, BlueprintEvent)

void UBP_MNU_FREE_CURSOR_Base_C::OnDushEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnDushEnd");

	UBP_MNU_FREE_CURSOR_Base_C_OnDushEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnOpenSystemWindow
// (BlueprintCallable, BlueprintEvent)

void UBP_MNU_FREE_CURSOR_Base_C::OnOpenSystemWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnOpenSystemWindow");

	UBP_MNU_FREE_CURSOR_Base_C_OnOpenSystemWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_MNU_FREE_CURSOR_Base_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Destruct");

	UBP_MNU_FREE_CURSOR_Base_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ExecuteUbergraph_BP_MNU_FREE_CURSOR_Base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::ExecuteUbergraph_BP_MNU_FREE_CURSOR_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ExecuteUbergraph_BP_MNU_FREE_CURSOR_Base");

	UBP_MNU_FREE_CURSOR_Base_C_ExecuteUbergraph_BP_MNU_FREE_CURSOR_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnMoveCanvas__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MNU_FREE_CURSOR_Base_C::OnMoveCanvas__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnMoveCanvas__DelegateSignature");

	UBP_MNU_FREE_CURSOR_Base_C_OnMoveCanvas__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnDecideEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::OnDecideEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnDecideEvent__DelegateSignature");

	UBP_MNU_FREE_CURSOR_Base_C_OnDecideEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnEndGroupJump__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::OnEndGroupJump__DelegateSignature(int Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnEndGroupJump__DelegateSignature");

	UBP_MNU_FREE_CURSOR_Base_C_OnEndGroupJump__DelegateSignature_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnStartGroupJump__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::OnStartGroupJump__DelegateSignature(int Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnStartGroupJump__DelegateSignature");

	UBP_MNU_FREE_CURSOR_Base_C_OnStartGroupJump__DelegateSignature_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnUnhovered__DelegateSignature");

	UBP_MNU_FREE_CURSOR_Base_C_OnUnhovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Base_C::OnHovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnHovered__DelegateSignature");

	UBP_MNU_FREE_CURSOR_Base_C_OnHovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
