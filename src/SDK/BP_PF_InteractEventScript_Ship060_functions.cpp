
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

// Function BP_PF_InteractEventScript_Ship060.BP_PF_InteractEventScript_Ship060_C.EndsOneTop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFOneTopComponent*      OneTopComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_PF_InteractEventScript_Ship060_C::EndsOneTop(class UPFOneTopComponent** OneTopComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_Ship060.BP_PF_InteractEventScript_Ship060_C.EndsOneTop");

	UBP_PF_InteractEventScript_Ship060_C_EndsOneTop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OneTopComponent != nullptr)
		*OneTopComponent = params.OneTopComponent;
}


// Function BP_PF_InteractEventScript_Ship060.BP_PF_InteractEventScript_Ship060_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PF_InteractEventScript_Ship060_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_Ship060.BP_PF_InteractEventScript_Ship060_C.ReceiveBeginPlay");

	UBP_PF_InteractEventScript_Ship060_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_Ship060.BP_PF_InteractEventScript_Ship060_C.Run Message
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFOneTopID             GroupID                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PF_InteractEventScript_Ship060_C::Run_Message(const struct FPFOneTopID& GroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_Ship060.BP_PF_InteractEventScript_Ship060_C.Run Message");

	UBP_PF_InteractEventScript_Ship060_C_Run_Message_Params params;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_Ship060.BP_PF_InteractEventScript_Ship060_C.ExecuteUbergraph_BP_PF_InteractEventScript_Ship060
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InteractEventScript_Ship060_C::ExecuteUbergraph_BP_PF_InteractEventScript_Ship060(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_Ship060.BP_PF_InteractEventScript_Ship060_C.ExecuteUbergraph_BP_PF_InteractEventScript_Ship060");

	UBP_PF_InteractEventScript_Ship060_C_ExecuteUbergraph_BP_PF_InteractEventScript_Ship060_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
