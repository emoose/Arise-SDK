
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

// Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.CanStrikeAttackDown
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GOL_000_C::CanStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel, bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.CanStrikeAttackDown");

	UBP_BUS_GOL_000_C_CanStrikeAttackDown_Params params;
	params.Attacker = Attacker;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.SetUniqueDownHpInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BUS_GOL_000_C::SetUniqueDownHpInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.SetUniqueDownHpInitialize");

	UBP_BUS_GOL_000_C_SetUniqueDownHpInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.UpdateCore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GOL_000_C::UpdateCore(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.UpdateCore");

	UBP_BUS_GOL_000_C_UpdateCore_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.SetCoreBreak
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         RecieveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BUS_GOL_000_C::SetCoreBreak(class USceneComponent* RecieveCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.SetCoreBreak");

	UBP_BUS_GOL_000_C_SetCoreBreak_Params params;
	params.RecieveCollision = RecieveCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.CoreMaterialInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BUS_GOL_000_C::CoreMaterialInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.CoreMaterialInitialize");

	UBP_BUS_GOL_000_C_CoreMaterialInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.UpdateCheckSpecialDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnitAttacker                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCoreBreak                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         RecieveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            BtlArtsData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsReactionOverride             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GOL_000_C::UpdateCheckSpecialDown(class ABtlCharacterBase* BtlUnitAttacker, bool IsCoreBreak, class USceneComponent* RecieveCollision, const struct FBtlArtsData& BtlArtsData, bool* IsReactionOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.UpdateCheckSpecialDown");

	UBP_BUS_GOL_000_C_UpdateCheckSpecialDown_Params params;
	params.BtlUnitAttacker = BtlUnitAttacker;
	params.IsCoreBreak = IsCoreBreak;
	params.RecieveCollision = RecieveCollision;
	params.BtlArtsData = BtlArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsReactionOverride != nullptr)
		*IsReactionOverride = params.IsReactionOverride;
}


// Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.OnReceiveDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReactionOverride             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         AttackerCollision              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCoreBreak                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GOL_000_C::OnReceiveDamage(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision, int Damage, bool IsCoreBreak, bool* IsReactionOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.OnReceiveDamage");

	UBP_BUS_GOL_000_C_OnReceiveDamage_Params params;
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


// Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.OnBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_BUS_GOL_000_C::OnBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.OnBeginPlay");

	UBP_BUS_GOL_000_C_OnBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GOL_000_C::OnTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.OnTick");

	UBP_BUS_GOL_000_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.OnFlexibleNotifyBegin
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            UserInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            UserColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 UserObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GOL_000_C::OnFlexibleNotifyBegin(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.OnFlexibleNotifyBegin");

	UBP_BUS_GOL_000_C_OnFlexibleNotifyBegin_Params params;
	params.UserInteger = UserInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.UserColor = UserColor;
	params.UserObject = UserObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.OnCoreReborn
// (BlueprintCallable, BlueprintEvent)

void UBP_BUS_GOL_000_C::OnCoreReborn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.OnCoreReborn");

	UBP_BUS_GOL_000_C_OnCoreReborn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.OnFlexibleNotifyEnd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            UserInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            UserColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 UserObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GOL_000_C::OnFlexibleNotifyEnd(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.OnFlexibleNotifyEnd");

	UBP_BUS_GOL_000_C_OnFlexibleNotifyEnd_Params params;
	params.UserInteger = UserInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.UserColor = UserColor;
	params.UserObject = UserObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.OnWaitDeathStrokeBegin
// (Event, Public, BlueprintEvent)

void UBP_BUS_GOL_000_C::OnWaitDeathStrokeBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.OnWaitDeathStrokeBegin");

	UBP_BUS_GOL_000_C_OnWaitDeathStrokeBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.ReceiveOnStrikeAttackDown
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GOL_000_C::ReceiveOnStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.ReceiveOnStrikeAttackDown");

	UBP_BUS_GOL_000_C_ReceiveOnStrikeAttackDown_Params params;
	params.Attacker = Attacker;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.ExecuteUbergraph_BP_BUS_GOL_000
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GOL_000_C::ExecuteUbergraph_BP_BUS_GOL_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GOL_000.BP_BUS_GOL_000_C.ExecuteUbergraph_BP_BUS_GOL_000");

	UBP_BUS_GOL_000_C_ExecuteUbergraph_BP_BUS_GOL_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
