
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

// Function BP_ContinueScript.BP_ContinueScript_C.IsGameStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ContinueScript_C::IsGameStart(bool* Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContinueScript.BP_ContinueScript_C.IsGameStart");

	ABP_ContinueScript_C_IsGameStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
}


// Function BP_ContinueScript.BP_ContinueScript_C.GetPackageNames
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FModifiedText           Out                            (Parm, OutParm)

void ABP_ContinueScript_C::GetPackageNames(TArray<struct FString>* Array, struct FModifiedText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContinueScript.BP_ContinueScript_C.GetPackageNames");

	ABP_ContinueScript_C_GetPackageNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_ContinueScript.BP_ContinueScript_C.CombineWithCRLF
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Text1                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Text2                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Out                            (Parm, OutParm)

void ABP_ContinueScript_C::CombineWithCRLF(const struct FModifiedText& Text1, const struct FModifiedText& Text2, struct FModifiedText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContinueScript.BP_ContinueScript_C.CombineWithCRLF");

	ABP_ContinueScript_C_CombineWithCRLF_Params params;
	params.Text1 = Text1;
	params.Text2 = Text2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_ContinueScript.BP_ContinueScript_C.DialogYesNo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDictionaryText         InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ContinueScript_C::DialogYesNo(const struct FDictionaryText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContinueScript.BP_ContinueScript_C.DialogYesNo");

	ABP_ContinueScript_C_DialogYesNo_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContinueScript.BP_ContinueScript_C.GetDLC_CategoryError
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FDictionaryText         DicText                        (Parm, OutParm)

void ABP_ContinueScript_C::GetDLC_CategoryError(const struct FString& Selection, struct FDictionaryText* DicText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContinueScript.BP_ContinueScript_C.GetDLC_CategoryError");

	ABP_ContinueScript_C_GetDLC_CategoryError_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DicText != nullptr)
		*DicText = params.DicText;
}


// Function BP_ContinueScript.BP_ContinueScript_C.GetScriptState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 CurrentState                   (Parm, OutParm, ZeroConstructor)

void ABP_ContinueScript_C::GetScriptState(struct FString* CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContinueScript.BP_ContinueScript_C.GetScriptState");

	ABP_ContinueScript_C_GetScriptState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;
}


// Function BP_ContinueScript.BP_ContinueScript_C.GetScriptName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MyName                         (Parm, OutParm, ZeroConstructor)

void ABP_ContinueScript_C::GetScriptName(struct FString* MyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContinueScript.BP_ContinueScript_C.GetScriptName");

	ABP_ContinueScript_C_GetScriptName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MyName != nullptr)
		*MyName = params.MyName;
}


// Function BP_ContinueScript.BP_ContinueScript_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ContinueScript_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContinueScript.BP_ContinueScript_C.UserConstructionScript");

	ABP_ContinueScript_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContinueScript.BP_ContinueScript_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ContinueScript_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContinueScript.BP_ContinueScript_C.ReceiveBeginPlay");

	ABP_ContinueScript_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContinueScript.BP_ContinueScript_C.StartLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoVerify                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ContinueScript_C::StartLoad(bool DoVerify)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContinueScript.BP_ContinueScript_C.StartLoad");

	ABP_ContinueScript_C_StartLoad_Params params;
	params.DoVerify = DoVerify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContinueScript.BP_ContinueScript_C.LoadSuccess
// (BlueprintCallable, BlueprintEvent)

void ABP_ContinueScript_C::LoadSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContinueScript.BP_ContinueScript_C.LoadSuccess");

	ABP_ContinueScript_C_LoadSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContinueScript.BP_ContinueScript_C.LoadError
// (BlueprintCallable, BlueprintEvent)

void ABP_ContinueScript_C::LoadError()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContinueScript.BP_ContinueScript_C.LoadError");

	ABP_ContinueScript_C_LoadError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContinueScript.BP_ContinueScript_C.ExecuteUbergraph_BP_ContinueScript
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ContinueScript_C::ExecuteUbergraph_BP_ContinueScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContinueScript.BP_ContinueScript_C.ExecuteUbergraph_BP_ContinueScript");

	ABP_ContinueScript_C_ExecuteUbergraph_BP_ContinueScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
