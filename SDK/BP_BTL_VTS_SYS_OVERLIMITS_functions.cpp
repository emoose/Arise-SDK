
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

// Function BP_BTL_VTS_SYS_OVERLIMITS.BP_BTL_VTS_SYS_OVERLIMITS_C.GetEmitter_Loop
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystem*         OverlimitLoopTemplate          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_SYS_OVERLIMITS_C::GetEmitter_Loop(class UParticleSystem** OverlimitLoopTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_OVERLIMITS.BP_BTL_VTS_SYS_OVERLIMITS_C.GetEmitter_Loop");

	UBP_BTL_VTS_SYS_OVERLIMITS_C_GetEmitter_Loop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlimitLoopTemplate != nullptr)
		*OverlimitLoopTemplate = params.OverlimitLoopTemplate;
}


// Function BP_BTL_VTS_SYS_OVERLIMITS.BP_BTL_VTS_SYS_OVERLIMITS_C.GetEmitterAttachName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AttachName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachName_GRA                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_SYS_OVERLIMITS_C::GetEmitterAttachName(struct FName* AttachName, struct FName* AttachName_GRA)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_OVERLIMITS.BP_BTL_VTS_SYS_OVERLIMITS_C.GetEmitterAttachName");

	UBP_BTL_VTS_SYS_OVERLIMITS_C_GetEmitterAttachName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachName != nullptr)
		*AttachName = params.AttachName;
	if (AttachName_GRA != nullptr)
		*AttachName_GRA = params.AttachName_GRA;
}


// Function BP_BTL_VTS_SYS_OVERLIMITS.BP_BTL_VTS_SYS_OVERLIMITS_C.GetEmitter_Start
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystem*         OverlimitStartTemplate         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_SYS_OVERLIMITS_C::GetEmitter_Start(class UParticleSystem** OverlimitStartTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_OVERLIMITS.BP_BTL_VTS_SYS_OVERLIMITS_C.GetEmitter_Start");

	UBP_BTL_VTS_SYS_OVERLIMITS_C_GetEmitter_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlimitStartTemplate != nullptr)
		*OverlimitStartTemplate = params.OverlimitStartTemplate;
}


// Function BP_BTL_VTS_SYS_OVERLIMITS.BP_BTL_VTS_SYS_OVERLIMITS_C.Received_Begin
// (Event, Protected, BlueprintEvent)

void UBP_BTL_VTS_SYS_OVERLIMITS_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_OVERLIMITS.BP_BTL_VTS_SYS_OVERLIMITS_C.Received_Begin");

	UBP_BTL_VTS_SYS_OVERLIMITS_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_SYS_OVERLIMITS.BP_BTL_VTS_SYS_OVERLIMITS_C.ExecuteUbergraph_BP_BTL_VTS_SYS_OVERLIMITS
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_SYS_OVERLIMITS_C::ExecuteUbergraph_BP_BTL_VTS_SYS_OVERLIMITS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_OVERLIMITS.BP_BTL_VTS_SYS_OVERLIMITS_C.ExecuteUbergraph_BP_BTL_VTS_SYS_OVERLIMITS");

	UBP_BTL_VTS_SYS_OVERLIMITS_C_ExecuteUbergraph_BP_BTL_VTS_SYS_OVERLIMITS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
