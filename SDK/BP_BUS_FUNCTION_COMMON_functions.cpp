
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

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.PlayUnitBoostBreakText
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_PlayUnitBoostBreakText(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.PlayUnitBoostBreakText");

	UBP_BUS_FUNCTION_COMMON_C_PlayUnitBoostBreakText_Params params;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.IsEnemyLive
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnemyLive                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_IsEnemyLive(class UObject* __WorldContext, bool* EnemyLive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.IsEnemyLive");

	UBP_BUS_FUNCTION_COMMON_C_IsEnemyLive_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnemyLive != nullptr)
		*EnemyLive = params.EnemyLive;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.CallOnSpecialDown
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_CallOnSpecialDown(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.CallOnSpecialDown");

	UBP_BUS_FUNCTION_COMMON_C_CallOnSpecialDown_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraReset
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Ofset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlCameraReset(float Range, float Ofset, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraReset");

	UBP_BUS_FUNCTION_COMMON_C_BtlCameraReset_Params params;
	params.Range = Range;
	params.Ofset = Ofset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraSetNoLerp
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlCameraSetNoLerp(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraSetNoLerp");

	UBP_BUS_FUNCTION_COMMON_C_BtlCameraSetNoLerp_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.IsEnemyMysticBootEnable
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_IsEnemyMysticBootEnable(class UObject* __WorldContext, bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.IsEnemyMysticBootEnable");

	UBP_BUS_FUNCTION_COMMON_C_IsEnemyMysticBootEnable_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitIsHpRateRange
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitIsHpRateRange(class ABtlCharacterBase* BtlUnit, float Min, float Max, class UObject* __WorldContext, bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitIsHpRateRange");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitIsHpRateRange_Params params;
	params.BtlUnit = BtlUnit;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetFixLocation
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetFixLocation(class ABtlCharacterBase* Unit, const struct FVector& Location, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetFixLocation");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetFixLocation_Params params;
	params.Unit = Unit;
	params.Location = Location;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.IsMomentaryRushDamage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       AttackerUnit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       RecieverUnit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           RushBreak                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHit                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsDamage                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_IsMomentaryRushDamage(class ABtlCharacterBase* AttackerUnit, class ABtlCharacterBase* RecieverUnit, const struct FBtlArtsData& ArtsData, bool RushBreak, class UObject* __WorldContext, bool* IsHit, bool* IsDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.IsMomentaryRushDamage");

	UBP_BUS_FUNCTION_COMMON_C_IsMomentaryRushDamage_Params params;
	params.AttackerUnit = AttackerUnit;
	params.RecieverUnit = RecieverUnit;
	params.ArtsData = ArtsData;
	params.RushBreak = RushBreak;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsHit != nullptr)
		*IsHit = params.IsHit;
	if (IsDamage != nullptr)
		*IsDamage = params.IsDamage;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDeathEnemies
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitDeathEnemies(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDeathEnemies");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitDeathEnemies_Params params;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitCoreReborn
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CoreHP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CollisionName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitCoreReborn(class ABtlCharacterBase* BtlUnit, int CoreHP, const struct FName& CollisionName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitCoreReborn");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitCoreReborn_Params params;
	params.BtlUnit = BtlUnit;
	params.CoreHP = CoreHP;
	params.CollisionName = CollisionName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetCoreMaterialOn
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           MaterialNames                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          GlowScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmissivePower                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            EmissiveColor                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            GlowColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetCoreMaterialOn(class ABtlCharacterBase* BtlUnit, float GlowScale, float EmissivePower, const struct FLinearColor& EmissiveColor, const struct FLinearColor& GlowColor, class UObject* __WorldContext, TArray<struct FName>* MaterialNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetCoreMaterialOn");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetCoreMaterialOn_Params params;
	params.BtlUnit = BtlUnit;
	params.GlowScale = GlowScale;
	params.EmissivePower = EmissivePower;
	params.EmissiveColor = EmissiveColor;
	params.GlowColor = GlowColor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialNames != nullptr)
		*MaterialNames = params.MaterialNames;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetReviveAll
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ARI                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SIO                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NNA                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ZGU                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MNK                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           YRA                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetReviveAll(bool ARI, bool SIO, bool NNA, bool ZGU, bool MNK, bool YRA, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetReviveAll");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetReviveAll_Params params;
	params.ARI = ARI;
	params.SIO = SIO;
	params.NNA = NNA;
	params.ZGU = ZGU;
	params.MNK = MNK;
	params.YRA = YRA;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetStrikeGageMax
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ARI                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SIO                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NNA                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ZGU                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MNK                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           YRA                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetStrikeGageMax(bool ARI, bool SIO, bool NNA, bool ZGU, bool MNK, bool YRA, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetStrikeGageMax");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetStrikeGageMax_Params params;
	params.ARI = ARI;
	params.SIO = SIO;
	params.NNA = NNA;
	params.ZGU = ZGU;
	params.MNK = MNK;
	params.YRA = YRA;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlSetupEnemyMystic
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlSetupEnemyMystic(bool Enable, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlSetupEnemyMystic");

	UBP_BUS_FUNCTION_COMMON_C_BtlSetupEnemyMystic_Params params;
	params.Enable = Enable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayBreakEffect
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EffefctOfset                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           CursorPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         AttackerColision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBtlSphereComponent*     RecieveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitPlayBreakEffect(class ABtlCharacterBase* BtlUnit, const struct FVector& EffefctOfset, bool CursorPosition, float Range, class UShapeComponent* AttackerColision, class UBtlSphereComponent* RecieveCollision, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayBreakEffect");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayBreakEffect_Params params;
	params.BtlUnit = BtlUnit;
	params.EffefctOfset = EffefctOfset;
	params.CursorPosition = CursorPosition;
	params.Range = Range;
	params.AttackerColision = AttackerColision;
	params.RecieveCollision = RecieveCollision;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlResetTransformParty
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TArray<struct FVector>         Location                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlResetTransformParty(const struct FRotator& Rotation, class UObject* __WorldContext, TArray<struct FVector>* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlResetTransformParty");

	UBP_BUS_FUNCTION_COMMON_C_BtlResetTransformParty_Params params;
	params.Rotation = Rotation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlResetTransformEnemy
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TArray<struct FVector>         Location                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlResetTransformEnemy(const struct FRotator& Rotation, class UObject* __WorldContext, TArray<struct FVector>* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlResetTransformEnemy");

	UBP_BUS_FUNCTION_COMMON_C_BtlResetTransformEnemy_Params params;
	params.Rotation = Rotation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlResetTransformBattleLocation
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerDisable                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlResetTransformBattleLocation(bool PlayerDisable, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlResetTransformBattleLocation");

	UBP_BUS_FUNCTION_COMMON_C_BtlResetTransformBattleLocation_Params params;
	params.PlayerDisable = PlayerDisable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayArtsById
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArts_XmlDatatableLabel Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitPlayArtsById(class ABtlCharacterBase* BtlUnit, const struct FBtlArts_XmlDatatableLabel& Label, bool Force, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayArtsById");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayArtsById_Params params;
	params.BtlUnit = BtlUnit;
	params.Label = Label;
	params.Force = Force;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetRevive
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetRevive(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetRevive");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetRevive_Params params;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitOnFlexibleNotifyEndBoss
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UsetInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FBtlCoreMaterial        CoreMaterial0                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FBtlCoreMaterial        CoreMaterial1                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitOnFlexibleNotifyEndBoss(int UsetInteger, float UserFloat, const struct FString& UserString, class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial0, struct FBtlCoreMaterial* CoreMaterial1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitOnFlexibleNotifyEndBoss");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitOnFlexibleNotifyEndBoss_Params params;
	params.UsetInteger = UsetInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CoreMaterial0 != nullptr)
		*CoreMaterial0 = params.CoreMaterial0;
	if (CoreMaterial1 != nullptr)
		*CoreMaterial1 = params.CoreMaterial1;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitResetPartyTarget
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlUnitID              BtlUnitID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitResetPartyTarget(const struct FBtlUnitID& BtlUnitID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitResetPartyTarget");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitResetPartyTarget_Params params;
	params.BtlUnitID = BtlUnitID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitResetActionStateIdle
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitResetActionStateIdle(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitResetActionStateIdle");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitResetActionStateIdle_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetSpecialStrikeUI
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSlow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBlur                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUI                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TransformName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArisePartyID                  CharaID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetSpecialStrikeUI(class ABtlCharacterBase* BtlUnit, float Time, bool IsSlow, bool IsBlur, bool IsUI, const struct FName& TransformName, EArisePartyID CharaID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetSpecialStrikeUI");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetSpecialStrikeUI_Params params;
	params.BtlUnit = BtlUnit;
	params.Time = Time;
	params.IsSlow = IsSlow;
	params.IsBlur = IsBlur;
	params.IsUI = IsUI;
	params.TransformName = TransformName;
	params.CharaID = CharaID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitStopAIParty
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Stop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitStopAIParty(bool Stop, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitStopAIParty");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitStopAIParty_Params params;
	params.Stop = Stop;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayStrikeDownEffect
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitPlayStrikeDownEffect(class ABtlCharacterBase* BtlUnit, const struct FVector& Location, int Num, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayStrikeDownEffect");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayStrikeDownEffect_Params params;
	params.BtlUnit = BtlUnit;
	params.Location = Location;
	params.Num = Num;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayDeadEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           RecoveryTransform              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitPlayDeadEvent(class ABtlCharacterBase* BtlUnit, class ULevelSequence* LevelSequence, bool Force, const struct FTransform& Transform, bool RecoveryTransform, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayDeadEvent");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayDeadEvent_Params params;
	params.BtlUnit = BtlUnit;
	params.LevelSequence = LevelSequence;
	params.Force = Force;
	params.Transform = Transform;
	params.RecoveryTransform = RecoveryTransform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitOnFlexibleNotifyBeginBoss
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UsetInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FBtlCoreMaterial        CoreMaterial0                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FBtlCoreMaterial        CoreMaterial1                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitOnFlexibleNotifyBeginBoss(int UsetInteger, float UserFloat, const struct FString& UserString, class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial0, struct FBtlCoreMaterial* CoreMaterial1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitOnFlexibleNotifyBeginBoss");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitOnFlexibleNotifyBeginBoss_Params params;
	params.UsetInteger = UsetInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CoreMaterial0 != nullptr)
		*CoreMaterial0 = params.CoreMaterial0;
	if (CoreMaterial1 != nullptr)
		*CoreMaterial1 = params.CoreMaterial1;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetSlowWorld
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetSlowWorld(float Time, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetSlowWorld");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetSlowWorld_Params params;
	params.Time = Time;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayCoreBreakEffect
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           CursorPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitPlayCoreBreakEffect(class ABtlCharacterBase* BtlUnit, const struct FVector& Location, bool CursorPosition, float Range, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayCoreBreakEffect");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayCoreBreakEffect_Params params;
	params.BtlUnit = BtlUnit;
	params.Location = Location;
	params.CursorPosition = CursorPosition;
	params.Range = Range;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitGetHpPercentValue
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitGetHpPercentValue(class ABtlCharacterBase* BtlUnit, int Percent, class UObject* __WorldContext, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitGetHpPercentValue");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitGetHpPercentValue_Params params;
	params.BtlUnit = BtlUnit;
	params.Percent = Percent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitIsSpecialDown
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AirDownDisable                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Boss                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ChantForce                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DownEnable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitIsSpecialDown(class ABtlCharacterBase* BtlUnit, bool AirDownDisable, bool Boss, bool ChantForce, class UObject* __WorldContext, bool* DownEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitIsSpecialDown");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitIsSpecialDown_Params params;
	params.BtlUnit = BtlUnit;
	params.AirDownDisable = AirDownDisable;
	params.Boss = Boss;
	params.ChantForce = ChantForce;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DownEnable != nullptr)
		*DownEnable = params.DownEnable;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayPhaseChangeEffect
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EffefctOfset                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           CursorPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitPlayPhaseChangeEffect(class ABtlCharacterBase* BtlUnit, const struct FVector& EffefctOfset, bool CursorPosition, float Range, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayPhaseChangeEffect");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayPhaseChangeEffect_Params params;
	params.BtlUnit = BtlUnit;
	params.EffefctOfset = EffefctOfset;
	params.CursorPosition = CursorPosition;
	params.Range = Range;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitGetHpValue
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitGetHpValue(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitGetHpValue");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitGetHpValue_Params params;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetHpValue
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HPValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetHpValue(class ABtlCharacterBase* BtlUnit, int HPValue, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetHpValue");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetHpValue_Params params;
	params.BtlUnit = BtlUnit;
	params.HPValue = HPValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitIsBlackBoardSignal
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SignalName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSignal                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitIsBlackBoardSignal(class ABtlCharacterBase* BtlUnit, const struct FName& SignalName, class UObject* __WorldContext, bool* IsSignal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitIsBlackBoardSignal");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitIsBlackBoardSignal_Params params;
	params.BtlUnit = BtlUnit;
	params.SignalName = SignalName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSignal != nullptr)
		*IsSignal = params.IsSignal;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraAimOffsetOverride
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OverrideAimOffset              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AimOffset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Interpolate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlCameraAimOffsetOverride(bool OverrideAimOffset, float AimOffset, float Interpolate, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraAimOffsetOverride");

	UBP_BUS_FUNCTION_COMMON_C_BtlCameraAimOffsetOverride_Params params;
	params.OverrideAimOffset = OverrideAimOffset;
	params.AimOffset = AimOffset;
	params.Interpolate = Interpolate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayArtsForce
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CrossFade                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FallCheck                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitPlayArtsForce(class ABtlCharacterBase* BtlUnit, const struct FName& ArtsName, bool CrossFade, bool FallCheck, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayArtsForce");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayArtsForce_Params params;
	params.BtlUnit = BtlUnit;
	params.ArtsName = ArtsName;
	params.CrossFade = CrossFade;
	params.FallCheck = FallCheck;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayEndArts
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitPlayEndArts(class ABtlCharacterBase* BtlUnit, const struct FName& ArtsName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayEndArts");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayEndArts_Params params;
	params.BtlUnit = BtlUnit;
	params.ArtsName = ArtsName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlSetTargetPlayer(UnitID)
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlUnitID              TargetEnemy                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           CameraReset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlSetTargetPlayer_UnitID_(const struct FBtlUnitID& TargetEnemy, bool CameraReset, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlSetTargetPlayer(UnitID)");

	UBP_BUS_FUNCTION_COMMON_C_BtlSetTargetPlayer_UnitID__Params params;
	params.TargetEnemy = TargetEnemy;
	params.CameraReset = CameraReset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraDistanceOverride
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OverrideDistance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Interpolate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlCameraDistanceOverride(bool OverrideDistance, float Distance, float Interpolate, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraDistanceOverride");

	UBP_BUS_FUNCTION_COMMON_C_BtlCameraDistanceOverride_Params params;
	params.OverrideDistance = OverrideDistance;
	params.Distance = Distance;
	params.Interpolate = Interpolate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlStrikeDownCountUp
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlStrikeDownCountUp(class ABtlCharacterBase* Attacker, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlStrikeDownCountUp");

	UBP_BUS_FUNCTION_COMMON_C_BtlStrikeDownCountUp_Params params;
	params.Attacker = Attacker;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraAngleOverride
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OverridePitch                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OverrideYaw                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Interpolate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlCameraAngleOverride(bool OverridePitch, float Pitch, bool OverrideYaw, float Yaw, float Interpolate, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraAngleOverride");

	UBP_BUS_FUNCTION_COMMON_C_BtlCameraAngleOverride_Params params;
	params.OverridePitch = OverridePitch;
	params.Pitch = Pitch;
	params.OverrideYaw = OverrideYaw;
	params.Yaw = Yaw;
	params.Interpolate = Interpolate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayEnemyMystic
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*          LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   ArtsName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlHudVisible_DatatableLabel HUDPreset                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           RecoveryTransform              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayMysticSE                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ScreenCaptureDisable           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitPlayEnemyMystic(class ULevelSequence* LevelSequence, class ABtlCharacterBase* BtlUnit, const struct FTransform& Transform, const struct FName& ArtsName, const struct FName& Key, const struct FBtlHudVisible_DatatableLabel& HUDPreset, bool RecoveryTransform, bool PlayMysticSE, bool ScreenCaptureDisable, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayEnemyMystic");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayEnemyMystic_Params params;
	params.LevelSequence = LevelSequence;
	params.BtlUnit = BtlUnit;
	params.Transform = Transform;
	params.ArtsName = ArtsName;
	params.Key = Key;
	params.HUDPreset = HUDPreset;
	params.RecoveryTransform = RecoveryTransform;
	params.PlayMysticSE = PlayMysticSE;
	params.ScreenCaptureDisable = ScreenCaptureDisable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraAngleReset
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlCameraAngleReset(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraAngleReset");

	UBP_BUS_FUNCTION_COMMON_C_BtlCameraAngleReset_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraAngleOffset
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OffsetPitch                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OffsetYaw                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Interpolate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlCameraAngleOffset(float OffsetPitch, float OffsetYaw, float Interpolate, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraAngleOffset");

	UBP_BUS_FUNCTION_COMMON_C_BtlCameraAngleOffset_Params params;
	params.OffsetPitch = OffsetPitch;
	params.OffsetYaw = OffsetYaw;
	params.Interpolate = Interpolate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlGetUnitForBtlID(UnitID)
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlUnitID              BtlIUnitID                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           AliveOnly                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TargetableOnly                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       BtlUnit                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Find                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlGetUnitForBtlID_UnitID_(const struct FBtlUnitID& BtlIUnitID, bool AliveOnly, bool TargetableOnly, class UObject* __WorldContext, class ABtlCharacterBase** BtlUnit, bool* Find)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlGetUnitForBtlID(UnitID)");

	UBP_BUS_FUNCTION_COMMON_C_BtlGetUnitForBtlID_UnitID__Params params;
	params.BtlIUnitID = BtlIUnitID;
	params.AliveOnly = AliveOnly;
	params.TargetableOnly = TargetableOnly;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BtlUnit != nullptr)
		*BtlUnit = params.BtlUnit;
	if (Find != nullptr)
		*Find = params.Find;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDeath
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitDeath(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDeath");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitDeath_Params params;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDeleteBlackBoardSignal
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SignalName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitDeleteBlackBoardSignal(class ABtlCharacterBase* BtlUnit, const struct FName& SignalName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDeleteBlackBoardSignal");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitDeleteBlackBoardSignal_Params params;
	params.BtlUnit = BtlUnit;
	params.SignalName = SignalName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.IsBtlUnitBtlID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlUnitID              BtlID                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Find                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_IsBtlUnitBtlID(class ABtlCharacterBase* BtlUnit, const struct FBtlUnitID& BtlID, class UObject* __WorldContext, bool* Find)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.IsBtlUnitBtlID");

	UBP_BUS_FUNCTION_COMMON_C_IsBtlUnitBtlID_Params params;
	params.BtlUnit = BtlUnit;
	params.BtlID = BtlID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Find != nullptr)
		*Find = params.Find;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitGetHpRate
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitGetHpRate(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitGetHpRate");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitGetHpRate_Params params;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rate != nullptr)
		*Rate = params.Rate;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitStopAI
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Stop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitStopAI(class ABtlCharacterBase* BtlUnit, bool Stop, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitStopAI");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitStopAI_Params params;
	params.BtlUnit = BtlUnit;
	params.Stop = Stop;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayEvent
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*          LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlHudVisible_DatatableLabel HUDPreset                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           RecoveryTransform              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitPlayEvent(class ULevelSequence* LevelSequence, class ABtlCharacterBase* BtlUnit, const struct FTransform& Transform, const struct FName& Key, const struct FBtlHudVisible_DatatableLabel& HUDPreset, bool RecoveryTransform, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayEvent");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayEvent_Params params;
	params.LevelSequence = LevelSequence;
	params.BtlUnit = BtlUnit;
	params.Transform = Transform;
	params.Key = Key;
	params.HUDPreset = HUDPreset;
	params.RecoveryTransform = RecoveryTransform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetParticleActivate
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParticleName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetParticleActivate(class ABtlCharacterBase* BtlUnit, const struct FName& ParticleName, bool Activate, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetParticleActivate");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetParticleActivate_Params params;
	params.BtlUnit = BtlUnit;
	params.ParticleName = ParticleName;
	params.Activate = Activate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetCoreMaterialOff
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           MaterialNames                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          ParamValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetCoreMaterialOff(class ABtlCharacterBase* BtlUnit, float ParamValue, class UObject* __WorldContext, TArray<struct FName>* MaterialNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetCoreMaterialOff");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetCoreMaterialOff_Params params;
	params.BtlUnit = BtlUnit;
	params.ParamValue = ParamValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialNames != nullptr)
		*MaterialNames = params.MaterialNames;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetMaterialVector
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MaterialName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParamName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ParamValue                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetMaterialVector(class ABtlCharacterBase* BtlUnit, const struct FName& MaterialName, const struct FName& ParamName, const struct FLinearColor& ParamValue, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetMaterialVector");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetMaterialVector_Params params;
	params.BtlUnit = BtlUnit;
	params.MaterialName = MaterialName;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUniqueButtonIsJustPressed
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUniqueButtonIsJustPressed(class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUniqueButtonIsJustPressed");

	UBP_BUS_FUNCTION_COMMON_C_BtlUniqueButtonIsJustPressed_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUniqueButtonIsPressed
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUniqueButtonIsPressed(class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUniqueButtonIsPressed");

	UBP_BUS_FUNCTION_COMMON_C_BtlUniqueButtonIsPressed_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitBreakParts
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 HidePartsName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 VisiblePartsName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitBreakParts(class ABtlCharacterBase* BtlUnit, const struct FString& HidePartsName, const struct FString& VisiblePartsName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitBreakParts");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitBreakParts_Params params;
	params.BtlUnit = BtlUnit;
	params.HidePartsName = HidePartsName;
	params.VisiblePartsName = VisiblePartsName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayArts
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitPlayArts(class ABtlCharacterBase* BtlUnit, const struct FName& Label, bool Force, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayArts");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayArts_Params params;
	params.BtlUnit = BtlUnit;
	params.Label = Label;
	params.Force = Force;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitUpdateUniqueDownHp
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlUnitScript*          BtlUnitScript                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HP                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            HPPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsReactionOverride             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitUpdateUniqueDownHp(class ABtlCharacterBase* Attacker, class UBtlUnitScript* BtlUnitScript, int HPPercent, const struct FName& ArtsName, class UObject* __WorldContext, int* HP, bool* IsReactionOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitUpdateUniqueDownHp");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitUpdateUniqueDownHp_Params params;
	params.Attacker = Attacker;
	params.BtlUnitScript = BtlUnitScript;
	params.HPPercent = HPPercent;
	params.ArtsName = ArtsName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HP != nullptr)
		*HP = params.HP;
	if (IsReactionOverride != nullptr)
		*IsReactionOverride = params.IsReactionOverride;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetCollision
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DamageEnable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CollisionEnable                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CollisionName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           CollisionSetup                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetCollision(class ABtlCharacterBase* BtlUnit, bool DamageEnable, bool CollisionEnable, const struct FString& CollisionName, bool CollisionSetup, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetCollision");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetCollision_Params params;
	params.BtlUnit = BtlUnit;
	params.DamageEnable = DamageEnable;
	params.CollisionEnable = CollisionEnable;
	params.CollisionName = CollisionName;
	params.CollisionSetup = CollisionSetup;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitIsState
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleActionState             State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsState                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitIsState(class ABtlCharacterBase* BtlUnit, EBattleActionState State, class UObject* __WorldContext, bool* IsState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitIsState");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitIsState_Params params;
	params.BtlUnit = BtlUnit;
	params.State = State;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsState != nullptr)
		*IsState = params.IsState;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitCheckUniqueDownHp
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HPPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUniqueDown                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NextUniqueDownHp               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitCheckUniqueDownHp(class ABtlCharacterBase* BtlUnit, int HP, int HPPercent, class UObject* __WorldContext, bool* IsUniqueDown, int* NextUniqueDownHp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitCheckUniqueDownHp");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitCheckUniqueDownHp_Params params;
	params.BtlUnit = BtlUnit;
	params.HP = HP;
	params.HPPercent = HPPercent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUniqueDown != nullptr)
		*IsUniqueDown = params.IsUniqueDown;
	if (NextUniqueDownHp != nullptr)
		*NextUniqueDownHp = params.NextUniqueDownHp;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetUniqueDownHpInitialize
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HPPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HP                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NextUniqueDownHp               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetUniqueDownHpInitialize(class ABtlCharacterBase* BtlUnit, int HPPercent, class UObject* __WorldContext, int* HP, int* NextUniqueDownHp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetUniqueDownHpInitialize");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetUniqueDownHpInitialize_Params params;
	params.BtlUnit = BtlUnit;
	params.HPPercent = HPPercent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HP != nullptr)
		*HP = params.HP;
	if (NextUniqueDownHp != nullptr)
		*NextUniqueDownHp = params.NextUniqueDownHp;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitGetMaterialDynamics
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Material                       (Parm, OutParm, ZeroConstructor)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitGetMaterialDynamics(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, TArray<class UMaterialInstanceDynamic*>* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitGetMaterialDynamics");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitGetMaterialDynamics_Params params;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDebugPrintMaterialName
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitDebugPrintMaterialName(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDebugPrintMaterialName");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitDebugPrintMaterialName_Params params;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetMaterialParam
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MaterialName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParamName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ParamValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetMaterialParam(class ABtlCharacterBase* BtlUnit, const struct FName& MaterialName, const struct FName& ParamName, float ParamValue, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetMaterialParam");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetMaterialParam_Params params;
	params.BtlUnit = BtlUnit;
	params.MaterialName = MaterialName;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetMaterialParamAll
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParamName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ParamValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAchCharacterBuildComponent> InComponentType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetMaterialParamAll(class ABtlCharacterBase* BtlUnit, const struct FName& ParamName, float ParamValue, TEnumAsByte<EAchCharacterBuildComponent> InComponentType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetMaterialParamAll");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetMaterialParamAll_Params params;
	params.BtlUnit = BtlUnit;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;
	params.InComponentType = InComponentType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlArtsButtonIsPressed
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlArtsButtonIsPressed(class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlArtsButtonIsPressed");

	UBP_BUS_FUNCTION_COMMON_C_BtlArtsButtonIsPressed_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetHpPercent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HPPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetHpPercent(class ABtlCharacterBase* BtlUnit, int HPPercent, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetHpPercent");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetHpPercent_Params params;
	params.BtlUnit = BtlUnit;
	params.HPPercent = HPPercent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetVisiblePartsList
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Nemes                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Visble                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAchCharacterBuildComponent> NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetVisiblePartsList(class ABtlCharacterBase* BtlUnit, bool Visble, TEnumAsByte<EAchCharacterBuildComponent> NewParam, class UObject* __WorldContext, TArray<struct FName>* Nemes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetVisiblePartsList");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetVisiblePartsList_Params params;
	params.BtlUnit = BtlUnit;
	params.Visble = Visble;
	params.NewParam = NewParam;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Nemes != nullptr)
		*Nemes = params.Nemes;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlGetUnitForBtlID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   BtlIUnitID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AliveOnly                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TargetableOnly                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       BtlUnit                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Find                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlGetUnitForBtlID(const struct FName& BtlIUnitID, bool AliveOnly, bool TargetableOnly, class UObject* __WorldContext, class ABtlCharacterBase** BtlUnit, bool* Find)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlGetUnitForBtlID");

	UBP_BUS_FUNCTION_COMMON_C_BtlGetUnitForBtlID_Params params;
	params.BtlIUnitID = BtlIUnitID;
	params.AliveOnly = AliveOnly;
	params.TargetableOnly = TargetableOnly;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BtlUnit != nullptr)
		*BtlUnit = params.BtlUnit;
	if (Find != nullptr)
		*Find = params.Find;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitGetSocketLocation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitGetSocketLocation(class ABtlCharacterBase* BtlUnit, const struct FName& SocketName, class UObject* __WorldContext, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitGetSocketLocation");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitGetSocketLocation_Params params;
	params.BtlUnit = BtlUnit;
	params.SocketName = SocketName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetBlackBoardSignal
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SignalName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetBlackBoardSignal(class ABtlCharacterBase* BtlUnit, const struct FName& SignalName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetBlackBoardSignal");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetBlackBoardSignal_Params params;
	params.BtlUnit = BtlUnit;
	params.SignalName = SignalName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetDown
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlUnitScript*          BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DownSec                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFoward                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetDown(class UBtlUnitScript* BtlUnit, float DownSec, bool IsFoward, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetDown");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetDown_Params params;
	params.BtlUnit = BtlUnit;
	params.DownSec = DownSec;
	params.IsFoward = IsFoward;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetVisibleMesh
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MeshName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetVisibleMesh(class ABtlCharacterBase* BtlUnit, const struct FString& MeshName, bool Visible, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetVisibleMesh");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetVisibleMesh_Params params;
	params.BtlUnit = BtlUnit;
	params.MeshName = MeshName;
	params.Visible = Visible;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDebugPrintMeshName
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitDebugPrintMeshName(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDebugPrintMeshName");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitDebugPrintMeshName_Params params;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDebugPrintPartsName
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitDebugPrintPartsName(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDebugPrintPartsName");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitDebugPrintPartsName_Params params;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetVisibleParts
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PartsName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAchCharacterBuildComponent> Component_Type                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetVisibleParts(class ABtlCharacterBase* BtlUnit, const struct FName& PartsName, bool Visible, TEnumAsByte<EAchCharacterBuildComponent> Component_Type, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetVisibleParts");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetVisibleParts_Params params;
	params.BtlUnit = BtlUnit;
	params.PartsName = PartsName;
	params.Visible = Visible;
	params.Component_Type = Component_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetSpecialDown
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSpecialDown                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetSpecialDown(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* BtlUnit, bool IsSpecialDown, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetSpecialDown");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetSpecialDown_Params params;
	params.Attacker = Attacker;
	params.BtlUnit = BtlUnit;
	params.IsSpecialDown = IsSpecialDown;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetRotationTarget
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       UnitTarget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlUnitSetRotationTarget(class ABtlCharacterBase* Unit, class ABtlCharacterBase* UnitTarget, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetRotationTarget");

	UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetRotationTarget_Params params;
	params.Unit = Unit;
	params.UnitTarget = UnitTarget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlArtsIsStrikeAttack
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlArtsData            BtlArtsData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsStrikeAttack                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlArtsIsStrikeAttack(const struct FBtlArtsData& BtlArtsData, class UObject* __WorldContext, bool* IsStrikeAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlArtsIsStrikeAttack");

	UBP_BUS_FUNCTION_COMMON_C_BtlArtsIsStrikeAttack_Params params;
	params.BtlArtsData = BtlArtsData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsStrikeAttack != nullptr)
		*IsStrikeAttack = params.IsStrikeAttack;
}


// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlArtsIsFlashRaid
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlArtsData            BtlArtsData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFlashRaid                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_COMMON_C::STATIC_BtlArtsIsFlashRaid(const struct FBtlArtsData& BtlArtsData, class UObject* __WorldContext, bool* IsFlashRaid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlArtsIsFlashRaid");

	UBP_BUS_FUNCTION_COMMON_C_BtlArtsIsFlashRaid_Params params;
	params.BtlArtsData = BtlArtsData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFlashRaid != nullptr)
		*IsFlashRaid = params.IsFlashRaid;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
