
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

// Function BP_BTL_VTS_SYS_DEAD.BP_BTL_VTS_SYS_DEAD_C.GetEmitter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_SYS_DEAD_C::GetEmitter(class UParticleSystem** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_DEAD.BP_BTL_VTS_SYS_DEAD_C.GetEmitter");

	UBP_BTL_VTS_SYS_DEAD_C_GetEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_BTL_VTS_SYS_DEAD.BP_BTL_VTS_SYS_DEAD_C.GetEmitterAttachName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AttachName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_SYS_DEAD_C::GetEmitterAttachName(struct FName* AttachName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_DEAD.BP_BTL_VTS_SYS_DEAD_C.GetEmitterAttachName");

	UBP_BTL_VTS_SYS_DEAD_C_GetEmitterAttachName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachName != nullptr)
		*AttachName = params.AttachName;
}


// Function BP_BTL_VTS_SYS_DEAD.BP_BTL_VTS_SYS_DEAD_C.Received_Begin
// (Event, Protected, BlueprintEvent)

void UBP_BTL_VTS_SYS_DEAD_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_DEAD.BP_BTL_VTS_SYS_DEAD_C.Received_Begin");

	UBP_BTL_VTS_SYS_DEAD_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_SYS_DEAD.BP_BTL_VTS_SYS_DEAD_C.ExecuteUbergraph_BP_BTL_VTS_SYS_DEAD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_SYS_DEAD_C::ExecuteUbergraph_BP_BTL_VTS_SYS_DEAD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_DEAD.BP_BTL_VTS_SYS_DEAD_C.ExecuteUbergraph_BP_BTL_VTS_SYS_DEAD");

	UBP_BTL_VTS_SYS_DEAD_C_ExecuteUbergraph_BP_BTL_VTS_SYS_DEAD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
