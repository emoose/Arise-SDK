
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

// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.SetEnemyBuff
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         EnableType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleHudAbnormalType         BreakType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBreak                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_INFOMATION_C::SetEnemyBuff(EBattleHudAbnormalType EnableType, bool IsEnable, EBattleHudAbnormalType BreakType, bool IsBreak)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.SetEnemyBuff");

	UTO14_BPI_GUI_BTL_INFOMATION_C_SetEnemyBuff_Params params;
	params.EnableType = EnableType;
	params.IsEnable = IsEnable;
	params.BreakType = BreakType;
	params.IsBreak = IsBreak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.InitializeEnemyBuffIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         EnableType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleHudAbnormalType         BreakType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBreak                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_INFOMATION_C::InitializeEnemyBuffIcon(EBattleHudAbnormalType EnableType, bool IsEnable, EBattleHudAbnormalType BreakType, bool IsBreak)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.InitializeEnemyBuffIcon");

	UTO14_BPI_GUI_BTL_INFOMATION_C_InitializeEnemyBuffIcon_Params params;
	params.EnableType = EnableType;
	params.IsEnable = IsEnable;
	params.BreakType = BreakType;
	params.IsBreak = IsBreak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.@Initilize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_INFOMATION_C::@Initilize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.@Initilize");

	UTO14_BPI_GUI_BTL_INFOMATION_C_@Initilize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.@ApplyHpBar
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_INFOMATION_C::@ApplyHpBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.@ApplyHpBar");

	UTO14_BPI_GUI_BTL_INFOMATION_C_@ApplyHpBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.OnOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_INFOMATION_C::OnOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.OnOpen");

	UTO14_BPI_GUI_BTL_INFOMATION_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.OnChangeHp
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_INFOMATION_C::OnChangeHp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.OnChangeHp");

	UTO14_BPI_GUI_BTL_INFOMATION_C_OnChangeHp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_INFOMATION_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.Destruct");

	UTO14_BPI_GUI_BTL_INFOMATION_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_INFOMATION_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.Construct");

	UTO14_BPI_GUI_BTL_INFOMATION_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.OnBeginChangeTarget
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_INFOMATION_C::OnBeginChangeTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.OnBeginChangeTarget");

	UTO14_BPI_GUI_BTL_INFOMATION_C_OnBeginChangeTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.OnEndChangeTarget
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_INFOMATION_C::OnEndChangeTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.OnEndChangeTarget");

	UTO14_BPI_GUI_BTL_INFOMATION_C_OnEndChangeTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_INFOMATION_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.UnBindEvent");

	UTO14_BPI_GUI_BTL_INFOMATION_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.BindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_INFOMATION_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.BindEvent");

	UTO14_BPI_GUI_BTL_INFOMATION_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.OnChangeElementType
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_INFOMATION_C::OnChangeElementType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.OnChangeElementType");

	UTO14_BPI_GUI_BTL_INFOMATION_C_OnChangeElementType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.BindViewModel
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_INFOMATION_C::BindViewModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.BindViewModel");

	UTO14_BPI_GUI_BTL_INFOMATION_C_BindViewModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.UnbindViewModel
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_INFOMATION_C::UnbindViewModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.UnbindViewModel");

	UTO14_BPI_GUI_BTL_INFOMATION_C_UnbindViewModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_INFOMATION
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_INFOMATION_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_INFOMATION(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFOMATION.TO14_BPI_GUI_BTL_INFOMATION_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_INFOMATION");

	UTO14_BPI_GUI_BTL_INFOMATION_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_INFOMATION_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
