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

// BlueprintGeneratedClass BP_PF_NPC_InteractEvent_Ship.BP_PF_NPC_InteractEvent_Ship_C
// 0x0018 (0x0450 - 0x0438)
class ABP_PF_NPC_InteractEvent_Ship_C : public ABP_PF_NPC_InteractEvent_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	struct FString                                     CurrentLevelName;                                         // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_InteractEvent_Ship.BP_PF_NPC_InteractEvent_Ship_C");
		return ptr;
	}


	void UserConstructionScript();
	void MainInteract();
	void úQ*‚(const struct FString& MapName, const struct FString& MapLocatorName);
	void ExecuteUbergraph_BP_PF_NPC_InteractEvent_Ship(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
