
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

// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.SuperAvoidResurrectionCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_WOL_000_C::SuperAvoidResurrectionCheck(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.SuperAvoidResurrectionCheck");

	UBP_BUS_WOL_000_C_SuperAvoidResurrectionCheck_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.BtlCanSpawn
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BUS_WOL_000_C::BtlCanSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.BtlCanSpawn");

	UBP_BUS_WOL_000_C_BtlCanSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.HawlSpawn_Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BUS_WOL_000_C::HawlSpawn_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.HawlSpawn_Init");

	UBP_BUS_WOL_000_C_HawlSpawn_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.HawlingSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BUS_WOL_000_C::HawlingSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.HawlingSpawn");

	UBP_BUS_WOL_000_C_HawlingSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.OnBreakSuperAvoid
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         AttackerCollision              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BUS_WOL_000_C::OnBreakSuperAvoid(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.OnBreakSuperAvoid");

	UBP_BUS_WOL_000_C_OnBreakSuperAvoid_Params params;
	params.Attacker = Attacker;
	params.AttackerCollision = AttackerCollision;
	params.ArtsData = ArtsData;
	params.ReceiveCollision = ReceiveCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.OnBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_BUS_WOL_000_C::OnBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.OnBeginPlay");

	UBP_BUS_WOL_000_C_OnBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.OnFlexibleNotifyBegin
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            UserInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            UserColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 UserObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_WOL_000_C::OnFlexibleNotifyBegin(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.OnFlexibleNotifyBegin");

	UBP_BUS_WOL_000_C_OnFlexibleNotifyBegin_Params params;
	params.UserInteger = UserInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.UserColor = UserColor;
	params.UserObject = UserObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_WOL_000_C::OnTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.OnTick");

	UBP_BUS_WOL_000_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.ExecuteUbergraph_BP_BUS_WOL_000
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_WOL_000_C::ExecuteUbergraph_BP_BUS_WOL_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.ExecuteUbergraph_BP_BUS_WOL_000");

	UBP_BUS_WOL_000_C_ExecuteUbergraph_BP_BUS_WOL_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
