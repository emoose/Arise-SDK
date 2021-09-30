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

// BlueprintGeneratedClass BP_GSC_LongChatInterface.BP_GSC_LongChatInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_GSC_LongChatInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_LongChatInterface.BP_GSC_LongChatInterface_C");
		return ptr;
	}


	void IF_SetDelayLongchatClose(bool bDelay);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
