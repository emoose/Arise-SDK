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

// BlueprintGeneratedClass BP_PF_InteractInfo_SubQuest.BP_PF_InteractInfo_SubQuest_C
// 0x0008 (0x0388 - 0x0380)
class ABP_PF_InteractInfo_SubQuest_C : public ABP_PF_InteractInfoBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InteractInfo_SubQuest.BP_PF_InteractInfo_SubQuest_C");
		return ptr;
	}


	void SetQuestIcon();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PF_InteractInfo_SubQuest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
