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

// BlueprintGeneratedClass BP_GSC_ToLogin.BP_GSC_ToLogin_C
// 0x0008 (0x0050 - 0x0048)
class UBP_GSC_ToLogin_C : public UGameSceneController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_ToLogin.BP_GSC_ToLogin_C");
		return ptr;
	}


	void BPE_Initialize(ESceneInitializeMode initMode);
	void BPE_Tick(float DeltaTime);
	void BPE_Finalize(ESceneFinalizeReason finalizeReason);
	void ExecuteUbergraph_BP_GSC_ToLogin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
