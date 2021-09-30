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

// BlueprintGeneratedClass HitObjectMemory.HitObjectMemory_C
// 0x0008 (0x0148 - 0x0140)
class UHitObjectMemory_C : public UBtlHitObjectMemoryBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0140(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HitObjectMemory.HitObjectMemory_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_HitObjectMemory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
