#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UPFBP_EnSym_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C");
		return ptr;
	}


	void STATIC_IsCancelEncount(class UObject* __WorldContext, bool* Result);
	void STATIC_EnableBattleEncountSymbol(const struct FString& actorId, bool Enable, class UObject* __WorldContext);
	void STATIC_IsBattleEncountSymbol(const struct FString& actorId, class UObject* __WorldContext, bool* Result);
	void STATIC_SetBattleEncountSymbol(const struct FString& actorId, class UObject* __WorldContext);
	void STATIC_IsValidEncountSymbolSaveData(const struct FString& actorId, class UObject* __WorldContext, bool* Result);
	void STATIC_IsMapVisibleEncountSymbol(const struct FString& actorId, class UObject* __WorldContext, bool* Result);
	void STATIC_SetMapVisibleEncountSymbol(const struct FString& actorId, bool Enable, class UObject* __WorldContext);
	void STATIC_IsDiscoverEncountSymbol(const struct FString& actorId, class UObject* __WorldContext, bool* Result);
	void STATIC_GetSaveData(class UObject* __WorldContext, class UBP_EncountSymbolSaveData_C** SaveData);
	void STATIC_SetDiscoverEncountSymbol(const struct FString& actorId, class UObject* __WorldContext);
	void STATIC_IsSwim(class UObject* __WorldContext, bool* Result);
	void STATIC_IsPauseSymbol(class UObject* __WorldContext, bool* Pause);
	void STATIC_IsLockEncount(class UObject* __WorldContext, bool* Lock);
	void STATIC_VisibleEncountSymbol(class UObject* __WorldContext);
	void STATIC_HideEncountSymbol(class UObject* __WorldContext);
	bool STATIC_CanTurn(class APFEncountSymbol* Symbol, const struct FVector& Location, float TurnAngle, class UObject* __WorldContext);
	void STATIC_GetDifferenceNorYawFromVector(class AActor* From, const struct FVector& To, class UObject* __WorldContext, float* Abs, float* NorYaw);
	void STATIC_IsCanSpawn(class UObject* __WorldContext);
	void STATIC_AIRangeRandomValue(float Min, float Max, class UObject* __WorldContext, float* Result);
	void STATIC_AIConstantProb(int Prob, class UObject* __WorldContext, bool* Result);
	void STATIC_RInterpToTarget(class AActor* Character, const struct FRotator& Target, float DeltaTime, float InterpSpeed, float Allowance, class UObject* __WorldContext, bool* Result);
	void STATIC_LookAtTarget(class AActor* Character, const struct FVector& Target, class UObject* __WorldContext);
	void STATIC_MoveToWorldDirection(class ACharacter* Character, const struct FVector& WorldDirection, float Scale, bool IsOrientLock, class UObject* __WorldContext);
	void STATIC_DestroyComponentInternal(class UActorComponent* Component, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
