
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

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsReceiveSmashCondition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsReceiveSmashCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsReceiveSmashCondition");

	UBP_BtlStatusViewModel_C_IsReceiveSmashCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeAttributeIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBreak                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleHudAbnormalType         EnableIconType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleHudAbnormalType         BreakIconType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnChangeAttributeIcon(bool Enable, bool IsBreak, EBattleHudAbnormalType EnableIconType, EBattleHudAbnormalType BreakIconType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeAttributeIcon");

	UBP_BtlStatusViewModel_C_OnChangeAttributeIcon_Params params;
	params.Enable = Enable;
	params.IsBreak = IsBreak;
	params.EnableIconType = EnableIconType;
	params.BreakIconType = BreakIconType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.ChangeAbnormalIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         PrevType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleHudAbnormalType         NextType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::ChangeAbnormalIcon(EBattleHudAbnormalType PrevType, EBattleHudAbnormalType NextType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.ChangeAbnormalIcon");

	UBP_BtlStatusViewModel_C_ChangeAbnormalIcon_Params params;
	params.PrevType = PrevType;
	params.NextType = NextType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.ConvertHudAbnormal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EBattleHudAbnormalType         HudAbnormal                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAbnormalType                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAbnormalType UBP_BtlStatusViewModel_C::ConvertHudAbnormal(EBattleHudAbnormalType HudAbnormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.ConvertHudAbnormal");

	UBP_BtlStatusViewModel_C_ConvertHudAbnormal_Params params;
	params.HudAbnormal = HudAbnormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetAbnormalValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EBattleHudAbnormalType         AbnormalType                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_BtlStatusViewModel_C::GetAbnormalValue(EBattleHudAbnormalType AbnormalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetAbnormalValue");

	UBP_BtlStatusViewModel_C_GetAbnormalValue_Params params;
	params.AbnormalType = AbnormalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetAbnormalTimePercent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EBattleHudAbnormalType         AbnormalType                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_BtlStatusViewModel_C::GetAbnormalTimePercent(EBattleHudAbnormalType AbnormalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetAbnormalTimePercent");

	UBP_BtlStatusViewModel_C_GetAbnormalTimePercent_Params params;
	params.AbnormalType = AbnormalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.RemoveAbnormalInfo
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::RemoveAbnormalInfo(EBattleHudAbnormalType InType, bool* removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.RemoveAbnormalInfo");

	UBP_BtlStatusViewModel_C_RemoveAbnormalInfo_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (removed != nullptr)
		*removed = params.removed;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.AddAbnormalInfo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::AddAbnormalInfo(EBattleHudAbnormalType InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.AddAbnormalInfo");

	UBP_BtlStatusViewModel_C_AddAbnormalInfo_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsBreakArmor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsBreakArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsBreakArmor");

	UBP_BtlStatusViewModel_C_IsBreakArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsBreakSuperAvoid
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsBreakSuperAvoid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsBreakSuperAvoid");

	UBP_BtlStatusViewModel_C_IsBreakSuperAvoid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsMomentaryRush
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsMomentaryRush()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsMomentaryRush");

	UBP_BtlStatusViewModel_C_IsMomentaryRush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.UpdateBuffIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlStatusViewModel_C::UpdateBuffIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.UpdateBuffIcon");

	UBP_BtlStatusViewModel_C_UpdateBuffIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.SetBuffIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::SetBuffIcon(EBattleHudAbnormalType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.SetBuffIcon");

	UBP_BtlStatusViewModel_C_SetBuffIcon_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EndBuff
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         HudType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::EndBuff(EBattleHudAbnormalType HudType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EndBuff");

	UBP_BtlStatusViewModel_C_EndBuff_Params params;
	params.HudType = HudType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.StartBuff
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         HudType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BuffValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::StartBuff(EBattleHudAbnormalType HudType, float BuffValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.StartBuff");

	UBP_BtlStatusViewModel_C_StartBuff_Params params;
	params.HudType = HudType;
	params.BuffValue = BuffValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsEnableFlying
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsEnableFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsEnableFlying");

	UBP_BtlStatusViewModel_C_IsEnableFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsDead
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsDead");

	UBP_BtlStatusViewModel_C_IsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_BtlStatusViewModel_C::GetLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetLevel");

	UBP_BtlStatusViewModel_C_GetLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetSPInternal
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_BtlStatusViewModel_C::GetSPInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetSPInternal");

	UBP_BtlStatusViewModel_C_GetSPInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetMaxSPInternal
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_BtlStatusViewModel_C::GetMaxSPInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetMaxSPInternal");

	UBP_BtlStatusViewModel_C_GetMaxSPInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsUseableArts
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsUseableArts(const struct FName& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsUseableArts");

	UBP_BtlStatusViewModel_C_IsUseableArts_Params params;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetUniqueSkillValueMax
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_BtlStatusViewModel_C::GetUniqueSkillValueMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetUniqueSkillValueMax");

	UBP_BtlStatusViewModel_C_GetUniqueSkillValueMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetUniqueSkillValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_BtlStatusViewModel_C::GetUniqueSkillValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetUniqueSkillValue");

	UBP_BtlStatusViewModel_C_GetUniqueSkillValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsUniqueSkillActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsUniqueSkillActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsUniqueSkillActive");

	UBP_BtlStatusViewModel_C_IsUniqueSkillActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.ChangeAbnormalTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAbnormalType                  Abnormal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AbnormalTimer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::ChangeAbnormalTime(EAbnormalType Abnormal, float AbnormalTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.ChangeAbnormalTime");

	UBP_BtlStatusViewModel_C_ChangeAbnormalTime_Params params;
	params.Abnormal = Abnormal;
	params.AbnormalTimer = AbnormalTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.ConvertAbnormal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EAbnormalType                  Abnormal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleHudAbnormalType         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBattleHudAbnormalType UBP_BtlStatusViewModel_C::ConvertAbnormal(EAbnormalType Abnormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.ConvertAbnormal");

	UBP_BtlStatusViewModel_C_ConvertAbnormal_Params params;
	params.Abnormal = Abnormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetDName
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FDictionaryText         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDictionaryText UBP_BtlStatusViewModel_C::GetDName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetDName");

	UBP_BtlStatusViewModel_C_GetDName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnPinch2Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnPinch2Normal(class UBtlStatusComponent* SelfComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnPinch2Normal");

	UBP_BtlStatusViewModel_C_OnPinch2Normal_Params params;
	params.SelfComponent = SelfComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnNormal2Pinch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnNormal2Pinch(class UBtlStatusComponent* SelfComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnNormal2Pinch");

	UBP_BtlStatusViewModel_C_OnNormal2Pinch_Params params;
	params.SelfComponent = SelfComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetStrikeRate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_BtlStatusViewModel_C::GetStrikeRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetStrikeRate");

	UBP_BtlStatusViewModel_C_GetStrikeRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsAvailableStrikeAttack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsAvailableStrikeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsAvailableStrikeAttack");

	UBP_BtlStatusViewModel_C_IsAvailableStrikeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsStrikeSmash
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsStrikeSmash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsStrikeSmash");

	UBP_BtlStatusViewModel_C_IsStrikeSmash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsMysticLearned
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsMysticLearned()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsMysticLearned");

	UBP_BtlStatusViewModel_C_IsMysticLearned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsPlayerOperation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsPlayerOperation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsPlayerOperation");

	UBP_BtlStatusViewModel_C_IsPlayerOperation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsAir
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsAir()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsAir");

	UBP_BtlStatusViewModel_C_IsAir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsOverlimit
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsOverlimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsOverlimit");

	UBP_BtlStatusViewModel_C_IsOverlimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsBreakRush
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsBreakRush()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsBreakRush");

	UBP_BtlStatusViewModel_C_IsBreakRush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsBreakFlying
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsBreakFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsBreakFlying");

	UBP_BtlStatusViewModel_C_IsBreakFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsEnableArmor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsEnableArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsEnableArmor");

	UBP_BtlStatusViewModel_C_IsEnableArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsEnableSuperAvoid
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsEnableSuperAvoid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsEnableSuperAvoid");

	UBP_BtlStatusViewModel_C_IsEnableSuperAvoid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetElementType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EBtlElementType                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBtlElementType UBP_BtlStatusViewModel_C::GetElementType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetElementType");

	UBP_BtlStatusViewModel_C_GetElementType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetSpellCastLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBP_BtlStatusViewModel_C::GetSpellCastLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetSpellCastLocation");

	UBP_BtlStatusViewModel_C_GetSpellCastLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetAbnormalType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<EBattleHudAbnormalType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<EBattleHudAbnormalType> UBP_BtlStatusViewModel_C::GetAbnormalType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetAbnormalType");

	UBP_BtlStatusViewModel_C_GetAbnormalType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetOverlimitRate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_BtlStatusViewModel_C::GetOverlimitRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetOverlimitRate");

	UBP_BtlStatusViewModel_C_GetOverlimitRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetPlayerWorldPosition
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBP_BtlStatusViewModel_C::GetPlayerWorldPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetPlayerWorldPosition");

	UBP_BtlStatusViewModel_C_GetPlayerWorldPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetTargetWorldPosition
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBP_BtlStatusViewModel_C::GetTargetWorldPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetTargetWorldPosition");

	UBP_BtlStatusViewModel_C_GetTargetWorldPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetMaxSP
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_BtlStatusViewModel_C::GetMaxSP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetMaxSP");

	UBP_BtlStatusViewModel_C_GetMaxSP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetPcOrder
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EPCOrder                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPCOrder UBP_BtlStatusViewModel_C::GetPcOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetPcOrder");

	UBP_BtlStatusViewModel_C_GetPcOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsStrikeFull
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlStatusViewModel_C::IsStrikeFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsStrikeFull");

	UBP_BtlStatusViewModel_C_IsStrikeFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetWorldPosition
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBP_BtlStatusViewModel_C::GetWorldPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetWorldPosition");

	UBP_BtlStatusViewModel_C_GetWorldPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetName
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_BtlStatusViewModel_C::GetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetName");

	UBP_BtlStatusViewModel_C_GetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetPartyId
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EArisePartyID                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EArisePartyID UBP_BtlStatusViewModel_C::GetPartyId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetPartyId");

	UBP_BtlStatusViewModel_C_GetPartyId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetSP
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_BtlStatusViewModel_C::GetSP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetSP");

	UBP_BtlStatusViewModel_C_GetSP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetMaxHp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_BtlStatusViewModel_C::GetMaxHp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetMaxHp");

	UBP_BtlStatusViewModel_C_GetMaxHp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetHp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_BtlStatusViewModel_C::GetHp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetHp");

	UBP_BtlStatusViewModel_C_GetHp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeOverlimitTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BtlStatusViewModel_C::EventOnChangeOverlimitTime(class UBtlStatusComponent* SelfComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeOverlimitTime");

	UBP_BtlStatusViewModel_C_EventOnChangeOverlimitTime_Params params;
	params.SelfComponent = SelfComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnBeginAbnormal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EAbnormalType                  AbnormalType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::EventOnBeginAbnormal(class UBtlStatusComponent* SelfComponent, EAbnormalType AbnormalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnBeginAbnormal");

	UBP_BtlStatusViewModel_C_EventOnBeginAbnormal_Params params;
	params.SelfComponent = SelfComponent;
	params.AbnormalType = AbnormalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnEndAbnormal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EAbnormalType                  AbnormalType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::EventOnEndAbnormal(class UBtlStatusComponent* SelfComponent, EAbnormalType AbnormalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnEndAbnormal");

	UBP_BtlStatusViewModel_C_EventOnEndAbnormal_Params params;
	params.SelfComponent = SelfComponent;
	params.AbnormalType = AbnormalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlTargetCursorComponent* NewTargetComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       NewTargetCharacter             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlTargetCursorComponent* PrevTargetComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnChangeTarget(class ABtlCharacterBase* SelfCharacter, class UBtlTargetCursorComponent* NewTargetComponent, class ABtlCharacterBase* NewTargetCharacter, class UBtlTargetCursorComponent* PrevTargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeTarget");

	UBP_BtlStatusViewModel_C_OnChangeTarget_Params params;
	params.SelfCharacter = SelfCharacter;
	params.NewTargetComponent = NewTargetComponent;
	params.NewTargetCharacter = NewTargetCharacter;
	params.PrevTargetComponent = PrevTargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.K2_Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlStatusViewModel_C::K2_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.K2_Initialize");

	UBP_BtlStatusViewModel_C_K2_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAirArtsChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAir                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnAirArtsChange(bool IsAir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAirArtsChange");

	UBP_BtlStatusViewModel_C_OnAirArtsChange_Params params;
	params.IsAir = IsAir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.K2_Fainalize
// (Event, Public, BlueprintEvent)

void UBP_BtlStatusViewModel_C::K2_Fainalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.K2_Fainalize");

	UBP_BtlStatusViewModel_C_K2_Fainalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangePCArts
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnChangePCArts(class ABtlCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangePCArts");

	UBP_BtlStatusViewModel_C_OnChangePCArts_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnMaxStrike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BtlStatusViewModel_C::EventOnMaxStrike(class UBtlStatusComponent* SelfComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnMaxStrike");

	UBP_BtlStatusViewModel_C_EventOnMaxStrike_Params params;
	params.SelfComponent = SelfComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeSmashCondition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Striker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnChangeSmashCondition(class ABtlCharacterBase* Striker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeSmashCondition");

	UBP_BtlStatusViewModel_C_OnChangeSmashCondition_Params params;
	params.Striker = Striker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeStrike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BtlStatusViewModel_C::EventOnChangeStrike(class UBtlStatusComponent* SelfComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeStrike");

	UBP_BtlStatusViewModel_C_EventOnChangeStrike_Params params;
	params.SelfComponent = SelfComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangePCOrder
// (BlueprintCallable, BlueprintEvent)

void UBP_BtlStatusViewModel_C::OnChangePCOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangePCOrder");

	UBP_BtlStatusViewModel_C_OnChangePCOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAbnormal_RushBreak
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnAbnormal_RushBreak(class ABtlCharacterBase* SelfCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAbnormal_RushBreak");

	UBP_BtlStatusViewModel_C_OnAbnormal_RushBreak_Params params;
	params.SelfCharacter = SelfCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeExAbnormal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         AbnormalType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnChangeExAbnormal(EBattleHudAbnormalType AbnormalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeExAbnormal");

	UBP_BtlStatusViewModel_C_OnChangeExAbnormal_Params params;
	params.AbnormalType = AbnormalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAbnormal_Armor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnAbnormal_Armor(class ABtlCharacterBase* SelfCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAbnormal_Armor");

	UBP_BtlStatusViewModel_C_OnAbnormal_Armor_Params params;
	params.SelfCharacter = SelfCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAbnormalFryingBreak
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnAbnormalFryingBreak(class ABtlCharacterBase* SelfCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAbnormalFryingBreak");

	UBP_BtlStatusViewModel_C_OnAbnormalFryingBreak_Params params;
	params.SelfCharacter = SelfCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAbnormal_SuperAvoid
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnAbnormal_SuperAvoid(class ABtlCharacterBase* SelfCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAbnormal_SuperAvoid");

	UBP_BtlStatusViewModel_C_OnAbnormal_SuperAvoid_Params params;
	params.SelfCharacter = SelfCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeAbnormalTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EAbnormalType                  AbnormalType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PrevTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnChangeAbnormalTime(class UBtlStatusComponent* SelfComponent, EAbnormalType AbnormalType, float PrevTime, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeAbnormalTime");

	UBP_BtlStatusViewModel_C_OnChangeAbnormalTime_Params params;
	params.SelfComponent = SelfComponent;
	params.AbnormalType = AbnormalType;
	params.PrevTime = PrevTime;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.BeginUniqueSkill
// (BlueprintCallable, BlueprintEvent)

void UBP_BtlStatusViewModel_C::BeginUniqueSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.BeginUniqueSkill");

	UBP_BtlStatusViewModel_C_BeginUniqueSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EndUniqueSkill
// (BlueprintCallable, BlueprintEvent)

void UBP_BtlStatusViewModel_C::EndUniqueSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EndUniqueSkill");

	UBP_BtlStatusViewModel_C_EndUniqueSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeSpInternal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          PrevSp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewSp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::EventOnChangeSpInternal(class UBtlStatusComponent* SelfComponent, float PrevSp, float NewSp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeSpInternal");

	UBP_BtlStatusViewModel_C_EventOnChangeSpInternal_Params params;
	params.SelfComponent = SelfComponent;
	params.PrevSp = PrevSp;
	params.NewSp = NewSp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnDeadCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BtlStatusViewModel_C::OnDeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnDeadCharacter");

	UBP_BtlStatusViewModel_C_OnDeadCharacter_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnRaiseDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Healer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HealValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnRaiseDead(class ABtlCharacterBase* Healer, class ABtlCharacterBase* Receiver, int HealValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnRaiseDead");

	UBP_BtlStatusViewModel_C_OnRaiseDead_Params params;
	params.Healer = Healer;
	params.Receiver = Receiver;
	params.HealValue = HealValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeHp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            PrevHp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewHp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::EventOnChangeHp(class UBtlStatusComponent* SelfComponent, int PrevHp, int NewHp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeHp");

	UBP_BtlStatusViewModel_C_EventOnChangeHp_Params params;
	params.SelfComponent = SelfComponent;
	params.PrevHp = PrevHp;
	params.NewHp = NewHp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnBeginBuff
// (BlueprintCallable, BlueprintEvent)

void UBP_BtlStatusViewModel_C::EventOnBeginBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnBeginBuff");

	UBP_BtlStatusViewModel_C_EventOnBeginBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnEndBuff
// (BlueprintCallable, BlueprintEvent)

void UBP_BtlStatusViewModel_C::EventOnEndBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnEndBuff");

	UBP_BtlStatusViewModel_C_EventOnEndBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnBeginMomentaryRush
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnBeginMomentaryRush(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnBeginMomentaryRush");

	UBP_BtlStatusViewModel_C_OnBeginMomentaryRush_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnEndMomentaryRush
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnEndMomentaryRush(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnEndMomentaryRush");

	UBP_BtlStatusViewModel_C_OnEndMomentaryRush_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnRecoil
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnRecoil(class ABtlCharacterBase* Sender, class ABtlCharacterBase* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnRecoil");

	UBP_BtlStatusViewModel_C_OnRecoil_Params params;
	params.Sender = Sender;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAbnormalStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EBattleHudAbnormalType         IconId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnAbnormalStateChanged(class UBtlStatusComponent* Sender, EBattleHudAbnormalType IconId, bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAbnormalStateChanged");

	UBP_BtlStatusViewModel_C_OnAbnormalStateChanged_Params params;
	params.Sender = Sender;
	params.IconId = IconId;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeOperationCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       PrevOperationUnit              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       NowOperationUnit               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnChangeOperationCharacter(class ABtlCharacterBase* PrevOperationUnit, class ABtlCharacterBase* NowOperationUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeOperationCharacter");

	UBP_BtlStatusViewModel_C_OnChangeOperationCharacter_Params params;
	params.PrevOperationUnit = PrevOperationUnit;
	params.NowOperationUnit = NowOperationUnit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.񣌘򠳾񍯐�0�0_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlChangeOrderHandle   Handle                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::񣌘򠳾񍯐�0�0_1(const struct FBtlChangeOrderHandle& Handle, bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.񣌘򠳾񍯐�0�0_1");

	UBP_BtlStatusViewModel_C_񣌘򠳾񍯐�0�0_1_Params params;
	params.Handle = Handle;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeTp
// (BlueprintCallable, BlueprintEvent)

void UBP_BtlStatusViewModel_C::EventOnChangeTp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeTp");

	UBP_BtlStatusViewModel_C_EventOnChangeTp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnReserveArtsStrikeSmash
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   StrikeLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::OnReserveArtsStrikeSmash(const struct FName& StrikeLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnReserveArtsStrikeSmash");

	UBP_BtlStatusViewModel_C_OnReserveArtsStrikeSmash_Params params;
	params.StrikeLabel = StrikeLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeElementType
// (BlueprintCallable, BlueprintEvent)

void UBP_BtlStatusViewModel_C::EventOnChangeElementType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeElementType");

	UBP_BtlStatusViewModel_C_EventOnChangeElementType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnOutMaxStrike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BtlStatusViewModel_C::EventOnOutMaxStrike(class UBtlStatusComponent* SelfComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnOutMaxStrike");

	UBP_BtlStatusViewModel_C_EventOnOutMaxStrike_Params params;
	params.SelfComponent = SelfComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.ExecuteUbergraph_BP_BtlStatusViewModel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlStatusViewModel_C::ExecuteUbergraph_BP_BtlStatusViewModel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.ExecuteUbergraph_BP_BtlStatusViewModel");

	UBP_BtlStatusViewModel_C_ExecuteUbergraph_BP_BtlStatusViewModel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
