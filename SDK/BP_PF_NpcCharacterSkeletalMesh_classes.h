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

// BlueprintGeneratedClass BP_PF_NpcCharacterSkeletalMesh.BP_PF_NpcCharacterSkeletalMesh_C
// 0x0008 (0x0450 - 0x0448)
class ABP_PF_NpcCharacterSkeletalMesh_C : public APFNpcCharacterSkeletalMesh
{
public:
	class UBP_SCHOBJ_NPC_C*                            BP_SCHOBJ_NPC;                                            // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NpcCharacterSkeletalMesh.BP_PF_NpcCharacterSkeletalMesh_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
