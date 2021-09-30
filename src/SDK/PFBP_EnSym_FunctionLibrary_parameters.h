#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsCancelEncount
struct UPFBP_EnSym_FunctionLibrary_C_IsCancelEncount_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.EnableBattleEncountSymbol
struct UPFBP_EnSym_FunctionLibrary_C_EnableBattleEncountSymbol_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsBattleEncountSymbol
struct UPFBP_EnSym_FunctionLibrary_C_IsBattleEncountSymbol_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.SetBattleEncountSymbol
struct UPFBP_EnSym_FunctionLibrary_C_SetBattleEncountSymbol_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsValidEncountSymbolSaveData
struct UPFBP_EnSym_FunctionLibrary_C_IsValidEncountSymbolSaveData_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsMapVisibleEncountSymbol
struct UPFBP_EnSym_FunctionLibrary_C_IsMapVisibleEncountSymbol_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.SetMapVisibleEncountSymbol
struct UPFBP_EnSym_FunctionLibrary_C_SetMapVisibleEncountSymbol_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsDiscoverEncountSymbol
struct UPFBP_EnSym_FunctionLibrary_C_IsDiscoverEncountSymbol_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.GetSaveData
struct UPFBP_EnSym_FunctionLibrary_C_GetSaveData_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_EncountSymbolSaveData_C*                 SaveData;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.SetDiscoverEncountSymbol
struct UPFBP_EnSym_FunctionLibrary_C_SetDiscoverEncountSymbol_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsSwim
struct UPFBP_EnSym_FunctionLibrary_C_IsSwim_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsPauseSymbol
struct UPFBP_EnSym_FunctionLibrary_C_IsPauseSymbol_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Pause;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsLockEncount
struct UPFBP_EnSym_FunctionLibrary_C_IsLockEncount_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Lock;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.VisibleEncountSymbol
struct UPFBP_EnSym_FunctionLibrary_C_VisibleEncountSymbol_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.HideEncountSymbol
struct UPFBP_EnSym_FunctionLibrary_C_HideEncountSymbol_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.CanTurn
struct UPFBP_EnSym_FunctionLibrary_C_CanTurn_Params
{
	class APFEncountSymbol*                            Symbol;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              TurnAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.GetDifferenceNorYawFromVector
struct UPFBP_EnSym_FunctionLibrary_C_GetDifferenceNorYawFromVector_Params
{
	class AActor*                                      From;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     To;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Abs;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NorYaw;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.IsCanSpawn
struct UPFBP_EnSym_FunctionLibrary_C_IsCanSpawn_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.AIRangeRandomValue
struct UPFBP_EnSym_FunctionLibrary_C_AIRangeRandomValue_Params
{
	float                                              Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.AIConstantProb
struct UPFBP_EnSym_FunctionLibrary_C_AIConstantProb_Params
{
	int                                                Prob;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.RInterpToTarget
struct UPFBP_EnSym_FunctionLibrary_C_RInterpToTarget_Params
{
	class AActor*                                      Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Allowance;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.LookAtTarget
struct UPFBP_EnSym_FunctionLibrary_C_LookAtTarget_Params
{
	class AActor*                                      Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.MoveToWorldDirection
struct UPFBP_EnSym_FunctionLibrary_C_MoveToWorldDirection_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldDirection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOrientLock;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFBP_EnSym_FunctionLibrary.PFBP_EnSym_FunctionLibrary_C.DestroyComponentInternal
struct UPFBP_EnSym_FunctionLibrary_C_DestroyComponentInternal_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
