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

// BlueprintGeneratedClass BTT_AdvancePhase.BTT_AdvancePhase_C
// 0x0008 (0x00C8 - 0x00C0)
class UBTT_AdvancePhase_C : public UBTT_BtlBP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_AdvancePhase.BTT_AdvancePhase_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_AdvancePhase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
