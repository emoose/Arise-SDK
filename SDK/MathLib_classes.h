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

// BlueprintGeneratedClass MathLib.MathLib_C
// 0x0000 (0x0028 - 0x0028)
class UMathLib_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MathLib.MathLib_C");
		return ptr;
	}


	void STATIC_IsDistanceWithin(float Distance, float Range, float RangePermissible, class UObject* __WorldContext, bool* Result);
	void STATIC_GetVectorOf2ActorIgnoreZ(class AActor* SrcActor, class AActor* DstActor, class UObject* __WorldContext, struct FVector* Direction);
	void STATIC_GetDistanceOf2ActorIgnoreZ(class AActor* SrcActor, class AActor* DstActor, class UObject* __WorldContext, float* Distance);
	void STATIC_GetDistanceOf2Vec(const struct FVector& Src, const struct FVector& Dst, class UObject* __WorldContext, float* Length);
	void STATIC_GetRelativeYawLocation(const struct FVector& MyLocation, const struct FRotator& MyRotation, const struct FVector& TrgLocation, bool bActorRotation, class UObject* __WorldContext, float* RelativeYaw);
	void STATIC_GetDistanceSquaredOf2VecIgnoreZ(const struct FVector& Src, const struct FVector& Dst, class UObject* __WorldContext, float* Length);
	void STATIC_GetDistanceSquaredOf2Actor(class AActor* SrcActor, class AActor* DstActor, class UObject* __WorldContext, float* Distance);
	void STATIC_DegreeReap180(float Degree, class UObject* __WorldContext, float* Degree__180~_180_);
	void STATIC_InSightActor(class AActor* myActor, class AActor* TrgActor, float Yaw, float HightLow, float HightHigh, bool bCheckCollision, class UObject* __WorldContext, bool* Result);
	void STATIC_GetDistanceOf2VecIgnoreZ(const struct FVector& Src, const struct FVector& Dst, class UObject* __WorldContext, float* Length);
	void STATIC_AddColor(const struct FLinearColor& A, const struct FLinearColor& B, class UObject* __WorldContext, struct FLinearColor* Result);
	void STATIC_GetVectorOf2Actor(class AActor* SrcActor, class AActor* DstActor, class UObject* __WorldContext, struct FVector* Direction);
	void STATIC_GetRelativeYawOf2Vec(const struct FVector& MyVec, const struct FVector& TrgVec, class UObject* __WorldContext, float* RelativeYaw);
	void STATIC_GetDistanceOf2Actor(class AActor* SrcActor, class AActor* DstActor, class UObject* __WorldContext, float* Distance);
	void STATIC_GetRelativeYawOf2Actor(class AActor* myActor, class AActor* TrgActor, class UObject* __WorldContext, float* RelativeYaw);
	void STATIC_GetRelativeYaw(const struct FVector& MyLocation, const struct FRotator& MyRotation, const struct FVector& TrgLocation, class UObject* __WorldContext, float* RelativeYaw);
	void STATIC_GetRelativeYawOf2Mesh(class UMeshComponent* MyMesh, class UMeshComponent* TrgMesh, class UObject* __WorldContext, float* RelativeYaw);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
