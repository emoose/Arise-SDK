
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

// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.IsSpawned
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_FindedLink_C::IsSpawned(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.IsSpawned");

	UPFAC_EnSym_FindedLink_C_IsSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.IsBattle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_FindedLink_C::IsBattle(class AActor* InActor, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.IsBattle");

	UPFAC_EnSym_FindedLink_C_IsBattle_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.RegisterSymbol
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFST_EnSym_FindedLink  Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_FindedLink_C::RegisterSymbol(const struct FPFST_EnSym_FindedLink& Data, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.RegisterSymbol");

	UPFAC_EnSym_FindedLink_C_RegisterSymbol_Params params;
	params.Data = Data;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.RemoveInvalid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPFAC_EnSym_FindedLink_C::RemoveInvalid()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.RemoveInvalid");

	UPFAC_EnSym_FindedLink_C_RemoveInvalid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.OutputParameter
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FEncountSymbolFindedParamData Output                         (Parm, OutParm)

void UPFAC_EnSym_FindedLink_C::OutputParameter(struct FEncountSymbolFindedParamData* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.OutputParameter");

	UPFAC_EnSym_FindedLink_C_OutputParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UPFAC_EnSym_FindedLink_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.ReceiveBeginPlay");

	UPFAC_EnSym_FindedLink_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_FindedLink_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.ReceiveEndPlay");

	UPFAC_EnSym_FindedLink_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.Refresh
// (Event, Public, BlueprintEvent)

void UPFAC_EnSym_FindedLink_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.Refresh");

	UPFAC_EnSym_FindedLink_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.ExecuteUbergraph_PFAC_EnSym_FindedLink
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_FindedLink_C::ExecuteUbergraph_PFAC_EnSym_FindedLink(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C.ExecuteUbergraph_PFAC_EnSym_FindedLink");

	UPFAC_EnSym_FindedLink_C_ExecuteUbergraph_PFAC_EnSym_FindedLink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
