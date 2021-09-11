
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

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.IsLoadComplated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bIsLoadComplated               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlLaunchWorkerActor_C::IsLoadComplated(bool* bIsLoadComplated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.IsLoadComplated");

	ABP_BtlLaunchWorkerActor_C_IsLoadComplated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsLoadComplated != nullptr)
		*bIsLoadComplated = params.bIsLoadComplated;
}


// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.DevBootBattleable
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlLaunchWorkerActor_C::DevBootBattleable(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.DevBootBattleable");

	ABP_BtlLaunchWorkerActor_C_DevBootBattleable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.IsBattleRunable
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlLaunchWorkerActor_C::IsBattleRunable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.IsBattleRunable");

	ABP_BtlLaunchWorkerActor_C_IsBattleRunable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.UnloadBattle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BtlLaunchWorkerActor_C::UnloadBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.UnloadBattle");

	ABP_BtlLaunchWorkerActor_C_UnloadBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.LoadBattle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BtlLaunchWorkerActor_C::LoadBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.LoadBattle");

	ABP_BtlLaunchWorkerActor_C_LoadBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.IsLoadComplateEncountEffect
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlLaunchWorkerActor_C::IsLoadComplateEncountEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.IsLoadComplateEncountEffect");

	ABP_BtlLaunchWorkerActor_C_IsLoadComplateEncountEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.ChangeBattleScene
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlLaunchWorkerActor_C::ChangeBattleScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.ChangeBattleScene");

	ABP_BtlLaunchWorkerActor_C_ChangeBattleScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlLaunchWorkerActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.UserConstructionScript");

	ABP_BtlLaunchWorkerActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BtlLaunchWorkerActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.ReceiveBeginPlay");

	ABP_BtlLaunchWorkerActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.DoBattle
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlLaunchWorkerActor_C::DoBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.DoBattle");

	ABP_BtlLaunchWorkerActor_C_DoBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.OnWakeupPlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlLaunchWorkerActor_C::OnWakeupPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.OnWakeupPlayer");

	ABP_BtlLaunchWorkerActor_C_OnWakeupPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlLaunchWorkerActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.ReceiveEndPlay");

	ABP_BtlLaunchWorkerActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.OnBattleEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlResultInfo          ResultInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlLaunchWorkerActor_C::OnBattleEnd(const struct FBtlResultInfo& ResultInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.OnBattleEnd");

	ABP_BtlLaunchWorkerActor_C_OnBattleEnd_Params params;
	params.ResultInfo = ResultInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.ExecuteUbergraph_BP_BtlLaunchWorkerActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlLaunchWorkerActor_C::ExecuteUbergraph_BP_BtlLaunchWorkerActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.ExecuteUbergraph_BP_BtlLaunchWorkerActor");

	ABP_BtlLaunchWorkerActor_C_ExecuteUbergraph_BP_BtlLaunchWorkerActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.OnBattlePhaseEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_BtlLaunchWorkerActor_C::OnBattlePhaseEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.OnBattlePhaseEnd__DelegateSignature");

	ABP_BtlLaunchWorkerActor_C_OnBattlePhaseEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.OnBattlePhaseStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Acepct                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlLaunchWorkerActor_C::OnBattlePhaseStart__DelegateSignature(bool Acepct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.OnBattlePhaseStart__DelegateSignature");

	ABP_BtlLaunchWorkerActor_C_OnBattlePhaseStart__DelegateSignature_Params params;
	params.Acepct = Acepct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
