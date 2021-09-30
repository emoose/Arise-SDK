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

// BlueprintGeneratedClass TO14_ANO_Sound_PostEvent.TO14_ANO_Sound_PostEvent_C
// 0x0068 (0x00A0 - 0x0038)
class UTO14_ANO_Sound_PostEvent_C : public UAnimNotify
{
public:
	struct FString                                     EventName;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     AttachName;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Follow;                                                   // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseSwitch;                                                // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	struct FString                                     SwitchGroup;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SwitchState;                                              // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               UseRTPC;                                                  // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     RTPCName;                                                 // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              RTPCValue;                                                // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RTPCInterpTime;                                           // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_ANO_Sound_PostEvent.TO14_ANO_Sound_PostEvent_C");
		return ptr;
	}


	void PostEventInternal(class UAkComponent* Component, const struct FVector& Location, class UMeshComponent* MeshComponent);
	void GetEventName(struct FString* EventName);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
