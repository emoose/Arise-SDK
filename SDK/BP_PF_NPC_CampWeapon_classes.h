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

// BlueprintGeneratedClass BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C
// 0x0041 (0x0491 - 0x0450)
class ABP_PF_NPC_CampWeapon_C : public ABP_PF_NpcCharacterSkeletalMesh_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FPFCampWeaponData                           LayoutData;                                               // 0x0458(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bHasLayout;                                               // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	struct FString                                     WeaponName;                                               // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bEmpty;                                                   // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C");
		return ptr;
	}


	void BuildRequestByLayout(const struct FPFCampWeaponData& Layout);
	void SetLayout();
	void BuildRequestByWeaponID(const struct FString& WeaponID);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PF_NPC_CampWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
