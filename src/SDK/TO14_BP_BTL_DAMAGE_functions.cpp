
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

// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.IsUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BP_BTL_DAMAGE_C::IsUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.IsUse");

	UTO14_BP_BTL_DAMAGE_C_IsUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.SetIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo          CategoryColor                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_BTL_DAMAGE_C::SetIcon(const struct FSlateFontInfo& CategoryColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.SetIcon");

	UTO14_BP_BTL_DAMAGE_C_SetIcon_Params params;
	params.CategoryColor = CategoryColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.SetNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnemy                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCritical                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeak                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsResist                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCore                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCoreBreak                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBoostBreak                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHeal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPoison                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_C::SetNumber(int Number, bool IsEnemy, bool IsCritical, bool IsWeak, bool IsResist, bool IsCore, bool IsCoreBreak, bool IsBoostBreak, bool IsHeal, bool IsPoison, const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.SetNumber");

	UTO14_BP_BTL_DAMAGE_C_SetNumber_Params params;
	params.Number = Number;
	params.IsEnemy = IsEnemy;
	params.IsCritical = IsCritical;
	params.IsWeak = IsWeak;
	params.IsResist = IsResist;
	params.IsCore = IsCore;
	params.IsCoreBreak = IsCoreBreak;
	params.IsBoostBreak = IsBoostBreak;
	params.IsHeal = IsHeal;
	params.IsPoison = IsPoison;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OpenDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnemy                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCritical                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeak                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsResist                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCore                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCoreBreak                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBoostBreak                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_C::OpenDamage(int Number, bool IsEnemy, bool IsCritical, bool IsWeak, bool IsResist, bool IsCore, bool IsCoreBreak, bool IsBoostBreak, const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OpenDamage");

	UTO14_BP_BTL_DAMAGE_C_OpenDamage_Params params;
	params.Number = Number;
	params.IsEnemy = IsEnemy;
	params.IsCritical = IsCritical;
	params.IsWeak = IsWeak;
	params.IsResist = IsResist;
	params.IsCore = IsCore;
	params.IsCoreBreak = IsCoreBreak;
	params.IsBoostBreak = IsBoostBreak;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OpenHeal
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_C::OpenHeal(int Number, const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OpenHeal");

	UTO14_BP_BTL_DAMAGE_C_OpenHeal_Params params;
	params.Number = Number;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BP_BTL_DAMAGE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.Construct");

	UTO14_BP_BTL_DAMAGE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OnAnimationFinished");

	UTO14_BP_BTL_DAMAGE_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OpenPoisonDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnemy                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_C::OpenPoisonDamage(int Number, bool IsEnemy, const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OpenPoisonDamage");

	UTO14_BP_BTL_DAMAGE_C_OpenPoisonDamage_Params params;
	params.Number = Number;
	params.IsEnemy = IsEnemy;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OnVirtualTick
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_DAMAGE_C::OnVirtualTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OnVirtualTick");

	UTO14_BP_BTL_DAMAGE_C_OnVirtualTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.ExecuteUbergraph_TO14_BP_BTL_DAMAGE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_C::ExecuteUbergraph_TO14_BP_BTL_DAMAGE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.ExecuteUbergraph_TO14_BP_BTL_DAMAGE");

	UTO14_BP_BTL_DAMAGE_C_ExecuteUbergraph_TO14_BP_BTL_DAMAGE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OnEndDamageAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BP_BTL_DAMAGE_C*   DamageUI                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_C::OnEndDamageAnim__DelegateSignature(class UTO14_BP_BTL_DAMAGE_C* DamageUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OnEndDamageAnim__DelegateSignature");

	UTO14_BP_BTL_DAMAGE_C_OnEndDamageAnim__DelegateSignature_Params params;
	params.DamageUI = DamageUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
