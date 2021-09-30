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

// BlueprintGeneratedClass BP_BTL_VTS_REINFORCEMENT_ADVENT.BP_BTL_VTS_REINFORCEMENT_ADVENT_C
// 0x0008 (0x0098 - 0x0090)
class UBP_BTL_VTS_REINFORCEMENT_ADVENT_C : public UBtlVisualRootTaskBlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_VTS_REINFORCEMENT_ADVENT.BP_BTL_VTS_REINFORCEMENT_ADVENT_C");
		return ptr;
	}


	void Received_Begin();
	void ExecuteUbergraph_BP_BTL_VTS_REINFORCEMENT_ADVENT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
