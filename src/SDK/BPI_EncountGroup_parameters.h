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

// Function BPI_EncountGroup.BPI_EncountGroup_C.UpdateRareStateImpl
struct UBPI_EncountGroup_C_UpdateRareStateImpl_Params
{
};

// Function BPI_EncountGroup.BPI_EncountGroup_C.SetBattleResult
struct UBPI_EncountGroup_C_SetBattleResult_Params
{
	EBtlResultType                                     Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_EncountGroup.BPI_EncountGroup_C.UnloadBattleAsset
struct UBPI_EncountGroup_C_UnloadBattleAsset_Params
{
};

// Function BPI_EncountGroup.BPI_EncountGroup_C.LoadBattleAsset
struct UBPI_EncountGroup_C_LoadBattleAsset_Params
{
};

// Function BPI_EncountGroup.BPI_EncountGroup_C.MakeSurroundEncountParameter
struct UBPI_EncountGroup_C_MakeSurroundEncountParameter_Params
{
	TArray<struct FString>                             InEncountGroupNames;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FBtlEncountGroupParam                       Param;                                                    // (Parm, OutParm)
	struct FString                                     EncountGroupName;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BPI_EncountGroup.BPI_EncountGroup_C.MakeEncountParameter
struct UBPI_EncountGroup_C_MakeEncountParameter_Params
{
	struct FString                                     InAutoSymbolName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               LockEntry;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FBtlEncountGroupParam                       Param;                                                    // (Parm, OutParm)
	struct FString                                     EncountGroupName;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BPI_EncountGroup.BPI_EncountGroup_C.ResetBattleFlagImpl
struct UBPI_EncountGroup_C_ResetBattleFlagImpl_Params
{
};

// Function BPI_EncountGroup.BPI_EncountGroup_C.RespawnSymbolImpl
struct UBPI_EncountGroup_C_RespawnSymbolImpl_Params
{
};

// Function BPI_EncountGroup.BPI_EncountGroup_C.GetUnloadBattleAssetUserImpl
struct UBPI_EncountGroup_C_GetUnloadBattleAssetUserImpl_Params
{
	bool                                               Battle;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AutoSymbolName;                                           // (Parm, OutParm, ZeroConstructor)
	struct FString                                     MapName;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FName                                       GroupID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_EncountGroup.BPI_EncountGroup_C.UnloadBattleAssetImpl
struct UBPI_EncountGroup_C_UnloadBattleAssetImpl_Params
{
};

// Function BPI_EncountGroup.BPI_EncountGroup_C.UpdateRareImpl
struct UBPI_EncountGroup_C_UpdateRareImpl_Params
{
};

// Function BPI_EncountGroup.BPI_EncountGroup_C.DeleteSymbolImpl
struct UBPI_EncountGroup_C_DeleteSymbolImpl_Params
{
};

// Function BPI_EncountGroup.BPI_EncountGroup_C.SetEncountBattleStateImpl
struct UBPI_EncountGroup_C_SetEncountBattleStateImpl_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
