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

// BlueprintGeneratedClass BP_GSC_TitleBack.BP_GSC_TitleBack_C
// 0x0028 (0x0078 - 0x0050)
class UBP_GSC_TitleBack_C : public UTitleBackSceneController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0050(0x0008) (Transient, DuplicateTransient)
	bool                                               bWaitFinalizeTask;                                        // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class AAriseGameMode*                              AriseGameMode;                                            // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UUMGScreenFader_C*                           LocalScreenMask;                                          // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       FinalizeTask;                                             // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_TitleBack.BP_GSC_TitleBack_C");
		return ptr;
	}


	void BPE_Tick(float DeltaTime);
	void BPE_Initialize(ESceneInitializeMode initMode);
	void BPE_Finalize(ESceneFinalizeReason finalizeReason);
	void ExecuteUbergraph_BP_GSC_TitleBack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
