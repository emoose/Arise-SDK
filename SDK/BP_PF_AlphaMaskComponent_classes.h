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

// BlueprintGeneratedClass BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C
// 0x0019 (0x0211 - 0x01F8)
class UBP_PF_AlphaMaskComponent_C : public UAlphaMaskComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F8(0x0008) (Transient, DuplicateTransient)
	bool                                               bIsPlayingCameraAnim;                                     // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDistanceFadeEnable;                                      // 0x0201(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0202(0x0002) MISSED OFFSET
	float                                              DistanceFadein;                                           // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFadeout;                                          // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWatchFadeEnable;                                         // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C");
		return ptr;
	}


	void IsWatchFadeOut(bool* OutEnable);
	void IsWatchFadeIn(bool* OutEnable);
	void AdjustRadius(float Radius, float* NewRadius);
	void GetSphere(struct FVector* Location, float* Radius);
	void DrawDebug(const struct FLinearColor& Color);
	void TestSphere(float Distance, bool* bIntersect);
	void TestCameraDistance(float Distance, const struct FVector& Location, float Radius, bool* bIntersect);
	void ExecuteTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnBeginCameraAnim(class AArisePlayerCameraManager* PlyaerCameraManager, class UCameraAnimInst* CameraAnimInst);
	void OnEndCameraAnim(class AArisePlayerCameraManager* PlyaerCameraManager);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PF_AlphaMaskComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
