
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

// Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.EndsOneTop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFOneTopComponent*      OneTopComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_PF_InteractEventScript_NpcOneTop_C::EndsOneTop(class UPFOneTopComponent** OneTopComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.EndsOneTop");

	UBP_PF_InteractEventScript_NpcOneTop_C_EndsOneTop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OneTopComponent != nullptr)
		*OneTopComponent = params.OneTopComponent;
}


// Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.StartsOneTop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFOneTopComponent*      OneTopComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_PF_InteractEventScript_NpcOneTop_C::StartsOneTop(class UPFOneTopComponent** OneTopComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.StartsOneTop");

	UBP_PF_InteractEventScript_NpcOneTop_C_StartsOneTop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OneTopComponent != nullptr)
		*OneTopComponent = params.OneTopComponent;
}


// Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.Main
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_PF_InteractEventScript_NpcOneTop_C::Main(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.Main");

	UBP_PF_InteractEventScript_NpcOneTop_C_Main_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.UpdateMessageEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFOneTopComponent*      OneTopComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_PF_InteractEventScript_NpcOneTop_C::UpdateMessageEvent(class UPFOneTopComponent* OneTopComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.UpdateMessageEvent");

	UBP_PF_InteractEventScript_NpcOneTop_C_UpdateMessageEvent_Params params;
	params.OneTopComponent = OneTopComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.Run Message
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFOneTopID             GroupID                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PF_InteractEventScript_NpcOneTop_C::Run_Message(const struct FPFOneTopID& GroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.Run Message");

	UBP_PF_InteractEventScript_NpcOneTop_C_Run_Message_Params params;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.ExecuteUbergraph_BP_PF_InteractEventScript_NpcOneTop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InteractEventScript_NpcOneTop_C::ExecuteUbergraph_BP_PF_InteractEventScript_NpcOneTop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.ExecuteUbergraph_BP_PF_InteractEventScript_NpcOneTop");

	UBP_PF_InteractEventScript_NpcOneTop_C_ExecuteUbergraph_BP_PF_InteractEventScript_NpcOneTop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
