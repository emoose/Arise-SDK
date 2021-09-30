
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

// Function BP_EncountManager.BP_EncountManager_C.BPE_IsLoadedSymbolAssets
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EncountManager_C::BPE_IsLoadedSymbolAssets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.BPE_IsLoadedSymbolAssets");

	ABP_EncountManager_C_BPE_IsLoadedSymbolAssets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountManager.BP_EncountManager_C.UpdateSearchRangeMagnify
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::UpdateSearchRangeMagnify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.UpdateSearchRangeMagnify");

	ABP_EncountManager_C_UpdateSearchRangeMagnify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.UpdateViewAngleMagnifty
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::UpdateViewAngleMagnifty()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.UpdateViewAngleMagnifty");

	ABP_EncountManager_C_UpdateViewAngleMagnifty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.UpdateViewDistanceMagnify
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::UpdateViewDistanceMagnify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.UpdateViewDistanceMagnify");

	ABP_EncountManager_C_UpdateViewDistanceMagnify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.BPE_GetMinimapRange
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OutRange                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::BPE_GetMinimapRange(float* OutRange, float* OutHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.BPE_GetMinimapRange");

	ABP_EncountManager_C_BPE_GetMinimapRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRange != nullptr)
		*OutRange = params.OutRange;
	if (OutHeight != nullptr)
		*OutHeight = params.OutHeight;
}


// Function BP_EncountManager.BP_EncountManager_C.OnChangeStateImpl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::OnChangeStateImpl(EAriseGameState ChangedState, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnChangeStateImpl");

	ABP_EncountManager_C_OnChangeStateImpl_Params params;
	params.ChangedState = ChangedState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.BPE_GetEncountSurroundHeight
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_EncountManager_C::BPE_GetEncountSurroundHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.BPE_GetEncountSurroundHeight");

	ABP_EncountManager_C_BPE_GetEncountSurroundHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountManager.BP_EncountManager_C.LoadBattleAssetAll
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::LoadBattleAssetAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.LoadBattleAssetAll");

	ABP_EncountManager_C_LoadBattleAssetAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.SetEncountingState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::SetEncountingState(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.SetEncountingState");

	ABP_EncountManager_C_SetEncountingState_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.BPE_GetLevelDiffValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_EncountManager_C::BPE_GetLevelDiffValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.BPE_GetLevelDiffValue");

	ABP_EncountManager_C_BPE_GetLevelDiffValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountManager.BP_EncountManager_C.SetBtlResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlResultInfo          BtlResultInfo                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_EncountManager_C::SetBtlResult(const struct FBtlResultInfo& BtlResultInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.SetBtlResult");

	ABP_EncountManager_C_SetBtlResult_Params params;
	params.BtlResultInfo = BtlResultInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.BPE_GetEncountSurroundDistance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_EncountManager_C::BPE_GetEncountSurroundDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.BPE_GetEncountSurroundDistance");

	ABP_EncountManager_C_BPE_GetEncountSurroundDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountManager.BP_EncountManager_C.BPE_GetBattleBonusEndValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_EncountManager_C::BPE_GetBattleBonusEndValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.BPE_GetBattleBonusEndValue");

	ABP_EncountManager_C_BPE_GetBattleBonusEndValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountManager.BP_EncountManager_C.BPE_GetBattleBonusDeduction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_EncountManager_C::BPE_GetBattleBonusDeduction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.BPE_GetBattleBonusDeduction");

	ABP_EncountManager_C_BPE_GetBattleBonusDeduction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountManager.BP_EncountManager_C.ResetBattleFlag
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::ResetBattleFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.ResetBattleFlag");

	ABP_EncountManager_C_ResetBattleFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.ApplyCookSkill
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::ApplyCookSkill(float In, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.ApplyCookSkill");

	ABP_EncountManager_C_ApplyCookSkill_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_EncountManager.BP_EncountManager_C.IsInSECautionRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  InSymbol                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsHitRange                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsHitShortRange             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::IsInSECautionRange(class AActor* InSymbol, bool* OutIsHitRange, bool* OutIsHitShortRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.IsInSECautionRange");

	ABP_EncountManager_C_IsInSECautionRange_Params params;
	params.InSymbol = InSymbol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsHitRange != nullptr)
		*OutIsHitRange = params.OutIsHitRange;
	if (OutIsHitShortRange != nullptr)
		*OutIsHitShortRange = params.OutIsHitShortRange;
}


// Function BP_EncountManager.BP_EncountManager_C.CreateEncountEffect
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EncountScreenMask_C* ScreenMask                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::CreateEncountEffect(class ABP_EncountScreenMask_C** ScreenMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.CreateEncountEffect");

	ABP_EncountManager_C_CreateEncountEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenMask != nullptr)
		*ScreenMask = params.ScreenMask;
}


// Function BP_EncountManager.BP_EncountManager_C.IsInCautionRange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EncountManager_C::IsInCautionRange(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.IsInCautionRange");

	ABP_EncountManager_C_IsInCautionRange_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountManager.BP_EncountManager_C.GetSymbolsWithinCautionRange
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>          OutSymbols                     (Parm, OutParm, ZeroConstructor)

void ABP_EncountManager_C::GetSymbolsWithinCautionRange(TArray<class AActor*>* OutSymbols)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.GetSymbolsWithinCautionRange");

	ABP_EncountManager_C_GetSymbolsWithinCautionRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSymbols != nullptr)
		*OutSymbols = params.OutSymbols;
}


// Function BP_EncountManager.BP_EncountManager_C.RespawnSymbol
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::RespawnSymbol()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.RespawnSymbol");

	ABP_EncountManager_C_RespawnSymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.IsCaution
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EncountManager_C::IsCaution()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.IsCaution");

	ABP_EncountManager_C_IsCaution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountManager.BP_EncountManager_C.OnGetInteractionProhibitedRange
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReactHorizontalDistance        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReactVerticalDistance          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::OnGetInteractionProhibitedRange(float* ReactHorizontalDistance, float* ReactVerticalDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnGetInteractionProhibitedRange");

	ABP_EncountManager_C_OnGetInteractionProhibitedRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReactHorizontalDistance != nullptr)
		*ReactHorizontalDistance = params.ReactHorizontalDistance;
	if (ReactVerticalDistance != nullptr)
		*ReactVerticalDistance = params.ReactVerticalDistance;
}


// Function BP_EncountManager.BP_EncountManager_C.GetSearchRangeMagnify
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_EncountManager_C::GetSearchRangeMagnify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.GetSearchRangeMagnify");

	ABP_EncountManager_C_GetSearchRangeMagnify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountManager.BP_EncountManager_C.GetViewAngleMagnify
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_EncountManager_C::GetViewAngleMagnify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.GetViewAngleMagnify");

	ABP_EncountManager_C_GetViewAngleMagnify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountManager.BP_EncountManager_C.GetViewDistanceMagnify
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_EncountManager_C::GetViewDistanceMagnify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.GetViewDistanceMagnify");

	ABP_EncountManager_C_GetViewDistanceMagnify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountManager.BP_EncountManager_C.RemoveEncountMAPOBJ
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MapObj                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::RemoveEncountMAPOBJ(class AActor* MapObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.RemoveEncountMAPOBJ");

	ABP_EncountManager_C_RemoveEncountMAPOBJ_Params params;
	params.MapObj = MapObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.AddEncountMAPOBJ
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MapObj                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::AddEncountMAPOBJ(class AActor* MapObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.AddEncountMAPOBJ");

	ABP_EncountManager_C_AddEncountMAPOBJ_Params params;
	params.MapObj = MapObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.EndOfBattleScene
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::EndOfBattleScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.EndOfBattleScene");

	ABP_EncountManager_C_EndOfBattleScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.OnGetSurroundEncountMAPOBJNames
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InMAPOBJ                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlEncountGroupParam   Param                          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EncountManager_C::OnGetSurroundEncountMAPOBJNames(class AActor* InMAPOBJ, struct FBtlEncountGroupParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnGetSurroundEncountMAPOBJNames");

	ABP_EncountManager_C_OnGetSurroundEncountMAPOBJNames_Params params;
	params.InMAPOBJ = InMAPOBJ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;

	return params.ReturnValue;
}


// Function BP_EncountManager.BP_EncountManager_C.UnloadBattleAssetAll
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::UnloadBattleAssetAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.UnloadBattleAssetAll");

	ABP_EncountManager_C_UnloadBattleAssetAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.OnGetSurroundEncountGroupNames
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         EncountGroupNames              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AEncountGroup*           InGroup                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlEncountGroupParam   Param                          (Parm, OutParm)
// struct FString                 EncountGroupName               (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EncountManager_C::OnGetSurroundEncountGroupNames(TArray<struct FString> EncountGroupNames, class AEncountGroup* InGroup, struct FBtlEncountGroupParam* Param, struct FString* EncountGroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnGetSurroundEncountGroupNames");

	ABP_EncountManager_C_OnGetSurroundEncountGroupNames_Params params;
	params.EncountGroupNames = EncountGroupNames;
	params.InGroup = InGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;
	if (EncountGroupName != nullptr)
		*EncountGroupName = params.EncountGroupName;

	return params.ReturnValue;
}


// Function BP_EncountManager.BP_EncountManager_C.OnGetEncountGroupNames
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AutoSymbolName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class AEncountGroup*           InGroup                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlEncountGroupParam   Param                          (Parm, OutParm)
// struct FString                 EncountGroupName               (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EncountManager_C::OnGetEncountGroupNames(const struct FString& AutoSymbolName, class AEncountGroup* InGroup, struct FBtlEncountGroupParam* Param, struct FString* EncountGroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnGetEncountGroupNames");

	ABP_EncountManager_C_OnGetEncountGroupNames_Params params;
	params.AutoSymbolName = AutoSymbolName;
	params.InGroup = InGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;
	if (EncountGroupName != nullptr)
		*EncountGroupName = params.EncountGroupName;

	return params.ReturnValue;
}


// Function BP_EncountManager.BP_EncountManager_C.GetBattleBonusDecValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_EnSym_Bonus>  Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::GetBattleBonusDecValue(TEnumAsByte<ENUM_EnSym_Bonus> Index, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.GetBattleBonusDecValue");

	ABP_EncountManager_C_GetBattleBonusDecValue_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_EncountManager.BP_EncountManager_C.GetBonusGaugeData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_EnSym_Bonus>  Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::GetBonusGaugeData(TEnumAsByte<ENUM_EnSym_Bonus> Index, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.GetBonusGaugeData");

	ABP_EncountManager_C_GetBonusGaugeData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_EncountManager.BP_EncountManager_C.UpdateRareGroup
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::UpdateRareGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.UpdateRareGroup");

	ABP_EncountManager_C_UpdateRareGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.EncountLinkImpl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFEncountSymbol*        Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::EncountLinkImpl(class APFEncountSymbol* Spawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.EncountLinkImpl");

	ABP_EncountManager_C_EncountLinkImpl_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.DestroyAllSymbol
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::DestroyAllSymbol()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.DestroyAllSymbol");

	ABP_EncountManager_C_DestroyAllSymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.GetDataTable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_EnSym_Encount> Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          A                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          B                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            INT_A                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            INT_B                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::GetDataTable(TEnumAsByte<ENUM_EnSym_Encount> Index, float* A, float* B, int* INT_A, int* INT_B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.GetDataTable");

	ABP_EncountManager_C_GetDataTable_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;
	if (B != nullptr)
		*B = params.B;
	if (INT_A != nullptr)
		*INT_A = params.INT_A;
	if (INT_B != nullptr)
		*INT_B = params.INT_B;
}


// Function BP_EncountManager.BP_EncountManager_C.InitDataTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::InitDataTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.InitDataTable");

	ABP_EncountManager_C_InitDataTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.SetEncountGroupState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::SetEncountGroupState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.SetEncountGroupState");

	ABP_EncountManager_C_SetEncountGroupState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.GetEncountGroupNames
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EncountSymbolName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FBtlEncountGroupParam> Groups                         (Parm, OutParm, ZeroConstructor)

void ABP_EncountManager_C::GetEncountGroupNames(const struct FString& EncountSymbolName, TArray<struct FBtlEncountGroupParam>* Groups)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.GetEncountGroupNames");

	ABP_EncountManager_C_GetEncountGroupNames_Params params;
	params.EncountSymbolName = EncountSymbolName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Groups != nullptr)
		*Groups = params.Groups;
}


// Function BP_EncountManager.BP_EncountManager_C.ClearEncountItems
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::ClearEncountItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.ClearEncountItems");

	ABP_EncountManager_C_ClearEncountItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.DoEncount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BattleMapName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_EncountManager_C::DoEncount(const struct FString& BattleMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.DoEncount");

	ABP_EncountManager_C_DoEncount_Params params;
	params.BattleMapName = BattleMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.UserConstructionScript");

	ABP_EncountManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.OnPreMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_EncountManager_C::OnPreMapChange(const struct FString& OldMapName, const struct FString& NewMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnPreMapChange");

	ABP_EncountManager_C_OnPreMapChange_Params params;
	params.OldMapName = OldMapName;
	params.NewMapName = NewMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.OnPostMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_EncountManager_C::OnPostMapChange(const struct FString& OldMapName, const struct FString& NewMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnPostMapChange");

	ABP_EncountManager_C_OnPostMapChange_Params params;
	params.OldMapName = OldMapName;
	params.NewMapName = NewMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.BPE_OnChangeDisplayScene
// (Event, Public, BlueprintEvent)
// Parameters:
// EAriseGameScene                ChangedScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAriseGameScene                OldScene                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::BPE_OnChangeDisplayScene(EAriseGameScene ChangedScene, EAriseGameScene OldScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.BPE_OnChangeDisplayScene");

	ABP_EncountManager_C_BPE_OnChangeDisplayScene_Params params;
	params.ChangedScene = ChangedScene;
	params.OldScene = OldScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.OnBattleStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAccept                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::OnBattleStart(bool bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnBattleStart");

	ABP_EncountManager_C_OnBattleStart_Params params;
	params.bAccept = bAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.OnBattleEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::OnBattleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnBattleEnd");

	ABP_EncountManager_C_OnBattleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.OnFinalizeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OptionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_EncountManager_C::OnFinalizeEvent(const struct FString& EventName, const struct FString& OptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnFinalizeEvent");

	ABP_EncountManager_C_OnFinalizeEvent_Params params;
	params.EventName = EventName;
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.BPE_OutCamp
// (Event, Public, BlueprintEvent)

void ABP_EncountManager_C::BPE_OutCamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.BPE_OutCamp");

	ABP_EncountManager_C_BPE_OutCamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.OnEndBattleScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlResultInfo          ResultInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_EncountManager_C::OnEndBattleScene(const struct FBtlResultInfo& ResultInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnEndBattleScene");

	ABP_EncountManager_C_OnEndBattleScene_Params params;
	params.ResultInfo = ResultInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.InitCallback
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::InitCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.InitCallback");

	ABP_EncountManager_C_InitCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.OnBattleWakeup
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::OnBattleWakeup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnBattleWakeup");

	ABP_EncountManager_C_OnBattleWakeup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.OnGoBackTitleEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::OnGoBackTitleEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnGoBackTitleEvent");

	ABP_EncountManager_C_OnGoBackTitleEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.OnChangeStateBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::OnChangeStateBP(EAriseGameState ChangedState, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnChangeStateBP");

	ABP_EncountManager_C_OnChangeStateBP_Params params;
	params.ChangedState = ChangedState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.OnPostWakeupShowPlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::OnPostWakeupShowPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnPostWakeupShowPlayer");

	ABP_EncountManager_C_OnPostWakeupShowPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.DoEncountImpl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BattleMapName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_EncountManager_C::DoEncountImpl(const struct FString& BattleMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.DoEncountImpl");

	ABP_EncountManager_C_DoEncountImpl_Params params;
	params.BattleMapName = BattleMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EncountManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.ReceiveBeginPlay");

	ABP_EncountManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.OnReleaseBattleAsset
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountManager_C::OnReleaseBattleAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnReleaseBattleAsset");

	ABP_EncountManager_C_OnReleaseBattleAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.OnPlayEvent
// (Event, Public, BlueprintEvent)

void ABP_EncountManager_C::OnPlayEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.OnPlayEvent");

	ABP_EncountManager_C_OnPlayEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.ReceiveEndPlay");

	ABP_EncountManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.ReceiveTick");

	ABP_EncountManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountManager.BP_EncountManager_C.ExecuteUbergraph_BP_EncountManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountManager_C::ExecuteUbergraph_BP_EncountManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountManager.BP_EncountManager_C.ExecuteUbergraph_BP_EncountManager");

	ABP_EncountManager_C_ExecuteUbergraph_BP_EncountManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
