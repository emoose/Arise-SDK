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

// BlueprintGeneratedClass BP_BTL_VTS_ABNORMAL_BASE.BP_BTL_VTS_ABNORMAL_BASE_C
// 0x00A0 (0x0130 - 0x0090)
class UBP_BTL_VTS_ABNORMAL_BASE_C : public UBtlVisualRootTaskBlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)
	struct FName                                       BatStatusParameterName;                                   // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndPhaseTime;                                             // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	TMap<EBtlEffectSizeType, class UParticleSystem*>   AbnormalEmitterMap;                                       // 0x00A8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              BlinkValue;                                               // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FBattleSystemEffect_DatatableLabel          SystemSE;                                                 // 0x0100(0x0008) (Edit, BlueprintVisible)
	struct FBtlVisualTask_MaterialConstructParameter   ConstructParameter;                                       // 0x0108(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_VTS_ABNORMAL_BASE.BP_BTL_VTS_ABNORMAL_BASE_C");
		return ptr;
	}


	void GetEmitterAttachName(struct FName* AttachName);
	void GetEmitter(class UParticleSystem** AbnormalTemplate);
	void Received_Begin();
	void ExecuteUbergraph_BP_BTL_VTS_ABNORMAL_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
