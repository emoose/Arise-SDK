
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

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnFilterComboArts
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_SIO_000_C::OnFilterComboArts(const struct FBtlArtsData& ArtsData, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnFilterComboArts");

	UBP_BUS_SIO_000_C_OnFilterComboArts_Params params;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.InitializeBombBullet
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BUS_SIO_000_C::InitializeBombBullet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.InitializeBombBullet");

	UBP_BUS_SIO_000_C_InitializeBombBullet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.GetBombBulletMax
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_BUS_SIO_000_C::GetBombBulletMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.GetBombBulletMax");

	UBP_BUS_SIO_000_C_GetBombBulletMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.GetBombBullet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_BUS_SIO_000_C::GetBombBullet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.GetBombBullet");

	UBP_BUS_SIO_000_C_GetBombBullet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnRequestArtsMagicOverride
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreArtsCost                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_SIO_000_C::OnRequestArtsMagicOverride(const struct FName& ArtsLabel, struct FName* Result, bool* IgnoreArtsCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnRequestArtsMagicOverride");

	UBP_BUS_SIO_000_C_OnRequestArtsMagicOverride_Params params;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (IgnoreArtsCost != nullptr)
		*IgnoreArtsCost = params.IgnoreArtsCost;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.TryExplodeArts
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BUS_SIO_000_C::TryExplodeArts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.TryExplodeArts");

	UBP_BUS_SIO_000_C_TryExplodeArts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.PlayExplodeArts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   UniqueArtsLabel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_SIO_000_C::PlayExplodeArts(const struct FName& UniqueArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.PlayExplodeArts");

	UBP_BUS_SIO_000_C_PlayExplodeArts_Params params;
	params.UniqueArtsLabel = UniqueArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.CanReload
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           AutoReload                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BUS_SIO_000_C::CanReload(bool AutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.CanReload");

	UBP_BUS_SIO_000_C_CanReload_Params params;
	params.AutoReload = AutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.CanExplodeArts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ExplodeArtsLabel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BUS_SIO_000_C::CanExplodeArts(const struct FName& ExplodeArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.CanExplodeArts");

	UBP_BUS_SIO_000_C_CanExplodeArts_Params params;
	params.ExplodeArtsLabel = ExplodeArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnBoostAttackTraits
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         AttackCollision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            AttackArts                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABtlCharacterBase*       ReceiveUnit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsSuccessBoostBreak           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_SIO_000_C::OnBoostAttackTraits(class UShapeComponent* AttackCollision, const struct FBtlArtsData& AttackArts, class ABtlCharacterBase* ReceiveUnit, class UBtlSphereComponent* ReceiveCollision, bool* bIsSuccessBoostBreak)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnBoostAttackTraits");

	UBP_BUS_SIO_000_C_OnBoostAttackTraits_Params params;
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


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.SetBombBulletNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEndAction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_SIO_000_C::SetBombBulletNum(int Num, bool IsEndAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.SetBombBulletNum");

	UBP_BUS_SIO_000_C_SetBombBulletNum_Params params;
	params.Num = Num;
	params.IsEndAction = IsEndAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnPlayableMystic
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MysticLabel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_SIO_000_C::OnPlayableMystic(struct FName* MysticLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnPlayableMystic");

	UBP_BUS_SIO_000_C_OnPlayableMystic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MysticLabel != nullptr)
		*MysticLabel = params.MysticLabel;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.GetExplodeArtsLabel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBtlArtsData            SourceArtsData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   ArtsLabel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_SIO_000_C::GetExplodeArtsLabel(const struct FBtlArtsData& SourceArtsData, struct FName* ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.GetExplodeArtsLabel");

	UBP_BUS_SIO_000_C_GetExplodeArtsLabel_Params params;
	params.SourceArtsData = SourceArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArtsLabel != nullptr)
		*ArtsLabel = params.ArtsLabel;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.AssortFlexibleNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UserInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsBegin                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            UserColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_BUS_SIO_000_C::AssortFlexibleNotify(int UserInteger, float UserFloat, const struct FString& UserString, bool IsBegin, const struct FLinearColor& UserColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.AssortFlexibleNotify");

	UBP_BUS_SIO_000_C_AssortFlexibleNotify_Params params;
	params.UserInteger = UserInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.IsBegin = IsBegin;
	params.UserColor = UserColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnFlexibleNotifyBegin
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            UserInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            UserColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 UserObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_SIO_000_C::OnFlexibleNotifyBegin(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnFlexibleNotifyBegin");

	UBP_BUS_SIO_000_C_OnFlexibleNotifyBegin_Params params;
	params.UserInteger = UserInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.UserColor = UserColor;
	params.UserObject = UserObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnFlexibleNotifyEnd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            UserInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            UserColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 UserObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_SIO_000_C::OnFlexibleNotifyEnd(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnFlexibleNotifyEnd");

	UBP_BUS_SIO_000_C_OnFlexibleNotifyEnd_Params params;
	params.UserInteger = UserInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.UserColor = UserColor;
	params.UserObject = UserObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_BUS_SIO_000_C::OnBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnBeginPlay");

	UBP_BUS_SIO_000_C_OnBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.AttackBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            NowArts                        (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleActionState             PreState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_SIO_000_C::AttackBegin(class ABtlCharacterBase* SelfCharacter, const struct FBtlArtsData& NowArts, EBattleActionState PreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.AttackBegin");

	UBP_BUS_SIO_000_C_AttackBegin_Params params;
	params.SelfCharacter = SelfCharacter;
	params.NowArts = NowArts;
	params.PreState = PreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnBeginCancelRange
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActionCancelParam      CancelParam                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_BUS_SIO_000_C::OnBeginCancelRange(const struct FActionCancelParam& CancelParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnBeginCancelRange");

	UBP_BUS_SIO_000_C_OnBeginCancelRange_Params params;
	params.CancelParam = CancelParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.SwapButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ButtonName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlInputEventType             Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_SIO_000_C::SwapButtonPressed(const struct FName& ButtonName, EBtlInputEventType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.SwapButtonPressed");

	UBP_BUS_SIO_000_C_SwapButtonPressed_Params params;
	params.ButtonName = ButtonName;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ButtonName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlInputEventType             Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_SIO_000_C::OnButtonPressed(const struct FName& ButtonName, EBtlInputEventType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnButtonPressed");

	UBP_BUS_SIO_000_C_OnButtonPressed_Params params;
	params.ButtonName = ButtonName;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.SwapButtonReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ButtonName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlInputEventType             Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_SIO_000_C::SwapButtonReleased(const struct FName& ButtonName, EBtlInputEventType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.SwapButtonReleased");

	UBP_BUS_SIO_000_C_SwapButtonReleased_Params params;
	params.ButtonName = ButtonName;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.AttackButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ButtonName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlInputEventType             Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_SIO_000_C::AttackButtonPressed(const struct FName& ButtonName, EBtlInputEventType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.AttackButtonPressed");

	UBP_BUS_SIO_000_C_AttackButtonPressed_Params params;
	params.ButtonName = ButtonName;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnPostBeginBattle
// (BlueprintCallable, BlueprintEvent)

void UBP_BUS_SIO_000_C::OnPostBeginBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnPostBeginBattle");

	UBP_BUS_SIO_000_C_OnPostBeginBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.ExecuteUbergraph_BP_BUS_SIO_000
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_SIO_000_C::ExecuteUbergraph_BP_BUS_SIO_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.ExecuteUbergraph_BP_BUS_SIO_000");

	UBP_BUS_SIO_000_C_ExecuteUbergraph_BP_BUS_SIO_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
