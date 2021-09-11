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

// BlueprintGeneratedClass BP_PF_NPC_InteractEvent_Perch.BP_PF_NPC_InteractEvent_Perch_C
// 0x0008 (0x0440 - 0x0438)
class ABP_PF_NPC_InteractEvent_Perch_C : public ABP_PF_NPC_InteractEvent_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_InteractEvent_Perch.BP_PF_NPC_InteractEvent_Perch_C");
		return ptr;
	}


	void UserConstructionScript();
	void MainInteract();
	void ExecuteUbergraph_BP_PF_NPC_InteractEvent_Perch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
