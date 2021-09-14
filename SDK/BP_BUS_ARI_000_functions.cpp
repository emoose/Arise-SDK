
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

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnFilterComboArts
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::OnFilterComboArts(const struct FBtlArtsData& ArtsData, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnFilterComboArts");

	UBP_BUS_ARI_000_C_OnFilterComboArts_Params params;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireSwordTimeLimit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_BUS_ARI_000_C::GetFireSwordTimeLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireSwordTimeLimit");

	UBP_BUS_ARI_000_C_GetFireSwordTimeLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetHPMax
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_BUS_ARI_000_C::GetHPMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetHPMax");

	UBP_BUS_ARI_000_C_GetHPMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireSwordChargePower
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_BUS_ARI_000_C::GetFireSwordChargePower()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireSwordChargePower");

	UBP_BUS_ARI_000_C_GetFireSwordChargePower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireSwordFirstDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_BUS_ARI_000_C::GetFireSwordFirstDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireSwordFirstDamage");

	UBP_BUS_ARI_000_C_GetFireSwordFirstDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireUseHpMax
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_BUS_ARI_000_C::GetFireUseHpMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireUseHpMax");

	UBP_BUS_ARI_000_C_GetFireUseHpMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireSwordUsedHp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_BUS_ARI_000_C::GetFireSwordUsedHp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireSwordUsedHp");

	UBP_BUS_ARI_000_C_GetFireSwordUsedHp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SetFireSwordUsedHp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UsedHp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::SetFireSwordUsedHp(int UsedHp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SetFireSwordUsedHp");

	UBP_BUS_ARI_000_C_SetFireSwordUsedHp_Params params;
	params.UsedHp = UsedHp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.PlayFireSword
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   FireSwordArtsLabel             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::PlayFireSword(const struct FName& FireSwordArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.PlayFireSword");

	UBP_BUS_ARI_000_C_PlayFireSword_Params params;
	params.FireSwordArtsLabel = FireSwordArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.CanFireSword
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   FireSwordArtsLabel             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoRequest                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ArtsData                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::CanFireSword(const struct FName& FireSwordArtsLabel, bool bAutoRequest, bool* ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.CanFireSword");

	UBP_BUS_ARI_000_C_CanFireSword_Params params;
	params.FireSwordArtsLabel = FireSwordArtsLabel;
	params.bAutoRequest = bAutoRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArtsData != nullptr)
		*ArtsData = params.ArtsData;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.CanFireSwordCharge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           TryFireSword                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::CanFireSwordCharge(bool* TryFireSword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.CanFireSwordCharge");

	UBP_BUS_ARI_000_C_CanFireSwordCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TryFireSword != nullptr)
		*TryFireSword = params.TryFireSword;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.ChargeFireSword
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TryFireSword                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::ChargeFireSword(float DeltaTime, bool* TryFireSword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.ChargeFireSword");

	UBP_BUS_ARI_000_C_ChargeFireSword_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TryFireSword != nullptr)
		*TryFireSword = params.TryFireSword;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnBoostAttackTraits
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         AttackCollision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            AttackArts                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABtlCharacterBase*       ReceiveUnit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsSuccessBoostBreak           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::OnBoostAttackTraits(class UShapeComponent* AttackCollision, const struct FBtlArtsData& AttackArts, class ABtlCharacterBase* ReceiveUnit, class UBtlSphereComponent* ReceiveCollision, bool* bIsSuccessBoostBreak)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnBoostAttackTraits");

	UBP_BUS_ARI_000_C_OnBoostAttackTraits_Params params;
	params.AttackCollision = AttackCollision;
	params.AttackArts = AttackArts;
	params.ReceiveUnit = ReceiveUnit;
	params.ReceiveCollision = ReceiveCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsSuccessBoostBreak != nullptr)
		*bIsSuccessBoostBreak = params.bIsSuccessBoostBreak;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.CreateLastMysticBinding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlCutSceneBindingParam* Binding                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::CreateLastMysticBinding(class UBtlCutSceneBindingParam** Binding)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.CreateLastMysticBinding");

	UBP_BUS_ARI_000_C_CreateLastMysticBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Binding != nullptr)
		*Binding = params.Binding;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SpawnChargeRankChangedEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BUS_ARI_000_C::SpawnChargeRankChangedEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SpawnChargeRankChangedEffect");

	UBP_BUS_ARI_000_C_SpawnChargeRankChangedEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireSwordChargeRank
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::GetFireSwordChargeRank(int* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireSwordChargeRank");

	UBP_BUS_ARI_000_C_GetFireSwordChargeRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnGetBoostAttackAirSub
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::OnGetBoostAttackAirSub(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnGetBoostAttackAirSub");

	UBP_BUS_ARI_000_C_OnGetBoostAttackAirSub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnGetBoostAttackSub
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::OnGetBoostAttackSub(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnGetBoostAttackSub");

	UBP_BUS_ARI_000_C_OnGetBoostAttackSub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnGetBoostAttackAir
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::OnGetBoostAttackAir(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnGetBoostAttackAir");

	UBP_BUS_ARI_000_C_OnGetBoostAttackAir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnGetBoostAttack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::OnGetBoostAttack(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnGetBoostAttack");

	UBP_BUS_ARI_000_C_OnGetBoostAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnPlayableMystic
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MysticLabel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::OnPlayableMystic(struct FName* MysticLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnPlayableMystic");

	UBP_BUS_ARI_000_C_OnPlayableMystic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MysticLabel != nullptr)
		*MysticLabel = params.MysticLabel;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.StartFireSwordUseForStrike
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BUS_ARI_000_C::StartFireSwordUseForStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.StartFireSwordUseForStrike");

	UBP_BUS_ARI_000_C_StartFireSwordUseForStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.AssortFlexibleNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            UserColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Fresnel_ON                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::AssortFlexibleNotify(const struct FString& UserString, const struct FLinearColor& UserColor, bool Fresnel_ON)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.AssortFlexibleNotify");

	UBP_BUS_ARI_000_C_AssortFlexibleNotify_Params params;
	params.UserString = UserString;
	params.UserColor = UserColor;
	params.Fresnel_ON = Fresnel_ON;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnReceiveDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReactionOverride             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         AttackerCollision              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCoreBreak                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::OnReceiveDamage(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision, int Damage, bool IsCoreBreak, bool* IsReactionOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnReceiveDamage");

	UBP_BUS_ARI_000_C_OnReceiveDamage_Params params;
	params.Attacker = Attacker;
	params.AttackerCollision = AttackerCollision;
	params.ArtsData = ArtsData;
	params.ReceiveCollision = ReceiveCollision;
	params.Damage = Damage;
	params.IsCoreBreak = IsCoreBreak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsReactionOverride != nullptr)
		*IsReactionOverride = params.IsReactionOverride;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.ToStoringArtsNext
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BUS_ARI_000_C::ToStoringArtsNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.ToStoringArtsNext");

	UBP_BUS_ARI_000_C_ToStoringArtsNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.FadeOutProcess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFadeOutFlag                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          FadeOutEmissive                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          FadeOutAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           NotFadeAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::FadeOutProcess(bool NotFadeAlpha, bool* IsFadeOutFlag, float* FadeOutEmissive, float* FadeOutAlpha, float* DeltaTime, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.FadeOutProcess");

	UBP_BUS_ARI_000_C_FadeOutProcess_Params params;
	params.NotFadeAlpha = NotFadeAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFadeOutFlag != nullptr)
		*IsFadeOutFlag = params.IsFadeOutFlag;
	if (FadeOutEmissive != nullptr)
		*FadeOutEmissive = params.FadeOutEmissive;
	if (FadeOutAlpha != nullptr)
		*FadeOutAlpha = params.FadeOutAlpha;
	if (DeltaTime != nullptr)
		*DeltaTime = params.DeltaTime;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.StartFireLeftArm
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BUS_ARI_000_C::StartFireLeftArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.StartFireLeftArm");

	UBP_BUS_ARI_000_C_StartFireLeftArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.StartFireRightArm
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BUS_ARI_000_C::StartFireRightArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.StartFireRightArm");

	UBP_BUS_ARI_000_C_StartFireRightArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SetMatParamBody
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Emissive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::SetMatParamBody(float Alpha, float Emissive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SetMatParamBody");

	UBP_BUS_ARI_000_C_SetMatParamBody_Params params;
	params.Alpha = Alpha;
	params.Emissive = Emissive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SetMatParamWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Emissive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::SetMatParamWeapon(float Alpha, float Emissive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SetMatParamWeapon");

	UBP_BUS_ARI_000_C_SetMatParamWeapon_Params params;
	params.Alpha = Alpha;
	params.Emissive = Emissive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SetMatParamLeftArm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Emissive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::SetMatParamLeftArm(float Alpha, float Emissive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SetMatParamLeftArm");

	UBP_BUS_ARI_000_C_SetMatParamLeftArm_Params params;
	params.Alpha = Alpha;
	params.Emissive = Emissive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SetMatParamRightArm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Emissive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::SetMatParamRightArm(float Alpha, float Emissive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SetMatParamRightArm");

	UBP_BUS_ARI_000_C_SetMatParamRightArm_Params params;
	params.Alpha = Alpha;
	params.Emissive = Emissive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.TickFireSword
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::TickFireSword(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.TickFireSword");

	UBP_BUS_ARI_000_C_TickFireSword_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.StartFireSwordUse
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BUS_ARI_000_C::StartFireSwordUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.StartFireSwordUse");

	UBP_BUS_ARI_000_C_StartFireSwordUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::OnTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnTick");

	UBP_BUS_ARI_000_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnFlexibleNotifyEnd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            UserInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            UserColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 UserObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::OnFlexibleNotifyEnd(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnFlexibleNotifyEnd");

	UBP_BUS_ARI_000_C_OnFlexibleNotifyEnd_Params params;
	params.UserInteger = UserInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.UserColor = UserColor;
	params.UserObject = UserObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnFlexibleNotifyBegin
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            UserInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            UserColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 UserObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::OnFlexibleNotifyBegin(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnFlexibleNotifyBegin");

	UBP_BUS_ARI_000_C_OnFlexibleNotifyBegin_Params params;
	params.UserInteger = UserInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.UserColor = UserColor;
	params.UserObject = UserObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_BUS_ARI_000_C::OnBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnBeginPlay");

	UBP_BUS_ARI_000_C_OnBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.AttackBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            NowArts                        (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleActionState             PreState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::AttackBegin(class ABtlCharacterBase* SelfCharacter, const struct FBtlArtsData& NowArts, EBattleActionState PreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.AttackBegin");

	UBP_BUS_ARI_000_C_AttackBegin_Params params;
	params.SelfCharacter = SelfCharacter;
	params.NowArts = NowArts;
	params.PreState = PreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnFireSwordCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::OnFireSwordCharge(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnFireSwordCharge");

	UBP_BUS_ARI_000_C_OnFireSwordCharge_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnEndFireSwordChange
// (BlueprintCallable, BlueprintEvent)

void UBP_BUS_ARI_000_C::OnEndFireSwordChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnEndFireSwordChange");

	UBP_BUS_ARI_000_C_OnEndFireSwordChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnBeginCancelRange
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActionCancelParam      CancelParam                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_BUS_ARI_000_C::OnBeginCancelRange(const struct FActionCancelParam& CancelParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnBeginCancelRange");

	UBP_BUS_ARI_000_C_OnBeginCancelRange_Params params;
	params.CancelParam = CancelParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnEndMystic
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FBtlMysticEndParam      Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BUS_ARI_000_C::OnEndMystic(const struct FBtlMysticEndParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnEndMystic");

	UBP_BUS_ARI_000_C_OnEndMystic_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnGiveDamage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UShapeComponent*         AttackCollision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            AttackArts                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABtlCharacterBase*       ReceiveUnit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::OnGiveDamage(class UShapeComponent* AttackCollision, const struct FBtlArtsData& AttackArts, class ABtlCharacterBase* ReceiveUnit, class UBtlSphereComponent* ReceiveCollision, int Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnGiveDamage");

	UBP_BUS_ARI_000_C_OnGiveDamage_Params params;
	params.AttackCollision = AttackCollision;
	params.AttackArts = AttackArts;
	params.ReceiveUnit = ReceiveUnit;
	params.ReceiveCollision = ReceiveCollision;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.ExecuteUbergraph_BP_BUS_ARI_000
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARI_000_C::ExecuteUbergraph_BP_BUS_ARI_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.ExecuteUbergraph_BP_BUS_ARI_000");

	UBP_BUS_ARI_000_C_ExecuteUbergraph_BP_BUS_ARI_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
