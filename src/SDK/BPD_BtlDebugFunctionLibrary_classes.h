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

// BlueprintGeneratedClass BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBPD_BtlDebugFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPD_BtlDebugFunctionLibrary.BPD_BtlDebugFunctionLibrary_C");
		return ptr;
	}


	void STATIC_GetCostumeRandom(EArisePartyID TargetID, class UObject* __WorldContext, TArray<int>* BodyCostume, TArray<int>* HairCostume, TArray<int>* AttachmentCostume);
	void STATIC_ApplyBattleSandboxUnitCostumeRandom(class UObject* __WorldContext);
	void STATIC_Debug_BattleUnitDead(class ABtlCharacterBase* DeadUnit, class UObject* __WorldContext);
	void STATIC_ApplyBattleSandboxUnitCostume(const struct FBattleSandboxCostumeV2& CostumeParameter, class UObject* __WorldContext);
	void STATIC_DrawNavPath(class ABtlCharacterBase* BtlCharacter, const struct FVector& PathStart, const struct FVector& PathEnd, class UObject* __WorldContext);
	void STATIC_DrawArtsArea(class ABtlCharacterBase* BtlCharacter, const struct FName& ArtsLabel, const struct FLinearColor& Color, class UObject* __WorldContext);
	void STATIC_DrawEQSScore(class UEnvQueryInstanceBlueprintWrapper* EQSQueryInstance, class UObject* __WorldContext);
	void STATIC_DrawHateList(class ABtlCharacterBase* BtlCharacter, class UObject* __WorldContext);
	void STATIC_DrawDebugText2DPos(const struct FString& DrawString, const struct FLinearColor& Color, float X, float Y, class UObject* __WorldContext);
	void STATIC_DrawDebugBattleState(class UObject* __WorldContext);
	void STATIC_DrawDebugText2D(const struct FString& Text, const struct FLinearColor& Color, class UObject* __WorldContext);
	void STATIC_BtlLose(class UObject* __WorldContext);
	void STATIC_BtlWin(class UObject* __WorldContext);
	void STATIC_ApplyBattleSandboxParty(class UObject* __WorldContext);
	void STATIC_ApplyBattleSandboxScenario(class UObject* __WorldContext);
	void STATIC_ApplyBattleSandboxCostume(class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
