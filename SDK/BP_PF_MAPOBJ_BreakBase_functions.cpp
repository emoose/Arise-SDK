
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

// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.GetDebShowInfoMessage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutMessage                     (Parm, OutParm, ZeroConstructor)
// struct FLinearColor            OutColor                       (Parm, OutParm, IsPlainOldData)

void ABP_PF_MAPOBJ_BreakBase_C::GetDebShowInfoMessage(bool* bValid, struct FString* OutMessage, struct FLinearColor* OutColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.GetDebShowInfoMessage");

	ABP_PF_MAPOBJ_BreakBase_C_GetDebShowInfoMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (OutMessage != nullptr)
		*OutMessage = params.OutMessage;
	if (OutColor != nullptr)
		*OutColor = params.OutColor;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.OnSetHideModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisibility                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_BreakBase_C::OnSetHideModel(bool bVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.OnSetHideModel");

	ABP_PF_MAPOBJ_BreakBase_C_OnSetHideModel_Params params;
	params.bVisibility = bVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.OnSetGatheredModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisibility                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_BreakBase_C::OnSetGatheredModel(bool bVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.OnSetGatheredModel");

	ABP_PF_MAPOBJ_BreakBase_C_OnSetGatheredModel_Params params;
	params.bVisibility = bVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.OnSetBaseModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisibility                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_BreakBase_C::OnSetBaseModel(bool bVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.OnSetBaseModel");

	ABP_PF_MAPOBJ_BreakBase_C_OnSetBaseModel_Params params;
	params.bVisibility = bVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.IsPop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_BreakBase_C::IsPop(bool* bEnable, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.IsPop");

	ABP_PF_MAPOBJ_BreakBase_C_IsPop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.SetDiscover
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_BreakBase_C::SetDiscover()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.SetDiscover");

	ABP_PF_MAPOBJ_BreakBase_C_SetDiscover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.IsDiscover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bCleared                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_BreakBase_C::IsDiscover(bool* bCleared)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.IsDiscover");

	ABP_PF_MAPOBJ_BreakBase_C_IsDiscover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCleared != nullptr)
		*bCleared = params.bCleared;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.GetPrimitiveComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_PF_MAPOBJ_BreakBase_C::GetPrimitiveComponent(class UPrimitiveComponent** PrimitiveComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.GetPrimitiveComponent");

	ABP_PF_MAPOBJ_BreakBase_C_GetPrimitiveComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrimitiveComponent != nullptr)
		*PrimitiveComponent = params.PrimitiveComponent;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.GetLineTraceHit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HeightOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowTrace                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsHit                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, IsPlainOldData)

void ABP_PF_MAPOBJ_BreakBase_C::GetLineTraceHit(class AActor* Actor, float HeightOffset, float Length, bool bShowTrace, bool* bIsHit, struct FVector* HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.GetLineTraceHit");

	ABP_PF_MAPOBJ_BreakBase_C_GetLineTraceHit_Params params;
	params.Actor = Actor;
	params.HeightOffset = HeightOffset;
	params.Length = Length;
	params.bShowTrace = bShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsHit != nullptr)
		*bIsHit = params.bIsHit;
	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.FinishBreak
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_BreakBase_C::FinishBreak()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.FinishBreak");

	ABP_PF_MAPOBJ_BreakBase_C_FinishBreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.Break
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_BreakBase_C::Break()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.Break");

	ABP_PF_MAPOBJ_BreakBase_C_Break_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.FinishDamage
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_BreakBase_C::FinishDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.FinishDamage");

	ABP_PF_MAPOBJ_BreakBase_C_FinishDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.Damage
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_BreakBase_C::Damage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.Damage");

	ABP_PF_MAPOBJ_BreakBase_C_Damage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.OnDamage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBreak                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_BreakBase_C::OnDamage(int Damage, bool* bBreak)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.OnDamage");

	ABP_PF_MAPOBJ_BreakBase_C_OnDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bBreak != nullptr)
		*bBreak = params.bBreak;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_BreakBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.UserConstructionScript");

	ABP_PF_MAPOBJ_BreakBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.On Receive Field Action
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_BreakBase_C::On_Receive_Field_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.On Receive Field Action");

	ABP_PF_MAPOBJ_BreakBase_C_On_Receive_Field_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.ReceiveOnConstruction
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PF_MAPOBJ_BreakBase_C::ReceiveOnConstruction(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.ReceiveOnConstruction");

	ABP_PF_MAPOBJ_BreakBase_C_ReceiveOnConstruction_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.OnFoundTrapIn
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_BreakBase_C::OnFoundTrapIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.OnFoundTrapIn");

	ABP_PF_MAPOBJ_BreakBase_C_OnFoundTrapIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.SetShowModel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_BreakBase_C::SetShowModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.SetShowModel");

	ABP_PF_MAPOBJ_BreakBase_C_SetShowModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_MAPOBJ_BreakBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.ReceiveBeginPlay");

	ABP_PF_MAPOBJ_BreakBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.ExecuteUbergraph_BP_PF_MAPOBJ_BreakBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_BreakBase_C::ExecuteUbergraph_BP_PF_MAPOBJ_BreakBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C.ExecuteUbergraph_BP_PF_MAPOBJ_BreakBase");

	ABP_PF_MAPOBJ_BreakBase_C_ExecuteUbergraph_BP_PF_MAPOBJ_BreakBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
