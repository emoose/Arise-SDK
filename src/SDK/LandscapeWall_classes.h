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

// Class LandscapeWall.LandscapeWallBase
// 0x0048 (0x0370 - 0x0328)
class ALandscapeWallBase : public AActor
{
public:
	float                                              HalfHeight;                                               // 0x0328(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HalfThickness;                                            // 0x032C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DecalActorClass;                                          // 0x0330(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AreaClass;                                                // 0x0338(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSlope;                                                // 0x0340(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseSlope;                                            // 0x0341(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNegativeSlopeScaleZ;                                     // 0x0342(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0343(0x0005) MISSED OFFSET
	TArray<TWeakObjectPtr<class UBoxComponent>>        BoxComponents;                                            // 0x0348(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<TWeakObjectPtr<class ULandscapeWallSlopeComponent>> SlopeComponents;                                          // 0x0358(0x0010) (ExportObject, ZeroConstructor, Transient)
	class ULandscapeWallComponent*                     WallComponent;                                            // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LandscapeWall.LandscapeWallBase");
		return ptr;
	}


	void Unbuild();
	void SetHalfThickness(float InHalfThickness);
	void Rebuild();
	void PostRebuild();
	class ULandscapeWallComponent* GetWallComponent();
	float GetHalfThickness();
	float GetHalfHeight();
	class UClass* GetDecalClass();
};


// Class LandscapeWall.LandscapeWallBox
// 0x0008 (0x0378 - 0x0370)
class ALandscapeWallBox : public ALandscapeWallBase
{
public:
	float                                              HalfWidth;                                                // 0x0370(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LandscapeWall.LandscapeWallBox");
		return ptr;
	}

};


// Class LandscapeWall.LandscapeWallComponent
// 0x0020 (0x05A0 - 0x0580)
class ULandscapeWallComponent : public UPrimitiveComponent
{
public:
	TArray<struct FLandscapeWallBoxInfo>               WallBoxes;                                                // 0x0580(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0590(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LandscapeWall.LandscapeWallComponent");
		return ptr;
	}

};


// Class LandscapeWall.LandscapeWallNavAreaBox
// 0x0010 (0x0338 - 0x0328)
class ALandscapeWallNavAreaBox : public AActor
{
public:
	class UClass*                                      AreaClass;                                                // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               BoxComponent;                                             // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LandscapeWall.LandscapeWallNavAreaBox");
		return ptr;
	}


	void SetMobility(TEnumAsByte<EComponentMobility> NewMobility);
	void SetBoxExtent(class ANavModifierVolume* Volume);
	void SetAreaClass(class UClass* InAreaClass);
};


// Class LandscapeWall.LandscapeWallSlopeComponent
// 0x0020 (0x0630 - 0x0610)
class ULandscapeWallSlopeComponent : public UProceduralMeshComponent
{
public:
	struct FColor                                      ShapeColor;                                               // 0x0610(0x0004) (IsPlainOldData)
	unsigned char                                      bDrawOnlyIfSelected : 1;                                  // 0x0614(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0615(0x0003) MISSED OFFSET
	struct FVector                                     BoxExtent;                                                // 0x0618(0x000C) (IsPlainOldData)
	unsigned char                                      bReverse : 1;                                             // 0x0624(0x0001)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0625(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LandscapeWall.LandscapeWallSlopeComponent");
		return ptr;
	}

};


// Class LandscapeWall.LandscapeWallSpline
// 0x0010 (0x0380 - 0x0370)
class ALandscapeWallSpline : public ALandscapeWallBase
{
public:
	bool                                               bClosedLoop;                                              // 0x0370(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	class ULandscapeWallSplineComponent*               SplineComponent;                                          // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LandscapeWall.LandscapeWallSpline");
		return ptr;
	}


	class ULandscapeWallSplineComponent* GetSplineComponent();
};


// Class LandscapeWall.LandscapeWallSplineComponent
// 0x0020 (0x0690 - 0x0670)
class ULandscapeWallSplineComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0670(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LandscapeWall.LandscapeWallSplineComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
