
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

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.Initialize2nd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::Initialize2nd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.Initialize2nd");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_Initialize2nd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::Activate(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.Activate");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_Activate_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.GetCurrentId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ID                             (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::GetCurrentId(struct FString* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.GetCurrentId");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_GetCurrentId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.BindDecideEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::BindDecideEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.BindDecideEvent");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_BindDecideEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.GetIconIsDisable
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            InLineIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InIconIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsDisable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::GetIconIsDisable(int InLineIndex, int InIconIndex, bool* OutIsDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.GetIconIsDisable");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_GetIconIsDisable_Params params;
	params.InLineIndex = InLineIndex;
	params.InIconIndex = InIconIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsDisable != nullptr)
		*OutIsDisable = params.OutIsDisable;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.CB_MouseHovered
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InUniqueID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::CB_MouseHovered(int InUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.CB_MouseHovered");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_CB_MouseHovered_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.CB_MouseClicked
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InUniqueID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::CB_MouseClicked(int InUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.CB_MouseClicked");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_CB_MouseClicked_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDelayInit2nd                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::Initialize(bool bDelayInit2nd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.Initialize");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_Initialize_Params params;
	params.bDelayInit2nd = bDelayInit2nd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.ChangeSelectCursor
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::ChangeSelectCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.ChangeSelectCursor");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_ChangeSelectCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelect                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::PadWork(class AMenuPadProcess* PadData, bool* IsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.PadWork");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_PadWork_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelect != nullptr)
		*IsSelect = params.IsSelect;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.IconTextAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Line                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::IconTextAnimation(int Line, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.IconTextAnimation");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_IconTextAnimation_Params params;
	params.Line = Line;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.GetInitializeData
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IndexH                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            IndexV                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTopmenuIconData        OutData                        (Parm, OutParm)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::GetInitializeData(int IndexH, int IndexV, struct FTopmenuIconData* OutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.GetInitializeData");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_GetInitializeData_Params params;
	params.IndexH = IndexH;
	params.IndexV = IndexV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.ChangeIconData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TargetMenuID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EMenuIconType                  NewIconType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NewMenuID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::ChangeIconData(const struct FString& TargetMenuID, EMenuIconType NewIconType, const struct FString& NewMenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.ChangeIconData");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_ChangeIconData_Params params;
	params.TargetMenuID = TargetMenuID;
	params.NewIconType = NewIconType;
	params.NewMenuID = NewMenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.InitializeIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::InitializeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.InitializeIcon");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_InitializeIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.GetAnimationFinishFlag
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::GetAnimationFinishFlag(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.GetAnimationFinishFlag");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_GetAnimationFinishFlag_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.OnAnimationStarted
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.OnAnimationStarted");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_OnAnimationStarted_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.PlayVerticalAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewLine                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldLine                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::PlayVerticalAnimation(int NewLine, int OldLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.PlayVerticalAnimation");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_PlayVerticalAnimation_Params params;
	params.NewLine = NewLine;
	params.OldLine = OldLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.PlayHorizontalAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::PlayHorizontalAnimation(bool Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.PlayHorizontalAnimation");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_PlayHorizontalAnimation_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.Construct");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.OnInit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDelayed2ndInit                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::OnInit(bool bDelayed2ndInit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.OnInit");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_OnInit_Params params;
	params.bDelayed2ndInit = bDelayed2ndInit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_ICN_GROUP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_ICN_GROUP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_ICN_GROUP");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_ICN_GROUP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.OnDecideEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::OnDecideEvent__DelegateSignature(const struct FString& MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.OnDecideEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_OnDecideEvent__DelegateSignature_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.PlayIconAnimationH__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOpen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::PlayIconAnimationH__DelegateSignature(bool IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.PlayIconAnimationH__DelegateSignature");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_PlayIconAnimationH__DelegateSignature_Params params;
	params.IsOpen = IsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.PlayIconAnimationV__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C::PlayIconAnimationV__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.PlayIconAnimationV__DelegateSignature");

	UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_PlayIconAnimationV__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
