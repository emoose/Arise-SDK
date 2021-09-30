
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

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.ReplaceInputState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSwapEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DerivedInputStateComponent_C::ReplaceInputState(bool bSwapEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.ReplaceInputState");

	UBP_DerivedInputStateComponent_C_ReplaceInputState_Params params;
	params.bSwapEnabled = bSwapEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.SetInputState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArtsSlotIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DerivedInputStateComponent_C::SetInputState(int ArtsSlotIndex, bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.SetInputState");

	UBP_DerivedInputStateComponent_C_SetInputState_Params params;
	params.ArtsSlotIndex = ArtsSlotIndex;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.GetArtsSlotIndexByButtonId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ButtonID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ArtsSlotIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DerivedInputStateComponent_C::GetArtsSlotIndexByButtonId(struct FName* ButtonID, int* ArtsSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.GetArtsSlotIndexByButtonId");

	UBP_DerivedInputStateComponent_C_GetArtsSlotIndexByButtonId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonID != nullptr)
		*ButtonID = params.ButtonID;
	if (ArtsSlotIndex != nullptr)
		*ArtsSlotIndex = params.ArtsSlotIndex;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.CanArtsSwap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_DerivedInputStateComponent_C::CanArtsSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.CanArtsSwap");

	UBP_DerivedInputStateComponent_C_CanArtsSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.GetNowArtsButtonId
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBP_DerivedInputStateComponent_C::GetNowArtsButtonId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.GetNowArtsButtonId");

	UBP_DerivedInputStateComponent_C_GetNowArtsButtonId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.IsMagicKeepButtonPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_DerivedInputStateComponent_C::IsMagicKeepButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.IsMagicKeepButtonPressed");

	UBP_DerivedInputStateComponent_C_IsMagicKeepButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.BP_CanMysticAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_DerivedInputStateComponent_C::BP_CanMysticAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.BP_CanMysticAction");

	UBP_DerivedInputStateComponent_C_BP_CanMysticAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.GetPressedCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_DerivedInputStateComponent_C::GetPressedCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.GetPressedCount");

	UBP_DerivedInputStateComponent_C_GetPressedCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.IsMysticButtonPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_DerivedInputStateComponent_C::IsMysticButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.IsMysticButtonPressed");

	UBP_DerivedInputStateComponent_C_IsMysticButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.CanDerivedAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_DerivedInputStateComponent_C::CanDerivedAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.CanDerivedAction");

	UBP_DerivedInputStateComponent_C_CanDerivedAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.IsDerivedButtonPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_DerivedInputStateComponent_C::IsDerivedButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.IsDerivedButtonPressed");

	UBP_DerivedInputStateComponent_C_IsDerivedButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ButtonName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlInputEventType             Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DerivedInputStateComponent_C::OnButtonPressed(const struct FName& ButtonName, EBtlInputEventType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnButtonPressed");

	UBP_DerivedInputStateComponent_C_OnButtonPressed_Params params;
	params.ButtonName = ButtonName;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnButtonReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ButtonName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlInputEventType             Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DerivedInputStateComponent_C::OnButtonReleased(const struct FName& ButtonName, EBtlInputEventType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnButtonReleased");

	UBP_DerivedInputStateComponent_C_OnButtonReleased_Params params;
	params.ButtonName = ButtonName;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_DerivedInputStateComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.ReceiveBeginPlay");

	UBP_DerivedInputStateComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DerivedInputStateComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.ReceiveTick");

	UBP_DerivedInputStateComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnBeginAttackState
// (BlueprintCallable, BlueprintEvent)

void UBP_DerivedInputStateComponent_C::OnBeginAttackState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnBeginAttackState");

	UBP_DerivedInputStateComponent_C_OnBeginAttackState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.BindUnitEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DerivedInputStateComponent_C::BindUnitEvent(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.BindUnitEvent");

	UBP_DerivedInputStateComponent_C_BindUnitEvent_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleActionState             NowState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleActionState             PreState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DerivedInputStateComponent_C::OnStateChanged(EBattleActionState NowState, EBattleActionState PreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnStateChanged");

	UBP_DerivedInputStateComponent_C_OnStateChanged_Params params;
	params.NowState = NowState;
	params.PreState = PreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.UnbindUnitEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DerivedInputStateComponent_C::UnbindUnitEvent(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.UnbindUnitEvent");

	UBP_DerivedInputStateComponent_C_UnbindUnitEvent_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnPaused
// (BlueprintCallable, BlueprintEvent)

void UBP_DerivedInputStateComponent_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnPaused");

	UBP_DerivedInputStateComponent_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnUnPaused
// (BlueprintCallable, BlueprintEvent)

void UBP_DerivedInputStateComponent_C::OnUnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnUnPaused");

	UBP_DerivedInputStateComponent_C_OnUnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.InitializeInputState
// (BlueprintCallable, BlueprintEvent)

void UBP_DerivedInputStateComponent_C::InitializeInputState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.InitializeInputState");

	UBP_DerivedInputStateComponent_C_InitializeInputState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnWon
// (BlueprintCallable, BlueprintEvent)

void UBP_DerivedInputStateComponent_C::OnWon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnWon");

	UBP_DerivedInputStateComponent_C_OnWon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnOperationUnitChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       PrevOperationUnit              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       NowOperationUnit               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DerivedInputStateComponent_C::OnOperationUnitChanged(class ABtlCharacterBase* PrevOperationUnit, class ABtlCharacterBase* NowOperationUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnOperationUnitChanged");

	UBP_DerivedInputStateComponent_C_OnOperationUnitChanged_Params params;
	params.PrevOperationUnit = PrevOperationUnit;
	params.NowOperationUnit = NowOperationUnit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnArtsSwapButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ButtonName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlInputEventType             Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DerivedInputStateComponent_C::OnArtsSwapButtonPressed(const struct FName& ButtonName, EBtlInputEventType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnArtsSwapButtonPressed");

	UBP_DerivedInputStateComponent_C_OnArtsSwapButtonPressed_Params params;
	params.ButtonName = ButtonName;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnArtsSwapButtonReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ButtonName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlInputEventType             Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DerivedInputStateComponent_C::OnArtsSwapButtonReleased(const struct FName& ButtonName, EBtlInputEventType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnArtsSwapButtonReleased");

	UBP_DerivedInputStateComponent_C_OnArtsSwapButtonReleased_Params params;
	params.ButtonName = ButtonName;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.ExecuteUbergraph_BP_DerivedInputStateComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DerivedInputStateComponent_C::ExecuteUbergraph_BP_DerivedInputStateComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.ExecuteUbergraph_BP_DerivedInputStateComponent");

	UBP_DerivedInputStateComponent_C_ExecuteUbergraph_BP_DerivedInputStateComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
