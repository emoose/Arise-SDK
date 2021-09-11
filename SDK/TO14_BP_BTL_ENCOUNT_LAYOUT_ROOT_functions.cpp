
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

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.UpdateEncountUnitNum
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::UpdateEncountUnitNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.UpdateEncountUnitNum");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_UpdateEncountUnitNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.IsArenaFirstCheck
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   EncountGroupLabel              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFirst                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::IsArenaFirstCheck(const struct FName& EncountGroupLabel, bool* IsFirst)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.IsArenaFirstCheck");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_IsArenaFirstCheck_Params params;
	params.EncountGroupLabel = EncountGroupLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFirst != nullptr)
		*IsFirst = params.IsFirst;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.AddEncountUnit
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   UnitLabel                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::AddEncountUnit(const struct FName& UnitLabel, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.AddEncountUnit");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_AddEncountUnit_Params params;
	params.UnitLabel = UnitLabel;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.StopAnimations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidgetAnimation*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::StopAnimations(TArray<class UWidgetAnimation*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.StopAnimations");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_StopAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.HideAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::HideAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.HideAnim");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_HideAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.DeadedEnemy
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::DeadedEnemy(class ABtlCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.DeadedEnemy");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_DeadedEnemy_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.FinishedEnemyReinforcement
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   UnitID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::FinishedEnemyReinforcement(const struct FName& UnitID, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.FinishedEnemyReinforcement");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_FinishedEnemyReinforcement_Params params;
	params.UnitID = UnitID;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.SafeStopAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::SafeStopAnimation(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.SafeStopAnimation");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_SafeStopAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.ShowEncountData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::ShowEncountData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.ShowEncountData");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_ShowEncountData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.Development_SetEncountLoadState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, bool>       LoadState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::Development_SetEncountLoadState(TMap<struct FName, bool> LoadState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.Development_SetEncountLoadState");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_Development_SetEncountLoadState_Params params;
	params.LoadState = LoadState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.SetBattleStart
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::SetBattleStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.SetBattleStart");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_SetBattleStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.SetEncount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBtlEncountGroupParam> NewEncountArray                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::SetEncount(bool IsShow, TArray<struct FBtlEncountGroupParam>* NewEncountArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.SetEncount");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_SetEncount_Params params;
	params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewEncountArray != nullptr)
		*NewEncountArray = params.NewEncountArray;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.Construct");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.BndEvt__Loop_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::BndEvt__Loop_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.BndEvt__Loop_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_BndEvt__Loop_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.BndEvt__Start_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::BndEvt__Start_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.BndEvt__Start_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_BndEvt__Start_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.BattleStart
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::BattleStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.BattleStart");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_BattleStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.ShowEncountRequest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBtlEncountGroupParam> NewEncountArray                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::ShowEncountRequest(TArray<struct FBtlEncountGroupParam> NewEncountArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.ShowEncountRequest");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_ShowEncountRequest_Params params;
	params.NewEncountArray = NewEncountArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.Destruct");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.ShowLastEncountRequest
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::ShowLastEncountRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.ShowLastEncountRequest");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_ShowLastEncountRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnBeginChangeTarget
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::OnBeginChangeTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnBeginChangeTarget");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnBeginChangeTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.BndEvt__End_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::BndEvt__End_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.BndEvt__End_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_BndEvt__End_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnMenuExit
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::OnMenuExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnMenuExit");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnMenuExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnFinishedEnemyReinforcement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SpawnUnitId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SpawnNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::OnFinishedEnemyReinforcement(const struct FName& SpawnUnitId, int SpawnNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnFinishedEnemyReinforcement");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnFinishedEnemyReinforcement_Params params;
	params.SpawnUnitId = SpawnUnitId;
	params.SpawnNum = SpawnNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnDeadCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::OnDeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnDeadCharacter");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnDeadCharacter_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnSpawnCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reinforcement                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::OnSpawnCharacter(class ABtlCharacterBase* Character, bool Reinforcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnSpawnCharacter");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnSpawnCharacter_Params params;
	params.Character = Character;
	params.Reinforcement = Reinforcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnEndBattle
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::OnEndBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnEndBattle");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnEndBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnBeginBattle
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::OnBeginBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnBeginBattle");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnBeginBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.SetEncountInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBtlEncountGroupParam> NewEncountArray                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::SetEncountInfo(TArray<struct FBtlEncountGroupParam> NewEncountArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.SetEncountInfo");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_SetEncountInfo_Params params;
	params.NewEncountArray = NewEncountArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.UpdatePreset
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::UpdatePreset()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.UpdatePreset");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_UpdatePreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnChangePreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::OnChangePreset(const struct FName& Preset)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnChangePreset");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnChangePreset_Params params;
	params.Preset = Preset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.ExecuteUbergraph_TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C::ExecuteUbergraph_TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.ExecuteUbergraph_TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_ExecuteUbergraph_TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
