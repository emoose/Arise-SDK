
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

// Function BP_BTL_VTS_ABNORMAL_BASE.BP_BTL_VTS_ABNORMAL_BASE_C.GetEmitterAttachName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   AttachName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_ABNORMAL_BASE_C::GetEmitterAttachName(struct FName* AttachName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_ABNORMAL_BASE.BP_BTL_VTS_ABNORMAL_BASE_C.GetEmitterAttachName");

	UBP_BTL_VTS_ABNORMAL_BASE_C_GetEmitterAttachName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachName != nullptr)
		*AttachName = params.AttachName;
}


// Function BP_BTL_VTS_ABNORMAL_BASE.BP_BTL_VTS_ABNORMAL_BASE_C.GetEmitter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystem*         AbnormalTemplate               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_ABNORMAL_BASE_C::GetEmitter(class UParticleSystem** AbnormalTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_ABNORMAL_BASE.BP_BTL_VTS_ABNORMAL_BASE_C.GetEmitter");

	UBP_BTL_VTS_ABNORMAL_BASE_C_GetEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AbnormalTemplate != nullptr)
		*AbnormalTemplate = params.AbnormalTemplate;
}


// Function BP_BTL_VTS_ABNORMAL_BASE.BP_BTL_VTS_ABNORMAL_BASE_C.Received_Begin
// (Event, Protected, BlueprintEvent)

void UBP_BTL_VTS_ABNORMAL_BASE_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_ABNORMAL_BASE.BP_BTL_VTS_ABNORMAL_BASE_C.Received_Begin");

	UBP_BTL_VTS_ABNORMAL_BASE_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_ABNORMAL_BASE.BP_BTL_VTS_ABNORMAL_BASE_C.ExecuteUbergraph_BP_BTL_VTS_ABNORMAL_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_ABNORMAL_BASE_C::ExecuteUbergraph_BP_BTL_VTS_ABNORMAL_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_ABNORMAL_BASE.BP_BTL_VTS_ABNORMAL_BASE_C.ExecuteUbergraph_BP_BTL_VTS_ABNORMAL_BASE");

	UBP_BTL_VTS_ABNORMAL_BASE_C_ExecuteUbergraph_BP_BTL_VTS_ABNORMAL_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
