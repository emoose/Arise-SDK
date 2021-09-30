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

// BlueprintGeneratedClass TO14_BP_SQCPostProcessByTime.TO14_BP_SQCPostProcessByTime_C
// 0x0024 (0x034C - 0x0328)
class ATO14_BP_SQCPostProcessByTime_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UArisePostProcessComponent*                  SQC_PostProcess_Night;                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArisePostProcessComponent*                  SQC_PostProcess_Day;                                      // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Day_Enable;                                               // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Night_Enable;                                             // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Editer_Check_OnOff;                                       // 0x034A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Day_PostProcess_Enable;                                   // 0x034B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BP_SQCPostProcessByTime.TO14_BP_SQCPostProcessByTime_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void K2_OnReset();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TO14_BP_SQCPostProcessByTime(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
