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

// BlueprintGeneratedClass BP_PF_InteractEventScript_FacOneTop.BP_PF_InteractEventScript_FacOneTop_C
// 0x0060 (0x04B1 - 0x0451)
class UBP_PF_InteractEventScript_FacOneTop_C : public UBP_PF_InteractEventScript_NpcOneTop_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0458(0x0008) (Transient, DuplicateTransient)
	struct FString                                     TalkNo;                                                   // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FPFOneTopID                                 GroupID;                                                  // 0x0470(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class APFNpcCharacterBase*>                 ActionCharacter;                                          // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APFNpcCharacterBase*>                 TurnCharacter;                                            // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APFNpcCharacterBase*>                 LookAtCharacter;                                          // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bEndsClearAction;                                         // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InteractEventScript_FacOneTop.BP_PF_InteractEventScript_FacOneTop_C");
		return ptr;
	}


	void ClearAction();
	void EndsOneTop(class UPFOneTopComponent** OneTopComponent);
	void Main(const struct FString& String);
	void ReceiveBeginPlay();
	void Add_PlayerAction_Character(class APFNpcCharacterBase* Character);
	void Add_Turn_Character(class APFNpcCharacterBase* Character);
	void Add_LookAt_Character(class APFNpcCharacterBase* Character);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PF_InteractEventScript_FacOneTop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
