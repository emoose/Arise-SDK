
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

// Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.GetRadius
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UShapeComponent*         AtkCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_HUD_SYSTEM_LIBRARY_C::STATIC_GetRadius(class UShapeComponent* AtkCollision, class UObject* __WorldContext, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.GetRadius");

	UBP_BTL_HUD_SYSTEM_LIBRARY_C_GetRadius_Params params;
	params.AtkCollision = AtkCollision;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.ConvertAbnormalTypeToHud
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EAbnormalType                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleHudAbnormalType         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBattleHudAbnormalType UBP_BTL_HUD_SYSTEM_LIBRARY_C::STATIC_ConvertAbnormalTypeToHud(EAbnormalType NewParam, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.ConvertAbnormalTypeToHud");

	UBP_BTL_HUD_SYSTEM_LIBRARY_C_ConvertAbnormalTypeToHud_Params params;
	params.NewParam = NewParam;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.Gen_DamageHudOffsetLocation
// (Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, OutParm, IsPlainOldData)

void UBP_BTL_HUD_SYSTEM_LIBRARY_C::STATIC_Gen_DamageHudOffsetLocation(class UObject* __WorldContext, struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.Gen_DamageHudOffsetLocation");

	UBP_BTL_HUD_SYSTEM_LIBRARY_C_Gen_DamageHudOffsetLocation_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.BTL_OpenPoison
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       DamageUnit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_HUD_SYSTEM_LIBRARY_C::STATIC_BTL_OpenPoison(int Number, class ABtlCharacterBase* DamageUnit, const struct FVector& Position, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.BTL_OpenPoison");

	UBP_BTL_HUD_SYSTEM_LIBRARY_C_BTL_OpenPoison_Params params;
	params.Number = Number;
	params.DamageUnit = DamageUnit;
	params.Position = Position;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.GetBattleEncountWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBP_BTL_EncountHudInterface_C> EncountWidget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_HUD_SYSTEM_LIBRARY_C::STATIC_GetBattleEncountWidget(class UObject* __WorldContext, TScriptInterface<class UBP_BTL_EncountHudInterface_C>* EncountWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.GetBattleEncountWidget");

	UBP_BTL_HUD_SYSTEM_LIBRARY_C_GetBattleEncountWidget_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EncountWidget != nullptr)
		*EncountWidget = params.EncountWidget;
}


// Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.BTL_OpenDamage
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCritical                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeak                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsResist                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCore                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_HUD_SYSTEM_LIBRARY_C::STATIC_BTL_OpenDamage(int Number, bool IsCritical, bool IsWeak, bool IsResist, bool IsCore, const struct FVector& Position, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.BTL_OpenDamage");

	UBP_BTL_HUD_SYSTEM_LIBRARY_C_BTL_OpenDamage_Params params;
	params.Number = Number;
	params.IsCritical = IsCritical;
	params.IsWeak = IsWeak;
	params.IsResist = IsResist;
	params.IsCore = IsCore;
	params.Position = Position;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.BTL_OpenDamageUI
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         AtkCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            DamageValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCritical                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeak                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsResist                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCoreBreak                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBoostBreak                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_HUD_SYSTEM_LIBRARY_C::STATIC_BTL_OpenDamageUI(class UShapeComponent* AtkCollision, class UBtlDamageSphereComponent* DmgCollision, int DamageValue, bool IsCritical, bool IsWeak, bool IsResist, bool IsCoreBreak, bool IsBoostBreak, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.BTL_OpenDamageUI");

	UBP_BTL_HUD_SYSTEM_LIBRARY_C_BTL_OpenDamageUI_Params params;
	params.AtkCollision = AtkCollision;
	params.DmgCollision = DmgCollision;
	params.DamageValue = DamageValue;
	params.IsCritical = IsCritical;
	params.IsWeak = IsWeak;
	params.IsResist = IsResist;
	params.IsCoreBreak = IsCoreBreak;
	params.IsBoostBreak = IsBoostBreak;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
