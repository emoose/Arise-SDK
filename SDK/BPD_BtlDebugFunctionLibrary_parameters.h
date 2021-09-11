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

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.GetCostumeRandom
struct UBPD_BtlDebugFunctionLibrary_C_GetCostumeRandom_Params
{
	EArisePartyID                                      TargetID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BodyCostume;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        HairCostume;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        AttachmentCostume;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.ApplyBattleSandboxUnitCostumeRandom
struct UBPD_BtlDebugFunctionLibrary_C_ApplyBattleSandboxUnitCostumeRandom_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.Debug_BattleUnitDead
struct UBPD_BtlDebugFunctionLibrary_C_Debug_BattleUnitDead_Params
{
	class ABtlCharacterBase*                           DeadUnit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.ApplyBattleSandboxUnitCostume
struct UBPD_BtlDebugFunctionLibrary_C_ApplyBattleSandboxUnitCostume_Params
{
	struct FBattleSandboxCostumeV2                     CostumeParameter;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawNavPath
struct UBPD_BtlDebugFunctionLibrary_C_DrawNavPath_Params
{
	class ABtlCharacterBase*                           BtlCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PathStart;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     PathEnd;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawArtsArea
struct UBPD_BtlDebugFunctionLibrary_C_DrawArtsArea_Params
{
	class ABtlCharacterBase*                           BtlCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawEQSScore
struct UBPD_BtlDebugFunctionLibrary_C_DrawEQSScore_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           EQSQueryInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawHateList
struct UBPD_BtlDebugFunctionLibrary_C_DrawHateList_Params
{
	class ABtlCharacterBase*                           BtlCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawDebugText2DPos
struct UBPD_BtlDebugFunctionLibrary_C_DrawDebugText2DPos_Params
{
	struct FString                                     DrawString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawDebugBattleState
struct UBPD_BtlDebugFunctionLibrary_C_DrawDebugBattleState_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.DrawDebugText2D
struct UBPD_BtlDebugFunctionLibrary_C_DrawDebugText2D_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.BtlLose
struct UBPD_BtlDebugFunctionLibrary_C_BtlLose_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.BtlWin
struct UBPD_BtlDebugFunctionLibrary_C_BtlWin_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.ApplyBattleSandboxParty
struct UBPD_BtlDebugFunctionLibrary_C_ApplyBattleSandboxParty_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.ApplyBattleSandboxScenario
struct UBPD_BtlDebugFunctionLibrary_C_ApplyBattleSandboxScenario_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C.ApplyBattleSandboxCostume
struct UBPD_BtlDebugFunctionLibrary_C_ApplyBattleSandboxCostume_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
