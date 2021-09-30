
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

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsCancelEncount
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_IsCancelEncount(class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsCancelEncount");

	UPFBP_EnSym_FunctionLibrary_C_IsCancelEncount_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.EnableBattleEncountSymbol
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_EnableBattleEncountSymbol(const struct FString& actorId, bool Enable, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.EnableBattleEncountSymbol");

	UPFBP_EnSym_FunctionLibrary_C_EnableBattleEncountSymbol_Params params;
	params.actorId = actorId;
	params.Enable = Enable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsBattleEncountSymbol
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_IsBattleEncountSymbol(const struct FString& actorId, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsBattleEncountSymbol");

	UPFBP_EnSym_FunctionLibrary_C_IsBattleEncountSymbol_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.SetBattleEncountSymbol
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_SetBattleEncountSymbol(const struct FString& actorId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.SetBattleEncountSymbol");

	UPFBP_EnSym_FunctionLibrary_C_SetBattleEncountSymbol_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsValidEncountSymbolSaveData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_IsValidEncountSymbolSaveData(const struct FString& actorId, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsValidEncountSymbolSaveData");

	UPFBP_EnSym_FunctionLibrary_C_IsValidEncountSymbolSaveData_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsMapVisibleEncountSymbol
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_IsMapVisibleEncountSymbol(const struct FString& actorId, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsMapVisibleEncountSymbol");

	UPFBP_EnSym_FunctionLibrary_C_IsMapVisibleEncountSymbol_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.SetMapVisibleEncountSymbol
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_SetMapVisibleEncountSymbol(const struct FString& actorId, bool Enable, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.SetMapVisibleEncountSymbol");

	UPFBP_EnSym_FunctionLibrary_C_SetMapVisibleEncountSymbol_Params params;
	params.actorId = actorId;
	params.Enable = Enable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsDiscoverEncountSymbol
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_IsDiscoverEncountSymbol(const struct FString& actorId, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsDiscoverEncountSymbol");

	UPFBP_EnSym_FunctionLibrary_C_IsDiscoverEncountSymbol_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.GetSaveData
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_EncountSymbolSaveData_C* SaveData                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_GetSaveData(class UObject* __WorldContext, class UBP_EncountSymbolSaveData_C** SaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.GetSaveData");

	UPFBP_EnSym_FunctionLibrary_C_GetSaveData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SaveData != nullptr)
		*SaveData = params.SaveData;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.SetDiscoverEncountSymbol
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_SetDiscoverEncountSymbol(const struct FString& actorId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.SetDiscoverEncountSymbol");

	UPFBP_EnSym_FunctionLibrary_C_SetDiscoverEncountSymbol_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsSwim
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_IsSwim(class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsSwim");

	UPFBP_EnSym_FunctionLibrary_C_IsSwim_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsPauseSymbol
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Pause                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_IsPauseSymbol(class UObject* __WorldContext, bool* Pause)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsPauseSymbol");

	UPFBP_EnSym_FunctionLibrary_C_IsPauseSymbol_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pause != nullptr)
		*Pause = params.Pause;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsLockEncount
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Lock                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_IsLockEncount(class UObject* __WorldContext, bool* Lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsLockEncount");

	UPFBP_EnSym_FunctionLibrary_C_IsLockEncount_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lock != nullptr)
		*Lock = params.Lock;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.VisibleEncountSymbol
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_VisibleEncountSymbol(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.VisibleEncountSymbol");

	UPFBP_EnSym_FunctionLibrary_C_VisibleEncountSymbol_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.HideEncountSymbol
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_HideEncountSymbol(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.HideEncountSymbol");

	UPFBP_EnSym_FunctionLibrary_C_HideEncountSymbol_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.CanTurn
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APFEncountSymbol*        Symbol                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          TurnAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPFBP_EnSym_FunctionLibrary_C::STATIC_CanTurn(class APFEncountSymbol* Symbol, const struct FVector& Location, float TurnAngle, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.CanTurn");

	UPFBP_EnSym_FunctionLibrary_C_CanTurn_Params params;
	params.Symbol = Symbol;
	params.Location = Location;
	params.TurnAngle = TurnAngle;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.GetDifferenceNorYawFromVector
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 To                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Abs                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NorYaw                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_GetDifferenceNorYawFromVector(class AActor* From, const struct FVector& To, class UObject* __WorldContext, float* Abs, float* NorYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.GetDifferenceNorYawFromVector");

	UPFBP_EnSym_FunctionLibrary_C_GetDifferenceNorYawFromVector_Params params;
	params.From = From;
	params.To = To;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Abs != nullptr)
		*Abs = params.Abs;
	if (NorYaw != nullptr)
		*NorYaw = params.NorYaw;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsCanSpawn
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_IsCanSpawn(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsCanSpawn");

	UPFBP_EnSym_FunctionLibrary_C_IsCanSpawn_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.AIRangeRandomValue
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_AIRangeRandomValue(float Min, float Max, class UObject* __WorldContext, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.AIRangeRandomValue");

	UPFBP_EnSym_FunctionLibrary_C_AIRangeRandomValue_Params params;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.AIConstantProb
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Prob                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_AIConstantProb(int Prob, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.AIConstantProb");

	UPFBP_EnSym_FunctionLibrary_C_AIConstantProb_Params params;
	params.Prob = Prob;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.RInterpToTarget
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Allowance                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_RInterpToTarget(class AActor* Character, const struct FRotator& Target, float DeltaTime, float InterpSpeed, float Allowance, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.RInterpToTarget");

	UPFBP_EnSym_FunctionLibrary_C_RInterpToTarget_Params params;
	params.Character = Character;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;
	params.Allowance = Allowance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.LookAtTarget
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_LookAtTarget(class AActor* Character, const struct FVector& Target, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.LookAtTarget");

	UPFBP_EnSym_FunctionLibrary_C_LookAtTarget_Params params;
	params.Character = Character;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.MoveToWorldDirection
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldDirection                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOrientLock                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_MoveToWorldDirection(class ACharacter* Character, const struct FVector& WorldDirection, float Scale, bool IsOrientLock, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.MoveToWorldDirection");

	UPFBP_EnSym_FunctionLibrary_C_MoveToWorldDirection_Params params;
	params.Character = Character;
	params.WorldDirection = WorldDirection;
	params.Scale = Scale;
	params.IsOrientLock = IsOrientLock;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.DestroyComponentInternal
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFBP_EnSym_FunctionLibrary_C::STATIC_DestroyComponentInternal(class UActorComponent* Component, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.DestroyComponentInternal");

	UPFBP_EnSym_FunctionLibrary_C_DestroyComponentInternal_Params params;
	params.Component = Component;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
