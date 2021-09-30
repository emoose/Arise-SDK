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

// BlueprintGeneratedClass BP_GSC_Login.BP_GSC_Login_C
// 0x0018 (0x0060 - 0x0048)
class UBP_GSC_Login_C : public ULoginSceneController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)
	struct FName                                       BootEventAssetId;                                         // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABootSceneControllerEvent*                   BootEvent;                                                // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_Login.BP_GSC_Login_C");
		return ptr;
	}


	void Release();
	void GotoTitle();
	void BPE_Tick(float DeltaTime);
	void BPE_Finalize(ESceneFinalizeReason finalizeReason);
	void BPE_Initialize(ESceneInitializeMode initMode);
	void ExecuteUbergraph_BP_GSC_Login(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
