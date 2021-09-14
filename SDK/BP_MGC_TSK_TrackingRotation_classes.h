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

// BlueprintGeneratedClass BP_MGC_TSK_TrackingRotation.BP_MGC_TSK_TrackingRotation_C
// 0x0064 (0x00A4 - 0x0040)
class UBP_MGC_TSK_TrackingRotation_C : public UBtlMagicTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     TargetVector;                                             // 0x0048(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TargetRotator;                                            // 0x0054(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurrentRotator;                                           // 0x0060(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DifferenceRotator;                                        // 0x006C(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FBtlSimpleFloatParameter                    TrackingPower;                                            // 0x0078(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              Power;                                                    // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnoreZAxis;                                              // 0x009C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	float                                              IgnoreTrackingAngle;                                      // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TSK_TrackingRotation.BP_MGC_TSK_TrackingRotation_C");
		return ptr;
	}


	struct FString Received_GetTaskName();
	void Received_Tick(float FrameDeltaTime, float ElapsedTime);
	void ExecuteUbergraph_BP_MGC_TSK_TrackingRotation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
