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

// BlueprintGeneratedClass BP_MenuCamera.BP_MenuCamera_C
// 0x002C (0x105C - 0x1030)
class ABP_MenuCamera_C : public ACameraActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1030(0x0008) (Transient, DuplicateTransient)
	struct FVector2D                                   ScreenPosition;                                           // 0x1038(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CharaDistRate;                                            // 0x1040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // 0x1044(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              EfcDistRate;                                              // 0x104C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OutCharaPosition;                                         // 0x1050(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuCamera.BP_MenuCamera_C");
		return ptr;
	}


	void CalcLocations_New2(float Height, float DistRate, bool bSafeZone, struct FVector* Camera, struct FVector* BG);
	void GetCharacterPosition(struct FVector* OutCharaPosition);
	void CalcLocations(float Height, struct FVector* Camera, struct FVector* BG);
	void SetOffset(const struct FVector2D& Offset);
	void CalcLocations_New(float Height, struct FVector* Camera, struct FVector* BG);
	void GetRadiusOfInscribedCircle(float Bottom, float Height, float* Radius);
	float GetDistanceFromFOV(float BGWidth, bool bSafeZone);
	void SetPositionAuto(const struct FTransform& Target);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MenuCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
