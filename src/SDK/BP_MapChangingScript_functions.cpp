
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

// Function BP_MapChangingScript.BP_MapChangingScript_C.TrimAreaName
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 iAreaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 oAreaName                      (Parm, OutParm, ZeroConstructor)

void ABP_MapChangingScript_C::TrimAreaName(const struct FString& iAreaName, struct FString* oAreaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapChangingScript.BP_MapChangingScript_C.TrimAreaName");

	ABP_MapChangingScript_C_TrimAreaName_Params params;
	params.iAreaName = iAreaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (oAreaName != nullptr)
		*oAreaName = params.oAreaName;
}


// Function BP_MapChangingScript.BP_MapChangingScript_C.PlaySE
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SELabel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MapChangingScript_C::PlaySE(const struct FString& SELabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapChangingScript.BP_MapChangingScript_C.PlaySE");

	ABP_MapChangingScript_C_PlaySE_Params params;
	params.SELabel = SELabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapChangingScript.BP_MapChangingScript_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MapChangingScript_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapChangingScript.BP_MapChangingScript_C.UserConstructionScript");

	ABP_MapChangingScript_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapChangingScript.BP_MapChangingScript_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapChangingScript_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapChangingScript.BP_MapChangingScript_C.ReceiveBeginPlay");

	ABP_MapChangingScript_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapChangingScript.BP_MapChangingScript_C.OnMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MapChangingScript_C::OnMapChange(const struct FString& OldMapName, const struct FString& NewMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapChangingScript.BP_MapChangingScript_C.OnMapChange");

	ABP_MapChangingScript_C_OnMapChange_Params params;
	params.OldMapName = OldMapName;
	params.NewMapName = NewMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapChangingScript.BP_MapChangingScript_C.PlayMapOutSE
// (BlueprintCallable, BlueprintEvent)

void ABP_MapChangingScript_C::PlayMapOutSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapChangingScript.BP_MapChangingScript_C.PlayMapOutSE");

	ABP_MapChangingScript_C_PlayMapOutSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapChangingScript.BP_MapChangingScript_C.ExecuteUbergraph_BP_MapChangingScript
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapChangingScript_C::ExecuteUbergraph_BP_MapChangingScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapChangingScript.BP_MapChangingScript_C.ExecuteUbergraph_BP_MapChangingScript");

	ABP_MapChangingScript_C_ExecuteUbergraph_BP_MapChangingScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
