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

// BlueprintGeneratedClass BP_PF_ActionState_PC_LadderFloating.BP_PF_ActionState_PC_LadderFloating_C
// 0x000C (0x0048 - 0x003C)
class UBP_PF_ActionState_PC_LadderFloating_C : public UBP_PF_ActionState_Floating_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_ActionState_PC_LadderFloating.BP_PF_ActionState_PC_LadderFloating_C");
		return ptr;
	}


	void K2_Begin(const struct FName& PrevState);
	void ExecuteUbergraph_BP_PF_ActionState_PC_LadderFloating(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
