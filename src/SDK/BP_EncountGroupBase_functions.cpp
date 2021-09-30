
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

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_EncountGroupBase_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetOutlinerFolderPath");

	ABP_EncountGroupBase_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_EncountGroupBase_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetOutlinerLabelName");

	ABP_EncountGroupBase_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetBattleAssetUser
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 AutoSymbolName                 (Parm, OutParm, ZeroConstructor)
// struct FString                 MapName                        (Parm, OutParm, ZeroConstructor)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_EncountGroupBase_C::GetBattleAssetUser(struct FString* AutoSymbolName, struct FString* MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetBattleAssetUser");

	ABP_EncountGroupBase_C_GetBattleAssetUser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AutoSymbolName != nullptr)
		*AutoSymbolName = params.AutoSymbolName;
	if (MapName != nullptr)
		*MapName = params.MapName;

	return params.ReturnValue;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetBtlMapName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (Parm, OutParm, ZeroConstructor)

void ABP_EncountGroupBase_C::GetBtlMapName(struct FString* MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetBtlMapName");

	ABP_EncountGroupBase_C_GetBtlMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapName != nullptr)
		*MapName = params.MapName;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.SetEncountSymbolState
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroupBase_C::SetEncountSymbolState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.SetEncountSymbolState");

	ABP_EncountGroupBase_C_SetEncountSymbolState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.SetEncountGroupNames
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroupBase_C::SetEncountGroupNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.SetEncountGroupNames");

	ABP_EncountGroupBase_C_SetEncountGroupNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.DoEncountRequest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Encount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEncountAccept                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroupBase_C::DoEncountRequest(class AActor* Encount, bool* bEncountAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.DoEncountRequest");

	ABP_EncountGroupBase_C_DoEncountRequest_Params params;
	params.Encount = Encount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEncountAccept != nullptr)
		*bEncountAccept = params.bEncountAccept;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetIDName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroupBase_C::GetIDName(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetIDName");

	ABP_EncountGroupBase_C_GetIDName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetDistanceToPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroupBase_C::GetDistanceToPlayer(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetDistanceToPlayer");

	ABP_EncountGroupBase_C_GetDistanceToPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.BattleAssetPreload
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroupBase_C::BattleAssetPreload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.BattleAssetPreload");

	ABP_EncountGroupBase_C_BattleAssetPreload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.BattleAssetUnload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForceUnload                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroupBase_C::BattleAssetUnload(bool bForceUnload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.BattleAssetUnload");

	ABP_EncountGroupBase_C_BattleAssetUnload_Params params;
	params.bForceUnload = bForceUnload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.ChangeSymbolState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEncountSymbolState            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroupBase_C::ChangeSymbolState(EEncountSymbolState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.ChangeSymbolState");

	ABP_EncountGroupBase_C_ChangeSymbolState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.RegisterSymbol
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroupBase_C::RegisterSymbol()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.RegisterSymbol");

	ABP_EncountGroupBase_C_RegisterSymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroupBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.UserConstructionScript");

	ABP_EncountGroupBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroupBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.ReceiveEndPlay");

	ABP_EncountGroupBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EncountGroupBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.ReceiveBeginPlay");

	ABP_EncountGroupBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroupBase.BP_EncountGroupBase_C.ExecuteUbergraph_BP_EncountGroupBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroupBase_C::ExecuteUbergraph_BP_EncountGroupBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroupBase.BP_EncountGroupBase_C.ExecuteUbergraph_BP_EncountGroupBase");

	ABP_EncountGroupBase_C_ExecuteUbergraph_BP_EncountGroupBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
