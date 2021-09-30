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

// BlueprintGeneratedClass BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C
// 0x000F (0x0408 - 0x03F9)
class ABP_BtlLaunchWorkerActor_LightWeight_C : public ABP_BtlLaunchWorkerActor_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C");
		return ptr;
	}


	void UserConstructionScript();
	void SetupParameter(const struct FString& InBattleMap, TArray<struct FBtlEncountGroupParam> InEncountParams, float InBattleDelayTime, bool InAutoStart, bool InUseOutsideCapture, const struct FString& InBattleLoadContext);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_BtlLaunchWorkerActor_LightWeight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
