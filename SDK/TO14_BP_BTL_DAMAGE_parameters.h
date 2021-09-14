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

// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.IsUse
struct UTO14_BP_BTL_DAMAGE_C_IsUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.SetIcon
struct UTO14_BP_BTL_DAMAGE_C_SetIcon_Params
{
	struct FSlateFontInfo                              CategoryColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.SetNumber
struct UTO14_BP_BTL_DAMAGE_C_SetNumber_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnemy;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCritical;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeak;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsResist;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCore;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCoreBreak;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBoostBreak;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHeal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPoison;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OpenDamage
struct UTO14_BP_BTL_DAMAGE_C_OpenDamage_Params
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

// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OpenHeal
struct UTO14_BP_BTL_DAMAGE_C_OpenHeal_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.Construct
struct UTO14_BP_BTL_DAMAGE_C_Construct_Params
{
};

// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OnAnimationFinished
struct UTO14_BP_BTL_DAMAGE_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OpenPoisonDamage
struct UTO14_BP_BTL_DAMAGE_C_OpenPoisonDamage_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnemy;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OnVirtualTick
struct UTO14_BP_BTL_DAMAGE_C_OnVirtualTick_Params
{
};

// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.ExecuteUbergraph_TO14_BP_BTL_DAMAGE
struct UTO14_BP_BTL_DAMAGE_C_ExecuteUbergraph_TO14_BP_BTL_DAMAGE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_BTL_DAMAGE.TO14_BP_BTL_DAMAGE_C.OnEndDamageAnim__DelegateSignature
struct UTO14_BP_BTL_DAMAGE_C_OnEndDamageAnim__DelegateSignature_Params
{
	class UTO14_BP_BTL_DAMAGE_C*                       DamageUI;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
