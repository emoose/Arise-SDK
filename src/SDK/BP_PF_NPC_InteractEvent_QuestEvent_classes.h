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

// BlueprintGeneratedClass BP_PF_NPC_InteractEvent_QuestEvent.BP_PF_NPC_InteractEvent_QuestEvent_C
// 0x0020 (0x0458 - 0x0438)
class ABP_PF_NPC_InteractEvent_QuestEvent_C : public ABP_PF_NPC_InteractEvent_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      ScriptPath;                                               // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UQuestComponent*                             QuestComp;                                                // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_AriseGameProcessWithEvent_C*             ScriptProcess;                                            // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_InteractEvent_QuestEvent.BP_PF_NPC_InteractEvent_QuestEvent_C");
		return ptr;
	}


	void UserConstructionScript();
	void MainInteract();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_PF_NPC_InteractEvent_QuestEvent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
