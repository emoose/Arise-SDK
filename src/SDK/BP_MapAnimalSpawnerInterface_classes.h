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

// BlueprintGeneratedClass BP_MapAnimalSpawnerInterface.BP_MapAnimalSpawnerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MapAnimalSpawnerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapAnimalSpawnerInterface.BP_MapAnimalSpawnerInterface_C");
		return ptr;
	}


	void OnAnimStateChange(class USkeletalMeshComponent* SkeletalMeshComponent, const struct FString& PreviousStateName, const struct FString& NextStateName, float Turn, float Move);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
