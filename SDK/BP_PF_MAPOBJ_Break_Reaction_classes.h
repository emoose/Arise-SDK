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

// BlueprintGeneratedClass BP_PF_MAPOBJ_Break_Reaction.BP_PF_MAPOBJ_Break_Reaction_C
// 0x0010 (0x0338 - 0x0328)
class ABP_PF_MAPOBJ_Break_Reaction_C : public APFEventProcessFieldAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_MAPOBJ_Break_Reaction.BP_PF_MAPOBJ_Break_Reaction_C");
		return ptr;
	}


	void UserConstructionScript();
	void K2_Execute(class AActor* Sender, class AActor* Receiver);
	void ExecuteUbergraph_BP_PF_MAPOBJ_Break_Reaction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
