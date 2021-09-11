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

// BlueprintGeneratedClass BP_PF_NpcObject_Perch.BP_PF_NpcObject_Perch_C
// 0x0012 (0x05F8 - 0x05E6)
class ABP_PF_NpcObject_Perch_C : public ABP_PF_NpcObject_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x05E6(0x0002) MISSED OFFSET
	struct FString                                     RegionName;                                               // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NpcObject_Perch.BP_PF_NpcObject_Perch_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
