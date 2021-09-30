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

// BlueprintGeneratedClass BP_PF_InteractEventScript_Ship060.BP_PF_InteractEventScript_Ship060_C
// 0x001F (0x04D0 - 0x04B1)
class UBP_PF_InteractEventScript_Ship060_C : public UBP_PF_InteractEventScript_FacOneTop_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04B1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B8(0x0008) (Transient, DuplicateTransient)
	TArray<struct FString>                             OpenList;                                                 // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InteractEventScript_Ship060.BP_PF_InteractEventScript_Ship060_C");
		return ptr;
	}


	void EndsOneTop(class UPFOneTopComponent** OneTopComponent);
	void ReceiveBeginPlay();
	void Run_Message(const struct FPFOneTopID& GroupID);
	void ExecuteUbergraph_BP_PF_InteractEventScript_Ship060(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
