
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

// Function BPD_UnitManager.BPD_UnitManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPD_UnitManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_UnitManager.BPD_UnitManager_C.UserConstructionScript");

	ABPD_UnitManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_UnitManager.BPD_UnitManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPD_UnitManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_UnitManager.BPD_UnitManager_C.ReceiveBeginPlay");

	ABPD_UnitManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_UnitManager.BPD_UnitManager_C.OnChangeProfile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ParameterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABPD_UnitManager_C::OnChangeProfile(const struct FString& ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_UnitManager.BPD_UnitManager_C.OnChangeProfile");

	ABPD_UnitManager_C_OnChangeProfile_Params params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_UnitManager.BPD_UnitManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPD_UnitManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_UnitManager.BPD_UnitManager_C.ReceiveEndPlay");

	ABPD_UnitManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_UnitManager.BPD_UnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSpawnCharacterSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reinforcement                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPD_UnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSpawnCharacterSignature__DelegateSignature(class ABtlCharacterBase* Character, bool Reinforcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_UnitManager.BPD_UnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSpawnCharacterSignature__DelegateSignature");

	ABPD_UnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSpawnCharacterSignature__DelegateSignature_Params params;
	params.Character = Character;
	params.Reinforcement = Reinforcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_UnitManager.BPD_UnitManager_C.ExecuteUbergraph_BPD_UnitManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPD_UnitManager_C::ExecuteUbergraph_BPD_UnitManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_UnitManager.BPD_UnitManager_C.ExecuteUbergraph_BPD_UnitManager");

	ABPD_UnitManager_C_ExecuteUbergraph_BPD_UnitManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
