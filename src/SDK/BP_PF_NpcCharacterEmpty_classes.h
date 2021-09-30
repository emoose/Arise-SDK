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

// BlueprintGeneratedClass BP_PF_NpcCharacterEmpty.BP_PF_NpcCharacterEmpty_C
// 0x0178 (0x05A0 - 0x0428)
class ABP_PF_NpcCharacterEmpty_C : public APFNpcCharacterEmpty
{
public:
	struct FPFNpcPlacementData                         PlacementInfoMirror;                                      // 0x0428(0x0178) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NpcCharacterEmpty.BP_PF_NpcCharacterEmpty_C");
		return ptr;
	}


	void BuildCharacter(const struct FPFNpcPlacementData& Placement_Info);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
