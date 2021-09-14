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

// BlueprintGeneratedClass BP_BTL_FlexibleRange.BP_BTL_FlexibleRange_C
// 0x0000 (0x0058 - 0x0058)
class UBP_BTL_FlexibleRange_C : public UBtlAnimNotifyState_FlexibleNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_FlexibleRange.BP_BTL_FlexibleRange_C");
		return ptr;
	}


	struct FString GetNotifyName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
