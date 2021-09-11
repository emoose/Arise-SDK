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

// BlueprintGeneratedClass BP_AliasManagerInterface.BP_AliasManagerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_AliasManagerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AliasManagerInterface.BP_AliasManagerInterface_C");
		return ptr;
	}


	void AddDelegateTo(class APFDelegateManager* InDelegateManager, int InPriority);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
