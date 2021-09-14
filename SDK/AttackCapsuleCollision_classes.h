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

// BlueprintGeneratedClass AttackCapsuleCollision.AttackCapsuleCollision_C
// 0x0008 (0x0678 - 0x0670)
class UAttackCapsuleCollision_C : public UBtlAttackCapsuleComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0670(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AttackCapsuleCollision.AttackCapsuleCollision_C");
		return ptr;
	}


	bool Received_CalculationImpactPoint(class AActor* DestructibleActor, struct FVector* ResultImpactPoint);
	void Received_DoDamageHit(class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision);
	void ExecuteUbergraph_AttackCapsuleCollision(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
