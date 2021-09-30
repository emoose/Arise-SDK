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

// BlueprintGeneratedClass BP_USS_AWAKE.BP_USS_AWAKE_C
// 0x000F (0x00B8 - 0x00A9)
class UBP_USS_AWAKE_C : public UBP_USS_RUNTIME_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USS_AWAKE.BP_USS_AWAKE_C");
		return ptr;
	}


	void OnEnabled();
	void OnAwakeRankChanged();
	void ExecuteUbergraph_BP_USS_AWAKE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
