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

// BlueprintGeneratedClass BP_PF_NPC_InteractEvent_GeneralStore.BP_PF_NPC_InteractEvent_GeneralStore_C
// 0x0028 (0x0460 - 0x0438)
class ABP_PF_NPC_InteractEvent_GeneralStore_C : public ABP_PF_NPC_InteractEvent_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	TArray<struct FModifiedText>                       Selection;                                                // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        SelectionNo;                                              // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_InteractEvent_GeneralStore.BP_PF_NPC_InteractEvent_GeneralStore_C");
		return ptr;
	}


	void GetSelection();
	void AddSelect(const struct FString& StringID, const struct FString& DisableFlag, int No);
	void UserConstructionScript();
	void MainInteract();
	void ExecuteUbergraph_BP_PF_NPC_InteractEvent_GeneralStore(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
