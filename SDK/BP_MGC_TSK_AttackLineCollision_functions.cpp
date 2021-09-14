
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

// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.GetInterval_CollisionNum
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ResultInterval                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultNum                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TSK_AttackLineCollision_C::GetInterval_CollisionNum(float* ResultInterval, int* ResultNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.GetInterval_CollisionNum");

	UBP_MGC_TSK_AttackLineCollision_C_GetInterval_CollisionNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultInterval != nullptr)
		*ResultInterval = params.ResultInterval;
	if (ResultNum != nullptr)
		*ResultNum = params.ResultNum;
}


// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.Received_GetWarningMessage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBtlMagicAsset*          Asset                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_MGC_TSK_AttackLineCollision_C::Received_GetWarningMessage(class UBtlMagicAsset* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.Received_GetWarningMessage");

	UBP_MGC_TSK_AttackLineCollision_C_Received_GetWarningMessage_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.AddCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBtlMagicExtension_Interface_C> Magic                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TSK_AttackLineCollision_C::AddCollision(const TScriptInterface<class UBtlMagicExtension_Interface_C>& Magic, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.AddCollision");

	UBP_MGC_TSK_AttackLineCollision_C_AddCollision_Params params;
	params.Magic = Magic;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.Received_GetTaskName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_MGC_TSK_AttackLineCollision_C::Received_GetTaskName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.Received_GetTaskName");

	UBP_MGC_TSK_AttackLineCollision_C_Received_GetTaskName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.Received_Begin
// (Event, Public, BlueprintEvent)

void UBP_MGC_TSK_AttackLineCollision_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.Received_Begin");

	UBP_MGC_TSK_AttackLineCollision_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.Received_End
// (Event, Public, BlueprintEvent)

void UBP_MGC_TSK_AttackLineCollision_C::Received_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.Received_End");

	UBP_MGC_TSK_AttackLineCollision_C_Received_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.Received_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          FrameDeltaTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TSK_AttackLineCollision_C::Received_Tick(float FrameDeltaTime, float ElapsedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.Received_Tick");

	UBP_MGC_TSK_AttackLineCollision_C_Received_Tick_Params params;
	params.FrameDeltaTime = FrameDeltaTime;
	params.ElapsedTime = ElapsedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.ExecuteUbergraph_BP_MGC_TSK_AttackLineCollision
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TSK_AttackLineCollision_C::ExecuteUbergraph_BP_MGC_TSK_AttackLineCollision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.ExecuteUbergraph_BP_MGC_TSK_AttackLineCollision");

	UBP_MGC_TSK_AttackLineCollision_C_ExecuteUbergraph_BP_MGC_TSK_AttackLineCollision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
