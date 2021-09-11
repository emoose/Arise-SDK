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

// BlueprintGeneratedClass BP_MapDefaultLocator.BP_MapDefaultLocator_C
// 0x0008 (0x03C0 - 0x03B8)
class ABP_MapDefaultLocator_C : public ABP_MapLocatorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapDefaultLocator.BP_MapDefaultLocator_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_MapDefaultLocator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
