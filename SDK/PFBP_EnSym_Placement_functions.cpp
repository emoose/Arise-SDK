
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

// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.GetFlyHeigjt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          FlyHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APFBP_EnSym_Placement_C::GetFlyHeigjt(float* FlyHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.GetFlyHeigjt");

	APFBP_EnSym_Placement_C_GetFlyHeigjt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FlyHeight != nullptr)
		*FlyHeight = params.FlyHeight;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.OutputParameter
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FEncountSymbolParamData Output                         (Parm, OutParm)

void APFBP_EnSym_Placement_C::OutputParameter(struct FEncountSymbolParamData* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.OutputParameter");

	APFBP_EnSym_Placement_C_OutputParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.SetLinkRange
// (Public, BlueprintCallable, BlueprintEvent)

void APFBP_EnSym_Placement_C::SetLinkRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.SetLinkRange");

	APFBP_EnSym_Placement_C_SetLinkRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.SetWanderingRange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APFBP_EnSym_Placement_C::SetWanderingRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.SetWanderingRange");

	APFBP_EnSym_Placement_C_SetWanderingRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.SetSearchBox
// (Public, BlueprintCallable, BlueprintEvent)

void APFBP_EnSym_Placement_C::SetSearchBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.SetSearchBox");

	APFBP_EnSym_Placement_C_SetSearchBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.GetDatabase
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APFBP_EnSym_Placement_C::GetDatabase(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.GetDatabase");

	APFBP_EnSym_Placement_C_GetDatabase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Contains
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APFBP_EnSym_Placement_C::Contains(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Contains");

	APFBP_EnSym_Placement_C_Contains_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Rebuild
// (Public, BlueprintCallable, BlueprintEvent)

void APFBP_EnSym_Placement_C::Rebuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Rebuild");

	APFBP_EnSym_Placement_C_Rebuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Unload
// (Public, BlueprintCallable, BlueprintEvent)

void APFBP_EnSym_Placement_C::Unload()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Unload");

	APFBP_EnSym_Placement_C_Unload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.SetFlyHeight
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APFBP_EnSym_Placement_C::SetFlyHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.SetFlyHeight");

	APFBP_EnSym_Placement_C_SetFlyHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Build
// (Public, BlueprintCallable, BlueprintEvent)

void APFBP_EnSym_Placement_C::Build()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Build");

	APFBP_EnSym_Placement_C_Build_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Ground
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APFBP_EnSym_Placement_C::Ground()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Ground");

	APFBP_EnSym_Placement_C_Ground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.IsLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APFBP_EnSym_Placement_C::IsLoaded(bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.IsLoaded");

	APFBP_EnSym_Placement_C_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Preload
// (Public, BlueprintCallable, BlueprintEvent)

void APFBP_EnSym_Placement_C::Preload()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.Preload");

	APFBP_EnSym_Placement_C_Preload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.SetRange
// (Private, BlueprintCallable, BlueprintEvent)

void APFBP_EnSym_Placement_C::SetRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.SetRange");

	APFBP_EnSym_Placement_C_SetRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.InitSplinePoint
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APFBP_EnSym_Placement_C::InitSplinePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.InitSplinePoint");

	APFBP_EnSym_Placement_C_InitSplinePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.GetBlueprint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APFBP_EnSym_Placement_C::GetBlueprint(class UClass** Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.GetBlueprint");

	APFBP_EnSym_Placement_C_GetBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Class != nullptr)
		*Class = params.Class;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APFBP_EnSym_Placement_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.UserConstructionScript");

	APFBP_EnSym_Placement_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APFBP_EnSym_Placement_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.ReceiveEndPlay");

	APFBP_EnSym_Placement_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APFBP_EnSym_Placement_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.ReceiveBeginPlay");

	APFBP_EnSym_Placement_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.ExecuteUbergraph_PFBP_EnSym_Placement
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APFBP_EnSym_Placement_C::ExecuteUbergraph_PFBP_EnSym_Placement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.ExecuteUbergraph_PFBP_EnSym_Placement");

	APFBP_EnSym_Placement_C_ExecuteUbergraph_PFBP_EnSym_Placement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.OnSpawnEventWithPlacment__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFBP_EnSym_Placement_C* Placement                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_EncountSymbolBase_C* Symbol                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APFBP_EnSym_Placement_C::OnSpawnEventWithPlacment__DelegateSignature(class APFBP_EnSym_Placement_C* Placement, class ABP_EncountSymbolBase_C* Symbol)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.OnSpawnEventWithPlacment__DelegateSignature");

	APFBP_EnSym_Placement_C_OnSpawnEventWithPlacment__DelegateSignature_Params params;
	params.Placement = Placement;
	params.Symbol = Symbol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.OnSpawnEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFEncountSymbol*        Symbol                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APFBP_EnSym_Placement_C::OnSpawnEvent__DelegateSignature(class APFEncountSymbol* Symbol)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_Placement.PFBP_EnSym_Placement_C.OnSpawnEvent__DelegateSignature");

	APFBP_EnSym_Placement_C_OnSpawnEvent__DelegateSignature_Params params;
	params.Symbol = Symbol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
