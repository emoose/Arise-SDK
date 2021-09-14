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

// BlueprintGeneratedClass BP_BTL_AttackHitRange.BP_BTL_AttackHitRange_C
// 0x0048 (0x00E8 - 0x00A0)
class UBP_BTL_AttackHitRange_C : public UBtlAnimNotifyState_AttackSphereCollision
{
public:
	struct FSTR_AttackCollisionParam                   AttackParam;                                              // 0x00A0(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_AttackHitRange.BP_BTL_AttackHitRange_C");
		return ptr;
	}


	void Received_InitializeCreateComponent(class USphereComponent* SphereComponent);
	struct FString GetNotifyName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
