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

// BlueprintGeneratedClass BP_BTL_VTS_SYS_DEAD.BP_BTL_VTS_SYS_DEAD_C
// 0x0060 (0x00F0 - 0x0090)
class UBP_BTL_VTS_SYS_DEAD_C : public UBtlVisualRootTaskBlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)
	float                                              EndPhaseTime;                                             // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TMap<EBtlEffectSizeType, class UParticleSystem*>   DeadEffectMap;                                            // 0x00A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_VTS_SYS_DEAD.BP_BTL_VTS_SYS_DEAD_C");
		return ptr;
	}


	void GetEmitter(class UParticleSystem** NewParam);
	void GetEmitterAttachName(struct FName* AttachName);
	void Received_Begin();
	void ExecuteUbergraph_BP_BTL_VTS_SYS_DEAD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
