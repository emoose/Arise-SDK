
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

// Function SC_PE_TalkNpc.SC_PE_TalkNpc_C.«0¹0¿0à0¤0Ù0ó0È0_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USC_PE_TalkNpc_C::«0¹0¿0à0¤0Ù0ó0È0_1(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SC_PE_TalkNpc.SC_PE_TalkNpc_C.«0¹0¿0à0¤0Ù0ó0È0_1");

	USC_PE_TalkNpc_C_«0¹0¿0à0¤0Ù0ó0È0_1_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SC_PE_TalkNpc.SC_PE_TalkNpc_C.Main
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void USC_PE_TalkNpc_C::Main(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function SC_PE_TalkNpc.SC_PE_TalkNpc_C.Main");

	USC_PE_TalkNpc_C_Main_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SC_PE_TalkNpc.SC_PE_TalkNpc_C.ExecuteUbergraph_SC_PE_TalkNpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USC_PE_TalkNpc_C::ExecuteUbergraph_SC_PE_TalkNpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SC_PE_TalkNpc.SC_PE_TalkNpc_C.ExecuteUbergraph_SC_PE_TalkNpc");

	USC_PE_TalkNpc_C_ExecuteUbergraph_SC_PE_TalkNpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
