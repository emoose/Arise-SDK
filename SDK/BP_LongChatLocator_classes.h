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

// BlueprintGeneratedClass BP_LongChatLocator.BP_LongChatLocator_C
// 0x0008 (0x03C0 - 0x03B8)
class ABP_LongChatLocator_C : public ABP_MapLocatorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LongChatLocator.BP_LongChatLocator_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_LongChatLocator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
