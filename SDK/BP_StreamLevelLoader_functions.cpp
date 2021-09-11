
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

// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.BPGeneralFunctionBool
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   OpertionName                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TMap<struct FName, struct FString> Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StreamLevelLoader_C::BPGeneralFunctionBool(const struct FName& OpertionName, TMap<struct FName, struct FString> Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.BPGeneralFunctionBool");

	ABP_StreamLevelLoader_C_BPGeneralFunctionBool_Params params;
	params.OpertionName = OpertionName;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.DumpCurrentLoadRequest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_StreamLevelLoader_C::DumpCurrentLoadRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.DumpCurrentLoadRequest");

	ABP_StreamLevelLoader_C_DumpCurrentLoadRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_StreamLevelLoader_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.UserConstructionScript");

	ABP_StreamLevelLoader_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StreamLevelLoader_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.ReceiveBeginPlay");

	ABP_StreamLevelLoader_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.OnChangeDebugValue
// (BlueprintCallable, BlueprintEvent)

void ABP_StreamLevelLoader_C::OnChangeDebugValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.OnChangeDebugValue");

	ABP_StreamLevelLoader_C_OnChangeDebugValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.BPE_DoLoadStreamLevel
// (Event, Public, BlueprintEvent)

void ABP_StreamLevelLoader_C::BPE_DoLoadStreamLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.BPE_DoLoadStreamLevel");

	ABP_StreamLevelLoader_C_BPE_DoLoadStreamLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.BPE_DoUnloadStreamLevel
// (Event, Public, BlueprintEvent)

void ABP_StreamLevelLoader_C::BPE_DoUnloadStreamLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.BPE_DoUnloadStreamLevel");

	ABP_StreamLevelLoader_C_BPE_DoUnloadStreamLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.BPE_DoUnloadAll
// (Event, Public, BlueprintEvent)

void ABP_StreamLevelLoader_C::BPE_DoUnloadAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.BPE_DoUnloadAll");

	ABP_StreamLevelLoader_C_BPE_DoUnloadAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.UnloadExtraEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Levels                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_StreamLevelLoader_C::UnloadExtraEvent(TArray<struct FName> Levels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.UnloadExtraEvent");

	ABP_StreamLevelLoader_C_UnloadExtraEvent_Params params;
	params.Levels = Levels;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StreamLevelLoader_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.ReceiveTick");

	ABP_StreamLevelLoader_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.ExecuteUbergraph_BP_StreamLevelLoader
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StreamLevelLoader_C::ExecuteUbergraph_BP_StreamLevelLoader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.ExecuteUbergraph_BP_StreamLevelLoader");

	ABP_StreamLevelLoader_C_ExecuteUbergraph_BP_StreamLevelLoader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.EventFinishedCleanup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_StreamLevelLoader_C::EventFinishedCleanup__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.EventFinishedCleanup__DelegateSignature");

	ABP_StreamLevelLoader_C_EventFinishedCleanup__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.EventFinishedLoad__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_StreamLevelLoader_C::EventFinishedLoad__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.EventFinishedLoad__DelegateSignature");

	ABP_StreamLevelLoader_C_EventFinishedLoad__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.EventFinishedUnload__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_StreamLevelLoader_C::EventFinishedUnload__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.EventFinishedUnload__DelegateSignature");

	ABP_StreamLevelLoader_C_EventFinishedUnload__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
