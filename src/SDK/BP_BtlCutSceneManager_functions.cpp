
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

// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.IsMysticLevelInvisiableComplated
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlCutSceneManager_C::IsMysticLevelInvisiableComplated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.IsMysticLevelInvisiableComplated");

	ABP_BtlCutSceneManager_C_IsMysticLevelInvisiableComplated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.IsMysticLevelVisiableComplated
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlCutSceneManager_C::IsMysticLevelVisiableComplated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.IsMysticLevelVisiableComplated");

	ABP_BtlCutSceneManager_C_IsMysticLevelVisiableComplated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.IsMysticLevelReleased
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlCutSceneManager_C::IsMysticLevelReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.IsMysticLevelReleased");

	ABP_BtlCutSceneManager_C_IsMysticLevelReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.IsLeanmedMystic
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABtlCharacterBase*       TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCutSceneManager_C::IsLeanmedMystic(class ABtlCharacterBase* TargetCharacter, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.IsLeanmedMystic");

	ABP_BtlCutSceneManager_C_IsLeanmedMystic_Params params;
	params.TargetCharacter = TargetCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCutSceneManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.UserConstructionScript");

	ABP_BtlCutSceneManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.PrePlayMystic
// (Event, Public, BlueprintEvent)

void ABP_BtlCutSceneManager_C::PrePlayMystic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.PrePlayMystic");

	ABP_BtlCutSceneManager_C_PrePlayMystic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.PreEndMystic
// (Event, Public, BlueprintEvent)

void ABP_BtlCutSceneManager_C::PreEndMystic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.PreEndMystic");

	ABP_BtlCutSceneManager_C_PreEndMystic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCharacterSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCutSceneManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCharacterSignature__DelegateSignature(class ABtlCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCharacterSignature__DelegateSignature");

	ABP_BtlCutSceneManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCharacterSignature__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlCharacterSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCutSceneManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlCharacterSignature__DelegateSignature(class ABtlCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlCharacterSignature__DelegateSignature");

	ABP_BtlCutSceneManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlCharacterSignature__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.LoadRequestMysticLevel
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlCutSceneManager_C::LoadRequestMysticLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.LoadRequestMysticLevel");

	ABP_BtlCutSceneManager_C_LoadRequestMysticLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.UnloadRequestMysticLevel
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlCutSceneManager_C::UnloadRequestMysticLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.UnloadRequestMysticLevel");

	ABP_BtlCutSceneManager_C_UnloadRequestMysticLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlCutSceneBeginParam  Param                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_BtlCutSceneManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventBeginSignature__DelegateSignature(const struct FBtlCutSceneBeginParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventBeginSignature__DelegateSignature");

	ABP_BtlCutSceneManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventBeginSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BtlCutSceneManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.ReceiveBeginPlay");

	ABP_BtlCutSceneManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCutSceneManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.ReceiveEndPlay");

	ABP_BtlCutSceneManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.Received_OnPlayEvent
// (Event, Protected, BlueprintEvent)

void ABP_BtlCutSceneManager_C::Received_OnPlayEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.Received_OnPlayEvent");

	ABP_BtlCutSceneManager_C_Received_OnPlayEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.Received_OnEndEvent
// (Event, Protected, BlueprintEvent)

void ABP_BtlCutSceneManager_C::Received_OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.Received_OnEndEvent");

	ABP_BtlCutSceneManager_C_Received_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlCutSceneManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature");

	ABP_BtlCutSceneManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.ReservationPlayMystic
// (Event, Public, BlueprintEvent)

void ABP_BtlCutSceneManager_C::ReservationPlayMystic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.ReservationPlayMystic");

	ABP_BtlCutSceneManager_C_ReservationPlayMystic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlCutSceneManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSimpleSignature__DelegateSignature");

	ABP_BtlCutSceneManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.ExecuteUbergraph_BP_BtlCutSceneManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCutSceneManager_C::ExecuteUbergraph_BP_BtlCutSceneManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCutSceneManager.BP_BtlCutSceneManager_C.ExecuteUbergraph_BP_BtlCutSceneManager");

	ABP_BtlCutSceneManager_C_ExecuteUbergraph_BP_BtlCutSceneManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
