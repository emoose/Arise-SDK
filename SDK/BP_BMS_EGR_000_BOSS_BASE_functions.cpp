
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

// Function BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C.IsPartyMember
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ARI                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SIO                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NNA                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ZGU                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MNK                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           YRA                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_EGR_000_BOSS_BASE_C::IsPartyMember(bool ARI, bool SIO, bool NNA, bool ZGU, bool MNK, bool YRA, bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C.IsPartyMember");

	UBP_BMS_EGR_000_BOSS_BASE_C_IsPartyMember_Params params;
	params.ARI = ARI;
	params.SIO = SIO;
	params.NNA = NNA;
	params.ZGU = ZGU;
	params.MNK = MNK;
	params.YRA = YRA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C.Received_OnFlexibleNotify
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UserInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            UserColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 UserObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_EGR_000_BOSS_BASE_C::Received_OnFlexibleNotify(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C.Received_OnFlexibleNotify");

	UBP_BMS_EGR_000_BOSS_BASE_C_Received_OnFlexibleNotify_Params params;
	params.UserInteger = UserInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.UserColor = UserColor;
	params.UserObject = UserObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C.OnPrevMainProduction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BMS_EGR_000_BOSS_BASE_C::OnPrevMainProduction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C.OnPrevMainProduction");

	UBP_BMS_EGR_000_BOSS_BASE_C_OnPrevMainProduction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C.OnEndArtsSpecialStrike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlSpecialStrikeEndParam Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BMS_EGR_000_BOSS_BASE_C::OnEndArtsSpecialStrike(const struct FBtlSpecialStrikeEndParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C.OnEndArtsSpecialStrike");

	UBP_BMS_EGR_000_BOSS_BASE_C_OnEndArtsSpecialStrike_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C.ExecuteUbergraph_BP_BMS_EGR_000_BOSS_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_EGR_000_BOSS_BASE_C::ExecuteUbergraph_BP_BMS_EGR_000_BOSS_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C.ExecuteUbergraph_BP_BMS_EGR_000_BOSS_BASE");

	UBP_BMS_EGR_000_BOSS_BASE_C_ExecuteUbergraph_BP_BMS_EGR_000_BOSS_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
