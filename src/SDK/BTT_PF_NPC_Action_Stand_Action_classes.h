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

// BlueprintGeneratedClass BTT_PF_NPC_Action_Stand_Action.BTT_PF_NPC_Action_Stand_Action_C
// 0x00EB (0x018B - 0x00A0)
class UBTT_PF_NPC_Action_Stand_Action_C : public UBTT_PF_NPC_Action_Stand_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      ActionKey;                                                // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Action;                                                   // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ActionBlend;                                              // 0x00F8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ActionForce;                                              // 0x0120(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ActionLoop;                                               // 0x0148(0x0028) (Edit, BlueprintVisible)
	bool                                               bTalk;                                                    // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDefaultActionSequence;                                   // 0x0171(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0172(0x0006) MISSED OFFSET
	struct FString                                     CurrentDefaultActionKey;                                  // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bBlend;                                                   // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForce;                                                   // 0x0189(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPFNpcAnimPlayActionLoop                           Loop;                                                     // 0x018A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_PF_NPC_Action_Stand_Action.BTT_PF_NPC_Action_Stand_Action_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_PF_NPC_Action_Stand_Action(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
