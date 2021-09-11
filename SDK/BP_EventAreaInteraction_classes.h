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

// BlueprintGeneratedClass BP_EventAreaInteraction.BP_EventAreaInteraction_C
// 0x0008 (0x0418 - 0x0410)
class ABP_EventAreaInteraction_C : public ABP_PF_Interaction_EmptyPoint_C
{
public:
	class ABP_EventAreaBase_C*                         EventAreaObject;                                          // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EventAreaInteraction.BP_EventAreaInteraction_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
