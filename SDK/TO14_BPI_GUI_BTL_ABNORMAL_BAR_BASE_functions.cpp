
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

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.RefreshIcons
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::RefreshIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.RefreshIcons");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_RefreshIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.GetPlayingBuffArrowAnimationTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          CurrentTime                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::GetPlayingBuffArrowAnimationTime(float* CurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.GetPlayingBuffArrowAnimationTime");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_GetPlayingBuffArrowAnimationTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentTime != nullptr)
		*CurrentTime = params.CurrentTime;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.ClearIcons
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::ClearIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.ClearIcons");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_ClearIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.FindIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EBattleHudAbnormalType         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C* IconWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::FindIcon(EBattleHudAbnormalType Type, class UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C** IconWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.FindIcon");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_FindIcon_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconWidget != nullptr)
		*IconWidget = params.IconWidget;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.GetAbnormalIconList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C*> Array                          (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::GetAbnormalIconList(TArray<class UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.GetAbnormalIconList");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_GetAbnormalIconList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.BindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.BindEvent");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnBeginAbnormal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         AbnormalType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::OnBeginAbnormal(EBattleHudAbnormalType AbnormalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnBeginAbnormal");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_OnBeginAbnormal_Params params;
	params.AbnormalType = AbnormalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.UnBindEvent");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnEndAbnormal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         AbnormalType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::OnEndAbnormal(EBattleHudAbnormalType AbnormalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnEndAbnormal");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_OnEndAbnormal_Params params;
	params.AbnormalType = AbnormalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.Construct");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.Destruct");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnChangeTimeAbnormal_
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         AbnormalType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::OnChangeTimeAbnormal_(EBattleHudAbnormalType AbnormalType, float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnChangeTimeAbnormal_");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_OnChangeTimeAbnormal__Params params;
	params.AbnormalType = AbnormalType;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnBeginBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         BuffType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BuffValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::OnBeginBuff(EBattleHudAbnormalType BuffType, float BuffValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnBeginBuff");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_OnBeginBuff_Params params;
	params.BuffType = BuffType;
	params.BuffValue = BuffValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnEndBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         BuffType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BuffValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::OnEndBuff(EBattleHudAbnormalType BuffType, float BuffValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnEndBuff");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_OnEndBuff_Params params;
	params.BuffType = BuffType;
	params.BuffValue = BuffValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnChangeAttribute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         PrevType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleHudAbnormalType         NextType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::OnChangeAttribute(EBattleHudAbnormalType PrevType, EBattleHudAbnormalType NextType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnChangeAttribute");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_OnChangeAttribute_Params params;
	params.PrevType = PrevType;
	params.NextType = NextType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnPostBeginBattle
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::OnPostBeginBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnPostBeginBattle");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_OnPostBeginBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
