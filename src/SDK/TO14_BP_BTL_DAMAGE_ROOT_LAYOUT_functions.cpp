
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

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.IsUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::IsUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.IsUse");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_IsUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.CreateBreakNotifyWidget
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::CreateBreakNotifyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.CreateBreakNotifyWidget");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_CreateBreakNotifyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.SetupCreatedWidget
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Prototype                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 CreatedWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::SetupCreatedWidget(class UWidget* Prototype, class UWidget* CreatedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.SetupCreatedWidget");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_SetupCreatedWidget_Params params;
	params.Prototype = Prototype;
	params.CreatedWidget = CreatedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.IsAsyncConstructComplated
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::IsAsyncConstructComplated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.IsAsyncConstructComplated");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_IsAsyncConstructComplated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.CreateDamageWidget
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::CreateDamageWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.CreateDamageWidget");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_CreateDamageWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.BreakNotifyUIRequest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C* TO14_BreakNotify               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::BreakNotifyUIRequest(bool* IsValid, class UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C** TO14_BreakNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.BreakNotifyUIRequest");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_BreakNotifyUIRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (TO14_BreakNotify != nullptr)
		*TO14_BreakNotify = params.TO14_BreakNotify;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.IsScreenRange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 ViewLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::IsScreenRange(const struct FVector& ViewLocation, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.IsScreenRange");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_IsScreenRange_Params params;
	params.ViewLocation = ViewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.DamageUIRequest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBattleDamageUIInterface> TO14_Damage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::DamageUIRequest(bool* IsValid, TScriptInterface<class UBattleDamageUIInterface>* TO14_Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.DamageUIRequest");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_DamageUIRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (TO14_Damage != nullptr)
		*TO14_Damage = params.TO14_Damage;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OpenDamage
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

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::OpenDamage(int Number, bool IsEnemy, bool IsCritical, bool IsWeak, bool IsResist, bool IsCore, bool IsCoreBreak, bool IsBoostBreak, const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OpenDamage");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OpenDamage_Params params;
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


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OpenHeal
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::OpenHeal(int Number, const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OpenHeal");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OpenHeal_Params params;
	params.Number = Number;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnEndDamageAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BP_BTL_DAMAGE_C*   DamageUI                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::OnEndDamageAnim(class UTO14_BP_BTL_DAMAGE_C* DamageUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnEndDamageAnim");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OnEndDamageAnim_Params params;
	params.DamageUI = DamageUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.Destruct");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.BindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.BindEvent");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.UnBindEvent");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnChangeVisiblePreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::OnChangeVisiblePreset(const struct FName& Preset)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnChangeVisiblePreset");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OnChangeVisiblePreset_Params params;
	params.Preset = Preset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OpenPoisonDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnemy                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::OpenPoisonDamage(int Number, bool IsEnemy, const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OpenPoisonDamage");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OpenPoisonDamage_Params params;
	params.Number = Number;
	params.IsEnemy = IsEnemy;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnCoreBreak
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::OnCoreBreak(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, class UBtlDamageSphereComponent* DmgCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnCoreBreak");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OnCoreBreak_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.DmgCollision = DmgCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OpenBoostBreakText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::OpenBoostBreakText(const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OpenBoostBreakText");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OpenBoostBreakText_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OpenCoreBreak
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::OpenCoreBreak(const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OpenCoreBreak");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OpenCoreBreak_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnEndBreakNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C* BreakNotify                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::OnEndBreakNotify(class UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C* BreakNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnEndBreakNotify");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OnEndBreakNotify_Params params;
	params.BreakNotify = BreakNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnBoostAttackBreak
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlCollisionSignatureData CollisionParam                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::OnBoostAttackBreak(const struct FBtlCollisionSignatureData& CollisionParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnBoostAttackBreak");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OnBoostAttackBreak_Params params;
	params.CollisionParam = CollisionParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.Tick");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.AsyncConstruct
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::AsyncConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.AsyncConstruct");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_AsyncConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnOpenBreakTextRaw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::OnOpenBreakTextRaw(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnOpenBreakTextRaw");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OnOpenBreakTextRaw_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.ExecuteUbergraph_TO14_BP_BTL_DAMAGE_ROOT_LAYOUT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C::ExecuteUbergraph_TO14_BP_BTL_DAMAGE_ROOT_LAYOUT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.ExecuteUbergraph_TO14_BP_BTL_DAMAGE_ROOT_LAYOUT");

	UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_ExecuteUbergraph_TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
