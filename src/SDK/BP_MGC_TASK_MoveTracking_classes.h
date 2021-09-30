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

// BlueprintGeneratedClass BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C
// 0x002C (0x006C - 0x0040)
class UBP_MGC_TASK_MoveTracking_C : public UBtlMagicTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	float                                              TrackingPower;                                            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 TrackingPowerCurve;                                       // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 VelocityCurve;                                            // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExecuteYawRange;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExecutePitchRange;                                        // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C");
		return ptr;
	}


	void Received_DebugRender(float FrameDeltaTime);
	struct FString Received_GetTaskName();
	void UpdateTrackingEx(float ElapsedTime, float Delta);
	void UpdateTracking(float Delta, float ElsedTime);
	void Tracking(float Delta, float ElapsedTime);
	void Received_Tick(float FrameDeltaTime, float ElapsedTime);
	void Received_Begin();
	void ExecuteUbergraph_BP_MGC_TASK_MoveTracking(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
