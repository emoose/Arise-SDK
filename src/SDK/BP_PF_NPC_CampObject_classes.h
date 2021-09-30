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

// BlueprintGeneratedClass BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C
// 0x0018 (0x03C8 - 0x03B0)
class ABP_PF_NPC_CampObject_C : public APFPlacementNpcSpawn
{
public:
	class UTextRenderComponent*                        Label;                                                    // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              SpawnActors;                                              // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C");
		return ptr;
	}


	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	void SpawnWeapon(const struct FString& WeaponName, const struct FVector& Location, const struct FRotator& Rotation, class AActor** SpawnActor);
	void SpawnCharacter(const struct FPFNpcDefineFacialData& InitOverrideFacial, const struct FString& CharacterID, const struct FSoftObjectPath& AnimSetPath, const struct FString& InitAction, const struct FPFNpcCharacterBuildOptions& Options, const struct FVector& Location, const struct FRotator& Rotation, class AActor** SpawnActor);
	void ToStringToPartyID(const struct FString& InputPin, EArisePartyID* PartyId);
	void DespawnActor();
	void SpawnActor(const struct FString& CharacterID, const struct FString& InitAction, const struct FVector& LocationOffset, const struct FRotator& RotationOffset, const struct FSoftObjectPath& AnimSetPath, const struct FPFNpcDefineFacialData& FacialData, const struct FPFNpcCharacterBuildOptions& Options, class AActor** Character);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
