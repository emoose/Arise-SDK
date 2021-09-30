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

// BlueprintGeneratedClass BP_MenuManagerFinalize.BP_MenuManagerFinalize_C
// 0x000C (0x004C - 0x0040)
class UBP_MenuManagerFinalize_C : public USceneFinalizeTask
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	float                                              FailSafeTimer;                                            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuManagerFinalize.BP_MenuManagerFinalize_C");
		return ptr;
	}


	void BPE_Tick(float DeltaTime);
	void BPE_Initialize();
	void ExecuteUbergraph_BP_MenuManagerFinalize(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
