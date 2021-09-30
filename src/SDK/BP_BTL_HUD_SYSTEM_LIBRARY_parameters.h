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

// Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.GetRadius
struct UBP_BTL_HUD_SYSTEM_LIBRARY_C_GetRadius_Params
{
	class UShapeComponent*                             AtkCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.ConvertAbnormalTypeToHud
struct UBP_BTL_HUD_SYSTEM_LIBRARY_C_ConvertAbnormalTypeToHud_Params
{
	EAbnormalType                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleHudAbnormalType                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.Gen_DamageHudOffsetLocation
struct UBP_BTL_HUD_SYSTEM_LIBRARY_C_Gen_DamageHudOffsetLocation_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.BTL_OpenPoison
struct UBP_BTL_HUD_SYSTEM_LIBRARY_C_BTL_OpenPoison_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           DamageUnit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.GetBattleEncountWidget
struct UBP_BTL_HUD_SYSTEM_LIBRARY_C_GetBattleEncountWidget_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBP_BTL_EncountHudInterface_C> EncountWidget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.BTL_OpenDamage
struct UBP_BTL_HUD_SYSTEM_LIBRARY_C_BTL_OpenDamage_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCritical;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeak;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsResist;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCore;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C.BTL_OpenDamageUI
struct UBP_BTL_HUD_SYSTEM_LIBRARY_C_BTL_OpenDamageUI_Params
{
	class UShapeComponent*                             AtkCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                DamageValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCritical;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeak;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsResist;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCoreBreak;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBoostBreak;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
