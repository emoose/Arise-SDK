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

// WidgetBlueprintGeneratedClass BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C
// 0x003C (0x0244 - 0x0208)
class UBP_MNU_3DPARTICLE_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class ABP_MNU_3DPARTICLE_Actor_C*                  ParticleActor;                                            // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ParticleTemplate;                                         // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistAdjust;                                               // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WidgetAdjust;                                             // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ScaleAdjust;                                              // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	class UWidgetComponent*                            WidgetComponent;                                          // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bPlaying;                                                 // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0239(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayFrameCount;                                           // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C");
		return ptr;
	}


	void SetScale(float Scale);
	void IsPlaying(bool* IsPlaying);
	void SetWidgetComponent(class UWidgetComponent* WidgetComponent);
	void Stop();
	void Play();
	void OnPlayEnd(class AActor* DestroyedActor);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_BP_MNU_3DPARTICLE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
