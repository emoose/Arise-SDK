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

// BlueprintGeneratedClass BP_PF_InteractEventScript_OwlPoint.BP_PF_InteractEventScript_OwlPoint_C
// 0x001F (0x0440 - 0x0421)
class UBP_PF_InteractEventScript_OwlPoint_C : public UBP_GP_Script2_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	struct FString                                     OwlPointID;                                               // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InteractEventScript_OwlPoint.BP_PF_InteractEventScript_OwlPoint_C");
		return ptr;
	}


	void FindVoiceSpeaker(const struct FString& InCharacterID, class AActor** OutSpeaker);
	void Main(const struct FString& String);
	void ExecuteUbergraph_BP_PF_InteractEventScript_OwlPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
