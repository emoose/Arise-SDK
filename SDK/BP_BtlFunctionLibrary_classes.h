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

// BlueprintGeneratedClass BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BtlFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C");
		return ptr;
	}


	void STATIC_PlayBoostStrike_Internal(const struct FName& StrikeLabel, class UObject* __WorldContext, class UPostEventInfoBase** PostEventInfo);
	void STATIC_SetCameraOffsetAimHeight(float Offset, class UObject* __WorldContext);
	void STATIC_RemoveDotLeftString(const struct FString& String, class UObject* __WorldContext, struct FString* Result);
	void STATIC_LongPathToShortName(const struct FString& LongPath, class UObject* __WorldContext, struct FString* ShortName);
	void STATIC_GetBtlUnitListById(const struct FName& UnitID, class UObject* __WorldContext, bool* IsValid, TArray<class ABtlCharacterBase*>* Unit);
	void STATIC_GetBtlUnitById(const struct FName& UnitID, class UObject* __WorldContext, bool* IsValid, class ABtlCharacterBase** Unit);
	void STATIC_ShowDamageCollision(bool Show, class UObject* __WorldContext);
	void STATIC_SetCameraOffsetRotation(const struct FRotator& Offset, class UObject* __WorldContext);
	void STATIC_SetCameraOffsetLocation(const struct FVector& Offset, class UObject* __WorldContext);
	void STATIC_GetSpecialStrikeLabel(class UObject* __WorldContext, struct FName* Label);
	void STATIC_IsReadySpecialStrike(class UObject* __WorldContext, bool* Result);
	void STATIC_NotReadySpecialStrike(class UObject* __WorldContext);
	void STATIC_ReadySpecialStrike(const struct FName& NewSpecialStrike, class UObject* __WorldContext);
	void STATIC_SetBBArtsTarget(class UBlackboardComponent* Blackboard, class ABtlCharacterBase* Value, class UObject* __WorldContext);
	void STATIC_SetBBRequestArts(class UBlackboardComponent* Blackboard, const struct FName& Value, class UObject* __WorldContext);
	void STATIC_SetHoldMouse(bool Hold, class UObject* __WorldContext);
	void STATIC_LerpAngleValue(float From, float To, float Value, class UObject* __WorldContext, float* Result);
	void STATIC_LerpFloatValue(float From, float To, float Value, class UObject* __WorldContext, float* Result);
	void STATIC_ChangeControlCharacter(class ABtlCharacterBase* ChangeCharacter, class UObject* __WorldContext);
	void STATIC_ConvertElementToMPC(EBtlElementType Element, class UObject* __WorldContext, struct FName* Name);
	class UParticleSystemComponent* STATIC_SpawnElementEmitterAttached(const struct FName& Element, class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, class UObject* __WorldContext);
	class UParticleSystemComponent* STATIC_SpawnElementEmitterAtLocation(const struct FName& Element, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, class UObject* __WorldContext);
	void STATIC_GetMarkerLocation(const struct FName& marker, class UObject* __WorldContext, struct FVector* returnValue);
	void STATIC_GetUnitData(const struct FName& ID, class UObject* __WorldContext, struct FBtlUnitData* returnValue, bool* Valid);
	void STATIC_GetName(const struct FString& Group, const struct FString& Label, class UObject* __WorldContext, struct FString* returnValue);
	void STATIC_GetArtsData(const struct FName& ID, class UObject* __WorldContext, struct FBtlArtsData* returnValue, bool* Valid);
	void STATIC_GetBtlStateEvent(class UObject* __WorldContext, class UBtlStateEvent** BtlStateEvent);
	void STATIC_GetPCController(class UObject* __WorldContext, class AInputExtPlayerController** PCController);
	void STATIC_PlayBattleSE(const struct FName& SystemEffectLabel, const struct FVector& Location, class UObject* __WorldContext);
	void STATIC_CollectUsableArtsList(class ABtlCharacterBase* BtlCharacter, class ABtlCharacterBase* TargetCharacter, class UObject* __WorldContext, TArray<struct FName>* ResultList);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
