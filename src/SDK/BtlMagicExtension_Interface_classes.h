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

// BlueprintGeneratedClass BtlMagicExtension_Interface.BtlMagicExtension_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UBtlMagicExtension_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BtlMagicExtension_Interface.BtlMagicExtension_Interface_C");
		return ptr;
	}


	void PreRemoveAttackCollisionComponent(class UBtlAttackSphereComponent* CollisionComponent);
	void AddMagicSkeletalMesh(class USkeletalMesh* SourceMesh, const struct FTransform& RelativeTransform, class USkeletalMeshComponent** SpawnComponent);
	void GetHitObjectMemory(class UBtlHitObjectMemoryBase** HitMemory);
	void RemoveNotifyCollisionComponent(class UBtlSphereComponent* SphereCollision);
	void AddNotifyCollisionComponent(const struct FVector& Location, const struct FRotator& Rotation, float Scale, class UBtlSphereComponent** CreateCollision);
	void RemoveAttackCollisionComponent(class UBtlAttackSphereComponent* CollisionComponent);
	void AddAttackCollisionComponent(const struct FVector& Location, const struct FRotator& Rotation, float Scale, class UBtlCollisionScript* OverrideCollisionScript, const struct FAttackSphereParam& AttackParam, class UBtlAttackSphereComponent** CreateCollision);
	void AddDestructComponent(class UDestructibleMesh* NewMesh, const struct FTransform& RelativeTransform, class UDestructibleComponent** DestructComponent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
