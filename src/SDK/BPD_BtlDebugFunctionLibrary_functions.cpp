
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

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.GetCostumeRandom
// (Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  TargetID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    BodyCostume                    (Parm, OutParm, ZeroConstructor)
// TArray<int>                    HairCostume                    (Parm, OutParm, ZeroConstructor)
// TArray<int>                    AttachmentCostume              (Parm, OutParm, ZeroConstructor)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_GetCostumeRandom(EArisePartyID TargetID, class UObject* __WorldContext, TArray<int>* BodyCostume, TArray<int>* HairCostume, TArray<int>* AttachmentCostume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.GetCostumeRandom");

	UBPD_BtlDebugFunctionLibrary_C_GetCostumeRandom_Params params;
	params.TargetID = TargetID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BodyCostume != nullptr)
		*BodyCostume = params.BodyCostume;
	if (HairCostume != nullptr)
		*HairCostume = params.HairCostume;
	if (AttachmentCostume != nullptr)
		*AttachmentCostume = params.AttachmentCostume;
}


// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.ApplyBattleSandboxUnitCostumeRandom
// (Static, Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_ApplyBattleSandboxUnitCostumeRandom(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.ApplyBattleSandboxUnitCostumeRandom");

	UBPD_BtlDebugFunctionLibrary_C_ApplyBattleSandboxUnitCostumeRandom_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.Debug_BattleUnitDead
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DeadUnit                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_Debug_BattleUnitDead(class ABtlCharacterBase* DeadUnit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.Debug_BattleUnitDead");

	UBPD_BtlDebugFunctionLibrary_C_Debug_BattleUnitDead_Params params;
	params.DeadUnit = DeadUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.ApplyBattleSandboxUnitCostume
// (Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleSandboxCostumeV2 CostumeParameter               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_ApplyBattleSandboxUnitCostume(const struct FBattleSandboxCostumeV2& CostumeParameter, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.ApplyBattleSandboxUnitCostume");

	UBPD_BtlDebugFunctionLibrary_C_ApplyBattleSandboxUnitCostume_Params params;
	params.CostumeParameter = CostumeParameter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawNavPath
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PathStart                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 PathEnd                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_DrawNavPath(class ABtlCharacterBase* BtlCharacter, const struct FVector& PathStart, const struct FVector& PathEnd, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawNavPath");

	UBPD_BtlDebugFunctionLibrary_C_DrawNavPath_Params params;
	params.BtlCharacter = BtlCharacter;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawArtsArea
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_DrawArtsArea(class ABtlCharacterBase* BtlCharacter, const struct FName& ArtsLabel, const struct FLinearColor& Color, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawArtsArea");

	UBPD_BtlDebugFunctionLibrary_C_DrawArtsArea_Params params;
	params.BtlCharacter = BtlCharacter;
	params.ArtsLabel = ArtsLabel;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawEQSScore
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* EQSQueryInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_DrawEQSScore(class UEnvQueryInstanceBlueprintWrapper* EQSQueryInstance, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawEQSScore");

	UBPD_BtlDebugFunctionLibrary_C_DrawEQSScore_Params params;
	params.EQSQueryInstance = EQSQueryInstance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawHateList
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_DrawHateList(class ABtlCharacterBase* BtlCharacter, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawHateList");

	UBPD_BtlDebugFunctionLibrary_C_DrawHateList_Params params;
	params.BtlCharacter = BtlCharacter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawDebugText2DPos
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 DrawString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_DrawDebugText2DPos(const struct FString& DrawString, const struct FLinearColor& Color, float X, float Y, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawDebugText2DPos");

	UBPD_BtlDebugFunctionLibrary_C_DrawDebugText2DPos_Params params;
	params.DrawString = DrawString;
	params.Color = Color;
	params.X = X;
	params.Y = Y;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawDebugBattleState
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_DrawDebugBattleState(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawDebugBattleState");

	UBPD_BtlDebugFunctionLibrary_C_DrawDebugBattleState_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawDebugText2D
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_DrawDebugText2D(const struct FString& Text, const struct FLinearColor& Color, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawDebugText2D");

	UBPD_BtlDebugFunctionLibrary_C_DrawDebugText2D_Params params;
	params.Text = Text;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.BtlLose
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_BtlLose(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.BtlLose");

	UBPD_BtlDebugFunctionLibrary_C_BtlLose_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.BtlWin
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_BtlWin(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.BtlWin");

	UBPD_BtlDebugFunctionLibrary_C_BtlWin_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.ApplyBattleSandboxParty
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_ApplyBattleSandboxParty(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.ApplyBattleSandboxParty");

	UBPD_BtlDebugFunctionLibrary_C_ApplyBattleSandboxParty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.ApplyBattleSandboxScenario
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_ApplyBattleSandboxScenario(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.ApplyBattleSandboxScenario");

	UBPD_BtlDebugFunctionLibrary_C_ApplyBattleSandboxScenario_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.ApplyBattleSandboxCostume
// (Static, Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPD_BtlDebugFunctionLibrary_C::STATIC_ApplyBattleSandboxCostume(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.ApplyBattleSandboxCostume");

	UBPD_BtlDebugFunctionLibrary_C_ApplyBattleSandboxCostume_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
