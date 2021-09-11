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

// BlueprintGeneratedClass BP_PF_InteractEventScript_Ship040.BP_PF_InteractEventScript_Ship040_C
// 0x000F (0x04C0 - 0x04B1)
class UBP_PF_InteractEventScript_Ship040_C : public UBP_PF_InteractEventScript_FacOneTop_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04B1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InteractEventScript_Ship040.BP_PF_InteractEventScript_Ship040_C");
		return ptr;
	}


	void EndsOneTop(class UPFOneTopComponent** OneTopComponent);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PF_InteractEventScript_Ship040(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
