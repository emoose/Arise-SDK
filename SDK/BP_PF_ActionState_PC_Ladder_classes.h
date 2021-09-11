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

// BlueprintGeneratedClass BP_PF_ActionState_PC_Ladder.BP_PF_ActionState_PC_Ladder_C
// 0x0019 (0x0049 - 0x0030)
class UBP_PF_ActionState_PC_Ladder_C : public UPFActionStateBlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (Transient, DuplicateTransient)
	int                                                StepNum;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StateIndex;                                               // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPFPCActorComponent*                         CachedPFPCComponent;                                      // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bInitFrame;                                               // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_ActionState_PC_Ladder.BP_PF_ActionState_PC_Ladder_C");
		return ptr;
	}


	struct FPFActionStateTickResult K2_Tick(float DeltaSeconds);
	void K2_Begin(const struct FName& PrevState);
	void ExecuteUbergraph_BP_PF_ActionState_PC_Ladder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
