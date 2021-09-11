
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

// Function BP_ScriptComponent.BP_ScriptComponent_C.ReceiveEndScript
// (Event, Public, BlueprintEvent)

void UBP_ScriptComponent_C::ReceiveEndScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptComponent.BP_ScriptComponent_C.ReceiveEndScript");

	UBP_ScriptComponent_C_ReceiveEndScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptComponent.BP_ScriptComponent_C.ReceiveDamage
// (Event, Public, BlueprintEvent)

void UBP_ScriptComponent_C::ReceiveDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptComponent.BP_ScriptComponent_C.ReceiveDamage");

	UBP_ScriptComponent_C_ReceiveDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptComponent.BP_ScriptComponent_C.ReceiveBreak
// (Event, Public, BlueprintEvent)

void UBP_ScriptComponent_C::ReceiveBreak()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptComponent.BP_ScriptComponent_C.ReceiveBreak");

	UBP_ScriptComponent_C_ReceiveBreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptComponent.BP_ScriptComponent_C.ReceiveBeginScript
// (Event, Public, BlueprintEvent)

void UBP_ScriptComponent_C::ReceiveBeginScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptComponent.BP_ScriptComponent_C.ReceiveBeginScript");

	UBP_ScriptComponent_C_ReceiveBeginScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptComponent.BP_ScriptComponent_C.ExecuteUbergraph_BP_ScriptComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScriptComponent_C::ExecuteUbergraph_BP_ScriptComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptComponent.BP_ScriptComponent_C.ExecuteUbergraph_BP_ScriptComponent");

	UBP_ScriptComponent_C_ExecuteUbergraph_BP_ScriptComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
