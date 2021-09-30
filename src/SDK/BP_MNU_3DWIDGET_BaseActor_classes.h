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

// BlueprintGeneratedClass BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C
// 0x00B4 (0x03DC - 0x0328)
class ABP_MNU_3DWIDGET_BaseActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Anim;                                                     // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsPlayingOpenAnimation;                                  // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	float                                              Time;                                                     // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                AnimOpenLocationCurve;                                    // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                AnimOpenScaleCurve;                                       // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                AnimOpenRotationCurve;                                    // 0x0360(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                AnimCloseLocationCurve;                                   // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                AnimCloseScaleCurve;                                      // 0x0370(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                AnimCloseRotationCurve;                                   // 0x0378(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DistAdjust;                                               // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ScaleAdjust;                                              // 0x0384(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WidthAdjust;                                              // 0x0388(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayingCloseAnimation;                                 // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHiddenWhenAnimCloseFinished;                             // 0x038D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNoCollisionWhenAnimCloseFinished;                        // 0x038E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x038F(0x0001) MISSED OFFSET
	struct FScriptMulticastDelegate                    AnimOpenStartEvent;                                       // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimCloseStartEvent;                                      // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimOpenFinishedEvent;                                    // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimCloseFinishedEvent;                                   // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector2D                                   ScreenPos;                                                // 0x03D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                DrawFrameCount;                                           // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C");
		return ptr;
	}


	void BindAnimCloseFinishedEvent(const struct FScriptDelegate& Event);
	void BindAnimOpenFinishedEvent(const struct FScriptDelegate& Event);
	void BindAnimCloseStartEvent(const struct FScriptDelegate& Event);
	void BindAnimOpenStartEvent(const struct FScriptDelegate& Event);
	void IsPlayingAnimation(bool* IsPlaying);
	void CheckFinishAnim(class UCurveVector* LocationCurve, class UCurveVector* RotationCurve, class UCurveVector* ScaleCurve, float Time, bool CheckFlag, bool* bFinish);
	void MakeAnimTransform(class UCurveVector* LocationCurve, class UCurveVector* RotationCurve, class UCurveVector* ScaleCurve, float Time, struct FTransform* Trans);
	void PlayAnimClose();
	void PlayAnimOpen();
	void UserConstructionScript();
	void OnAnimOpen();
	void OnAnimClose();
	void OnAnimOpenStart();
	void OnAnimCloseStart();
	void OnAnimOpenFinishded();
	void OnAnimCloseFinished();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MNU_3DWIDGET_BaseActor(int EntryPoint);
	void AnimCloseFinishedEvent__DelegateSignature();
	void AnimOpenFinishedEvent__DelegateSignature();
	void AnimCloseStartEvent__DelegateSignature();
	void AnimOpenStartEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
