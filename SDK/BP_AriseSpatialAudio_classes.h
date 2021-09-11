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

// BlueprintGeneratedClass BP_AriseSpatialAudio.BP_AriseSpatialAudio_C
// 0x0018 (0x0348 - 0x0330)
class ABP_AriseSpatialAudio_C : public AAriseSpatialAudioActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class UAriseListenerComponent*                     AriseListener;                                            // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AriseSpatialAudio.BP_AriseSpatialAudio_C");
		return ptr;
	}


	void UpdateLocationAndRotation();
	void UpdateRTPC();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_AriseSpatialAudio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
