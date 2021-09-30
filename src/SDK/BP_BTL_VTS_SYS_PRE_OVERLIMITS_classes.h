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

// BlueprintGeneratedClass BP_BTL_VTS_SYS_PRE_OVERLIMITS.BP_BTL_VTS_SYS_PRE_OVERLIMITS_C
// 0x0090 (0x0120 - 0x0090)
class UBP_BTL_VTS_SYS_PRE_OVERLIMITS_C : public UBtlVisualRootTaskBlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)
	float                                              EndPhaseTime;                                             // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FName                                       BatStatusParameterName;                                   // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EBtlEffectSizeType, class UParticleSystem*>   OverlimitsEmitterMap_Start;                               // 0x00A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FBtlVisualTask_MaterialConstructParameter   ConstructParameter;                                       // 0x00F8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_VTS_SYS_PRE_OVERLIMITS.BP_BTL_VTS_SYS_PRE_OVERLIMITS_C");
		return ptr;
	}


	void GetEmitter(class UParticleSystem** PreOverlimitTemplate);
	void GetEmitterAttachName(struct FName* AttachName, struct FName* AttachName_GRA);
	void Received_Begin();
	void ExecuteUbergraph_BP_BTL_VTS_SYS_PRE_OVERLIMITS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
