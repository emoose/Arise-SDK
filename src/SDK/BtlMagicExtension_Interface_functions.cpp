
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.PreRemoveAttackCollisionComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlAttackSphereComponent* CollisionComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBtlMagicExtension_Interface_C::PreRemoveAttackCollisionComponent(class UBtlAttackSphereComponent* CollisionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.PreRemoveAttackCollisionComponent");

	UBtlMagicExtension_Interface_C_PreRemoveAttackCollisionComponent_Params params;
	params.CollisionComponent = CollisionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.AddMagicSkeletalMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           SourceMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RelativeTransform              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class USkeletalMeshComponent*  SpawnComponent                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBtlMagicExtension_Interface_C::AddMagicSkeletalMesh(class USkeletalMesh* SourceMesh, const struct FTransform& RelativeTransform, class USkeletalMeshComponent** SpawnComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.AddMagicSkeletalMesh");

	UBtlMagicExtension_Interface_C_AddMagicSkeletalMesh_Params params;
	params.SourceMesh = SourceMesh;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnComponent != nullptr)
		*SpawnComponent = params.SpawnComponent;
}


// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.GetHitObjectMemory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBtlHitObjectMemoryBase* HitMemory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBtlMagicExtension_Interface_C::GetHitObjectMemory(class UBtlHitObjectMemoryBase** HitMemory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.GetHitObjectMemory");

	UBtlMagicExtension_Interface_C_GetHitObjectMemory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitMemory != nullptr)
		*HitMemory = params.HitMemory;
}


// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.RemoveNotifyCollisionComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlSphereComponent*     SphereCollision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBtlMagicExtension_Interface_C::RemoveNotifyCollisionComponent(class UBtlSphereComponent* SphereCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.RemoveNotifyCollisionComponent");

	UBtlMagicExtension_Interface_C_RemoveNotifyCollisionComponent_Params params;
	params.SphereCollision = SphereCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.AddNotifyCollisionComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlSphereComponent*     CreateCollision                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBtlMagicExtension_Interface_C::AddNotifyCollisionComponent(const struct FVector& Location, const struct FRotator& Rotation, float Scale, class UBtlSphereComponent** CreateCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.AddNotifyCollisionComponent");

	UBtlMagicExtension_Interface_C_AddNotifyCollisionComponent_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CreateCollision != nullptr)
		*CreateCollision = params.CreateCollision;
}


// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.RemoveAttackCollisionComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlAttackSphereComponent* CollisionComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBtlMagicExtension_Interface_C::RemoveAttackCollisionComponent(class UBtlAttackSphereComponent* CollisionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.RemoveAttackCollisionComponent");

	UBtlMagicExtension_Interface_C_RemoveAttackCollisionComponent_Params params;
	params.CollisionComponent = CollisionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.AddAttackCollisionComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlCollisionScript*     OverrideCollisionScript        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAttackSphereParam      AttackParam                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UBtlAttackSphereComponent* CreateCollision                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBtlMagicExtension_Interface_C::AddAttackCollisionComponent(const struct FVector& Location, const struct FRotator& Rotation, float Scale, class UBtlCollisionScript* OverrideCollisionScript, const struct FAttackSphereParam& AttackParam, class UBtlAttackSphereComponent** CreateCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.AddAttackCollisionComponent");

	UBtlMagicExtension_Interface_C_AddAttackCollisionComponent_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.OverrideCollisionScript = OverrideCollisionScript;
	params.AttackParam = AttackParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CreateCollision != nullptr)
		*CreateCollision = params.CreateCollision;
}


// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.AddDestructComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDestructibleMesh*       NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RelativeTransform              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UDestructibleComponent*  DestructComponent              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBtlMagicExtension_Interface_C::AddDestructComponent(class UDestructibleMesh* NewMesh, const struct FTransform& RelativeTransform, class UDestructibleComponent** DestructComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.AddDestructComponent");

	UBtlMagicExtension_Interface_C_AddDestructComponent_Params params;
	params.NewMesh = NewMesh;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DestructComponent != nullptr)
		*DestructComponent = params.DestructComponent;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
