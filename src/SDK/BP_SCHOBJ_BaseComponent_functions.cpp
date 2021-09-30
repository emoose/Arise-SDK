
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

// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.GetDefine
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPFSCHObjDefine                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPFSCHObjDefine UBP_SCHOBJ_BaseComponent_C::GetDefine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.GetDefine");

	UBP_SCHOBJ_BaseComponent_C_GetDefine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.GetTargetLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBP_SCHOBJ_BaseComponent_C::GetTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.GetTargetLocation");

	UBP_SCHOBJ_BaseComponent_C_GetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.GetPFDelegateManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APFDelegateManager*      Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_BaseComponent_C::GetPFDelegateManager(class APFDelegateManager** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.GetPFDelegateManager");

	UBP_SCHOBJ_BaseComponent_C_GetPFDelegateManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.GetInteractiveSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Field                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Dungeon                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Town                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_BaseComponent_C::GetInteractiveSize(float* Field, float* Dungeon, float* Town)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.GetInteractiveSize");

	UBP_SCHOBJ_BaseComponent_C_GetInteractiveSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Field != nullptr)
		*Field = params.Field;
	if (Dungeon != nullptr)
		*Dungeon = params.Dungeon;
	if (Town != nullptr)
		*Town = params.Town;
}


// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.GetShortChatDatabase
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SCHOBJ_BaseComponent_C::GetShortChatDatabase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.GetShortChatDatabase");

	UBP_SCHOBJ_BaseComponent_C_GetShortChatDatabase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.OnLookAt_StartImpl
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PC                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_BaseComponent_C::OnLookAt_StartImpl(class AActor* Target, class AActor* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.OnLookAt_StartImpl");

	UBP_SCHOBJ_BaseComponent_C_OnLookAt_StartImpl_Params params;
	params.Target = Target;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_SCHOBJ_BaseComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.ReceiveBeginPlay");

	UBP_SCHOBJ_BaseComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.OnChangeStateBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_BaseComponent_C::OnChangeStateBP(EAriseGameState ChangedState, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.OnChangeStateBP");

	UBP_SCHOBJ_BaseComponent_C_OnChangeStateBP_Params params;
	params.ChangedState = ChangedState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.OnLookAt_LoopImpl
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  PC                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_BaseComponent_C::OnLookAt_LoopImpl(class AActor* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.OnLookAt_LoopImpl");

	UBP_SCHOBJ_BaseComponent_C_OnLookAt_LoopImpl_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.OnPFDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFDelegateArgs_EnableControl* InArgs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_BaseComponent_C::OnPFDelegate(class UPFDelegateArgs_EnableControl* InArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.OnPFDelegate");

	UBP_SCHOBJ_BaseComponent_C_OnPFDelegate_Params params;
	params.InArgs = InArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.BindEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_SCHOBJ_BaseComponent_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.BindEvent");

	UBP_SCHOBJ_BaseComponent_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_BaseComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.ReceiveEndPlay");

	UBP_SCHOBJ_BaseComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.ExecuteUbergraph_BP_SCHOBJ_BaseComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_BaseComponent_C::ExecuteUbergraph_BP_SCHOBJ_BaseComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C.ExecuteUbergraph_BP_SCHOBJ_BaseComponent");

	UBP_SCHOBJ_BaseComponent_C_ExecuteUbergraph_BP_SCHOBJ_BaseComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
