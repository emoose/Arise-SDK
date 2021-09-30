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

// BlueprintGeneratedClass BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BTL_HUD_SYSTEM_LIBRARY_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_HUD_SYSTEM_LIBRARY.BP_BTL_HUD_SYSTEM_LIBRARY_C");
		return ptr;
	}


	void STATIC_GetRadius(class UShapeComponent* AtkCollision, class UObject* __WorldContext, float* Radius);
	EBattleHudAbnormalType STATIC_ConvertAbnormalTypeToHud(EAbnormalType NewParam, class UObject* __WorldContext);
	void STATIC_Gen_DamageHudOffsetLocation(class UObject* __WorldContext, struct FVector* Offset);
	void STATIC_BTL_OpenPoison(int Number, class ABtlCharacterBase* DamageUnit, const struct FVector& Position, class UObject* __WorldContext);
	void STATIC_GetBattleEncountWidget(class UObject* __WorldContext, TScriptInterface<class UBP_BTL_EncountHudInterface_C>* EncountWidget);
	void STATIC_BTL_OpenDamage(int Number, bool IsCritical, bool IsWeak, bool IsResist, bool IsCore, const struct FVector& Position, class UObject* __WorldContext);
	void STATIC_BTL_OpenDamageUI(class UShapeComponent* AtkCollision, class UBtlDamageSphereComponent* DmgCollision, int DamageValue, bool IsCritical, bool IsWeak, bool IsResist, bool IsCoreBreak, bool IsBoostBreak, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
