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

// BlueprintGeneratedClass BP_MGC_TASK_ParticleSetFloatCurve.BP_MGC_TASK_ParticleSetFloatCurve_C
// 0x003C (0x008C - 0x0050)
class UBP_MGC_TASK_ParticleSetFloatCurve_C : public UBtlMagicTask_ParticleParameterBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0050(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleInstance;                                         // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       ParameterName;                                            // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBtlSimpleFloatParameter                    FloatValue;                                               // 0x0068(0x0020) (Edit, BlueprintVisible)
	float                                              RuntimeValue;                                             // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TASK_ParticleSetFloatCurve.BP_MGC_TASK_ParticleSetFloatCurve_C");
		return ptr;
	}


	struct FString Received_GetTaskName();
	void Received_End();
	void Received_Tick(float FrameDeltaTime, float ElapsedTime);
	void Received_Begin();
	void ExecuteUbergraph_BP_MGC_TASK_ParticleSetFloatCurve(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
