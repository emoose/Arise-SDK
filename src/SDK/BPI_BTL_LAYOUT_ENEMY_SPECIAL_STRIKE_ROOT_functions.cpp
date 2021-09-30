
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

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.CheckReceiveStrikeSmash
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsReceuveStrikeSmash           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::CheckReceiveStrikeSmash(bool* IsReceuveStrikeSmash)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.CheckReceiveStrikeSmash");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_CheckReceiveStrikeSmash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsReceuveStrikeSmash != nullptr)
		*IsReceuveStrikeSmash = params.IsReceuveStrikeSmash;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.GetController
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::GetController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.GetController");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_GetController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.GetMoveSlot
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCanvasPanelSlot*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCanvasPanelSlot* UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::GetMoveSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.GetMoveSlot");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_GetMoveSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.GetWorldPosition
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::GetWorldPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.GetWorldPosition");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_GetWorldPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.Event OnOpen
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::Event_OnOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.Event OnOpen");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_Event_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.Construct");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.Destruct");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.EventOnClose
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::EventOnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.EventOnClose");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_EventOnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.OnUsedSpecialStrike
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::OnUsedSpecialStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.OnUsedSpecialStrike");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_OnUsedSpecialStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.UnBindEvent");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.OnBeginSpecialStrike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusViewModelBase* NewTargetUnit                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArisePartyID                  FilterPartyId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::OnBeginSpecialStrike(class UBtlStatusViewModelBase* NewTargetUnit, EArisePartyID FilterPartyId, float Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.OnBeginSpecialStrike");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_OnBeginSpecialStrike_Params params;
	params.NewTargetUnit = NewTargetUnit;
	params.FilterPartyId = FilterPartyId;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.BindEvent
// (Event, Public, BlueprintEvent)

void UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.BindEvent");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.OnChangePlayerTargetSmashCondition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Striker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::OnChangePlayerTargetSmashCondition(class ABtlCharacterBase* Striker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.OnChangePlayerTargetSmashCondition");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_OnChangePlayerTargetSmashCondition_Params params;
	params.Striker = Striker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.OnChangeVisiblePreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::OnChangeVisiblePreset(const struct FName& Preset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.OnChangeVisiblePreset");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_OnChangeVisiblePreset_Params params;
	params.Preset = Preset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.OnChangeTarget
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::OnChangeTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.OnChangeTarget");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_OnChangeTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.CancelStrike
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::CancelStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.CancelStrike");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_CancelStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.ExecuteUbergraph_BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C::ExecuteUbergraph_BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.ExecuteUbergraph_BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT");

	UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_ExecuteUbergraph_BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
