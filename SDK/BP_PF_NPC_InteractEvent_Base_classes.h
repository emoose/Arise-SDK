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

// BlueprintGeneratedClass BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C
// 0x00DD (0x0438 - 0x035B)
class ABP_PF_NPC_InteractEvent_Base_C : public ABP_PF_InteractEvent_DisableControlBase_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x035B(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	bool                                               bUseOneTop;                                               // 0x0368(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishMainInteract;                                      // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x036A(0x0002) MISSED OFFSET
	int                                                SelectLastResult;                                         // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APFNpcCharacterBase*>                 TurnCharacter;                                            // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APFNpcCharacterBase*>                 LookAtCharacter;                                          // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APFNpcCharacterBase*>                 ActionCharacter;                                          // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AAriseGameProcess*                           OneTopProcess;                                            // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	EPFNpcFacilityType                                 OwnerFacilityType;                                        // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	struct FString                                     OwnerCharacterID;                                         // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x28];                                      // 0x03C0(0x0028) UNKNOWN PROPERTY: SoftClassProperty BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.OwnerScriptPath
	struct FString                                     OwnerScriptUserString;                                    // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      PreOneTopScriptClass;                                     // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PostOneTopScriptClass;                                    // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishOneTop;                                            // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	struct FString                                     PreOneTopSelectTalkNo;                                    // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PostOneTopSelectTalkNo;                                   // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPFOneTopComponent*                          OwnerOneTopComponent;                                     // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C");
		return ptr;
	}


	void IsValidTalk(bool* bValid);
	void SetupInteraction(const struct FPFNpcInteractionData& InteractionData);
	void OwnerSetting();
	void StartOneTopProcess(class UClass* GameProcessClass, const struct FString& SelectTalkNo, class AAriseGameProcess** GameProcess);
	void Init();
	void ClearAction();
	void ActionToDefault();
	void LookAtToDefault();
	void TurnToDefault();
	void FinishMainInteract();
	void MainInteract();
	void UserConstructionScript();
	void BeginEvent();
	void EndEvent();
	void Interact();
	void Event_Select_Notify(int SelectNo, int SelectTextNo);
	void Add_Turn_Character(class APFNpcCharacterBase* Character);
	void Add_LookAt_Character(class APFNpcCharacterBase* Character);
	void Add_PlayAction_Character(class APFNpcCharacterBase* Character);
	void Execute_OneTop(class UClass* GameProcessClass, const struct FString& SelectTalkNo);
	void Finish_OneTop();
	void ExecuteUbergraph_BP_PF_NPC_InteractEvent_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
