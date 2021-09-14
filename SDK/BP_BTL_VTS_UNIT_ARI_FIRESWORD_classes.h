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

// BlueprintGeneratedClass BP_BTL_VTS_UNIT_ARI_FIRESWORD.BP_BTL_VTS_UNIT_ARI_FIRESWORD_C
// 0x0008 (0x0098 - 0x0090)
class UBP_BTL_VTS_UNIT_ARI_FIRESWORD_C : public UBtlVisualRootTaskBlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_VTS_UNIT_ARI_FIRESWORD.BP_BTL_VTS_UNIT_ARI_FIRESWORD_C");
		return ptr;
	}


	void OnChargeRankChanged(int Rank);
	void Received_EndPlay();
	void Received_Begin();
	void Received_OnReceiveMessage(const struct FString& UserMessage, class UObject* UserData);
	void ExecuteUbergraph_BP_BTL_VTS_UNIT_ARI_FIRESWORD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
