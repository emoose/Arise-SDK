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

// BlueprintGeneratedClass BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C
// 0x0040 (0x0478 - 0x0438)
class ABP_PF_InteractEvent_Gimmick_InjuredPerson_C : public ABP_PF_NPC_InteractEvent_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	class ABP_EventManager_C*                          EventManager;                                             // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     OwnerActorID;                                             // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_PF_NpcObject_C*                          OnwerNpcObj;                                              // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEndEvent;                                                // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	class APFNpcCharacterBase*                         Receiver;                                                 // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_PF_Gimmick_PlayerAction_InjuredPerson_C* Sender;                                                   // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C");
		return ptr;
	}


	void GetItem(const struct FString& ItemLabel, int ItemNum, bool* bShowDialog);
	struct FTransform GetPlayTransform();
	void IsMySelfEvent(const struct FString& EventName, bool* Same);
	void UserConstructionScript();
	void OnPostEvent(const struct FString& EventName, const struct FString& OptionName);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Post_Interact();
	void K2_Execute(class AActor* Sender, class AActor* Receiver);
	void ReceiveBeginPlay();
	void On_Gimmick_Post_Event_Process(const struct FString& EventName);
	void RunPostEvent();
	void OnPlayEvent();
	void ExecuteUbergraph_BP_PF_InteractEvent_Gimmick_InjuredPerson(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
