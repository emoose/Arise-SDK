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

// BlueprintGeneratedClass BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C
// 0x0030 (0x0451 - 0x0421)
class UBP_PF_InteractEventScript_NpcOneTop_C : public UBP_PF_InteractEventScriptBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      Listener;                                                 // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UPFOneTopComponent*                          OneTopComponent;                                          // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FString                                     SelectionTalkNo;                                          // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bFinishMessage;                                           // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C");
		return ptr;
	}


	void EndsOneTop(class UPFOneTopComponent** OneTopComponent);
	void StartsOneTop(class UPFOneTopComponent** OneTopComponent);
	void Main(const struct FString& String);
	void UpdateMessageEvent(class UPFOneTopComponent* OneTopComponent);
	void Run_Message(const struct FPFOneTopID& GroupID);
	void ExecuteUbergraph_BP_PF_InteractEventScript_NpcOneTop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
