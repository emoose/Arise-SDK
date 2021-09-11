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

// BlueprintGeneratedClass BP_GSC_FieldFinalize.BP_GSC_FieldFinalize_C
// 0x0018 (0x0058 - 0x0040)
class UBP_GSC_FieldFinalize_C : public USceneFinalizeTask
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	float                                              ActionDelayTimer;                                         // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class AStreamLevelLoader*                          StreamLevelLoader;                                        // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_FieldFinalize.BP_GSC_FieldFinalize_C");
		return ptr;
	}


	void BPE_Tick(float DeltaTime);
	void BPE_Initialize();
	void OnUnloadFinish();
	void ExecuteUbergraph_BP_GSC_FieldFinalize(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
