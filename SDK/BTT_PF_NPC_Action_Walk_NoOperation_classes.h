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

// BlueprintGeneratedClass BTT_PF_NPC_Action_Walk_NoOperation.BTT_PF_NPC_Action_Walk_NoOperation_C
// 0x0008 (0x00A8 - 0x00A0)
class UBTT_PF_NPC_Action_Walk_NoOperation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_PF_NPC_Action_Walk_NoOperation.BTT_PF_NPC_Action_Walk_NoOperation_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_PF_NPC_Action_Walk_NoOperation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
