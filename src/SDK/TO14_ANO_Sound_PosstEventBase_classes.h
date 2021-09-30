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

// BlueprintGeneratedClass TO14_ANO_Sound_PosstEventBase.TO14_ANO_Sound_PosstEventBase_C
// 0x0040 (0x0078 - 0x0038)
class UTO14_ANO_Sound_PosstEventBase_C : public UAnimNotify
{
public:
	struct FString                                     EventName;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     AttachName;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Follow;                                                   // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseSwitch;                                                // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseRTPC;                                                  // 0x005A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
	struct FString                                     RTPCName;                                                 // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              RTPCValue;                                                // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RTPCInterpTime;                                           // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_ANO_Sound_PosstEventBase.TO14_ANO_Sound_PosstEventBase_C");
		return ptr;
	}


	void SetSwitchGroup(class UAkComponent* AkComponent);
	void GetSwitchState(class UAkComponent* AkComponent, struct FString* State);
	void GetSwitchGroup(class UAkComponent* AkComponent, struct FString* Group);
	void PostEventInternal(class UAkComponent* Component, const struct FVector& Location, class UMeshComponent* MeshComponent);
	void GetEventName(struct FString* EventName);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
