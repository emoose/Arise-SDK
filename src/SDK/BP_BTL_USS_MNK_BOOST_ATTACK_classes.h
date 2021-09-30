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

// BlueprintGeneratedClass BP_BTL_USS_MNK_BOOST_ATTACK.BP_BTL_USS_MNK_BOOST_ATTACK_C
// 0x000F (0x00B8 - 0x00A9)
class UBP_BTL_USS_MNK_BOOST_ATTACK_C : public UBP_USS_RUNTIME_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_USS_MNK_BOOST_ATTACK.BP_BTL_USS_MNK_BOOST_ATTACK_C");
		return ptr;
	}


	void OnDisabled();
	void OnEnabled();
	void OnInitialized();
	void OnBeginArtsStrikeAttack(class ABtlCharacterBase* Striker);
	void ExecuteUbergraph_BP_BTL_USS_MNK_BOOST_ATTACK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
