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

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.IsUse
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_IsUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.CreateBreakNotifyWidget
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_CreateBreakNotifyWidget_Params
{
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.SetupCreatedWidget
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_SetupCreatedWidget_Params
{
	class UWidget*                                     Prototype;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     CreatedWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.IsAsyncConstructComplated
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_IsAsyncConstructComplated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.CreateDamageWidget
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_CreateDamageWidget_Params
{
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.BreakNotifyUIRequest
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_BreakNotifyUIRequest_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C*            TO14_BreakNotify;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.IsScreenRange
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_IsScreenRange_Params
{
	struct FVector                                     ViewLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.DamageUIRequest
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_DamageUIRequest_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBattleDamageUIInterface>   TO14_Damage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OpenDamage
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OpenDamage_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnemy;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCritical;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeak;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsResist;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCore;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCoreBreak;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBoostBreak;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OpenHeal
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OpenHeal_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnEndDamageAnim
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OnEndDamageAnim_Params
{
	class UTO14_BP_BTL_DAMAGE_C*                       DamageUI;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.Destruct
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_Destruct_Params
{
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.BindEvent
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_BindEvent_Params
{
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.UnBindEvent
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_UnBindEvent_Params
{
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnChangeVisiblePreset
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OnChangeVisiblePreset_Params
{
	struct FName                                       Preset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OpenPoisonDamage
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OpenPoisonDamage_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnemy;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnCoreBreak
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OnCoreBreak_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OpenBoostBreakText
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OpenBoostBreakText_Params
{
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OpenCoreBreak
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OpenCoreBreak_Params
{
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnEndBreakNotify
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OnEndBreakNotify_Params
{
	class UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C*            BreakNotify;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnBoostAttackBreak
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OnBoostAttackBreak_Params
{
	struct FBtlCollisionSignatureData                  CollisionParam;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.Tick
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.AsyncConstruct
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_AsyncConstruct_Params
{
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.OnOpenBreakTextRaw
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_OnOpenBreakTextRaw_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C.ExecuteUbergraph_TO14_BP_BTL_DAMAGE_ROOT_LAYOUT
struct UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C_ExecuteUbergraph_TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
