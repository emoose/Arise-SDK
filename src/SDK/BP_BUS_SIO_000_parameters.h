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

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnFilterComboArts
struct UBP_BUS_SIO_000_C_OnFilterComboArts_Params
{
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.InitializeBombBullet
struct UBP_BUS_SIO_000_C_InitializeBombBullet_Params
{
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.GetBombBulletMax
struct UBP_BUS_SIO_000_C_GetBombBulletMax_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.GetBombBullet
struct UBP_BUS_SIO_000_C_GetBombBullet_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnRequestArtsMagicOverride
struct UBP_BUS_SIO_000_C_OnRequestArtsMagicOverride_Params
{
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreArtsCost;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.TryExplodeArts
struct UBP_BUS_SIO_000_C_TryExplodeArts_Params
{
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.PlayExplodeArts
struct UBP_BUS_SIO_000_C_PlayExplodeArts_Params
{
	struct FName                                       UniqueArtsLabel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.CanReload
struct UBP_BUS_SIO_000_C_CanReload_Params
{
	bool                                               AutoReload;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.CanExplodeArts
struct UBP_BUS_SIO_000_C_CanExplodeArts_Params
{
	struct FName                                       ExplodeArtsLabel;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnBoostAttackTraits
struct UBP_BUS_SIO_000_C_OnBoostAttackTraits_Params
{
	class UShapeComponent*                             AttackCollision;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsData                                AttackArts;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABtlCharacterBase*                           ReceiveUnit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlSphereComponent*                         ReceiveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsSuccessBoostBreak;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.SetBombBulletNum
struct UBP_BUS_SIO_000_C_SetBombBulletNum_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEndAction;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnPlayableMystic
struct UBP_BUS_SIO_000_C_OnPlayableMystic_Params
{
	struct FName                                       MysticLabel;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.GetExplodeArtsLabel
struct UBP_BUS_SIO_000_C_GetExplodeArtsLabel_Params
{
	struct FBtlArtsData                                SourceArtsData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       ArtsLabel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.AssortFlexibleNotify
struct UBP_BUS_SIO_000_C_AssortFlexibleNotify_Params
{
	int                                                UserInteger;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UserFloat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsBegin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                UserColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnFlexibleNotifyBegin
struct UBP_BUS_SIO_000_C_OnFlexibleNotifyBegin_Params
{
	int                                                UserInteger;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UserFloat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                UserColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     UserObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnFlexibleNotifyEnd
struct UBP_BUS_SIO_000_C_OnFlexibleNotifyEnd_Params
{
	int                                                UserInteger;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UserFloat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                UserColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     UserObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnBeginPlay
struct UBP_BUS_SIO_000_C_OnBeginPlay_Params
{
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.AttackBegin
struct UBP_BUS_SIO_000_C_AttackBegin_Params
{
	class ABtlCharacterBase*                           SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                NowArts;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleActionState                                 PreState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnBeginCancelRange
struct UBP_BUS_SIO_000_C_OnBeginCancelRange_Params
{
	struct FActionCancelParam                          CancelParam;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.SwapButtonPressed
struct UBP_BUS_SIO_000_C_SwapButtonPressed_Params
{
	struct FName                                       ButtonName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlInputEventType                                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnButtonPressed
struct UBP_BUS_SIO_000_C_OnButtonPressed_Params
{
	struct FName                                       ButtonName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlInputEventType                                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.SwapButtonReleased
struct UBP_BUS_SIO_000_C_SwapButtonReleased_Params
{
	struct FName                                       ButtonName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlInputEventType                                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.AttackButtonPressed
struct UBP_BUS_SIO_000_C_AttackButtonPressed_Params
{
	struct FName                                       ButtonName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlInputEventType                                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.OnPostBeginBattle
struct UBP_BUS_SIO_000_C_OnPostBeginBattle_Params
{
};

// Function BP_BUS_SIO_000.BP_BUS_SIO_000_C.ExecuteUbergraph_BP_BUS_SIO_000
struct UBP_BUS_SIO_000_C_ExecuteUbergraph_BP_BUS_SIO_000_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
