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

// BlueprintGeneratedClass BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C
// 0x0016 (0x0BE9 - 0x0BD3)
class ABP_PFPartyTopCharacterBase_C : public ABP_PFPlayerCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x0BD3(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BD8(0x0008) (Transient, DuplicateTransient)
	class UBP_PF_PC_AlphaMaskComponent_C*              BP_PF_PC_AlphaMaskComponent;                              // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EDE_PFPartyTopLookAtType>              CurrentLookAtType;                                        // 0x0BE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C");
		return ptr;
	}


	void IsBuildCharacter(bool* Out);
	bool IsPlayVibration();
	void IsDebugInputEnable(bool* bOut);
	void SetLookAtSymbol(class AActor* NewTarget, TEnumAsByte<EDE_PFPartyTopLookAtType> LookAtType);
	void FadeOut(float InFadeTime);
	void FadeIn(float InFadeTime);
	void Initialize();
	void ReconstructFromPartyTop(bool bBlock);
	void UserConstructionScript();
	void IF_ReconstPartyTop(bool bLock);
	void Event_On_Game_State_Change(EAriseGameState ChangedState, bool NewState);
	void BuildCharacter();
	void OnBuildCharacter();
	void OnResetCharacter(bool bInIndoorMode);
	void Event_On_Post_Map_Change(const struct FString& NewMapName, const struct FString& OldMapName);
	void Event_On_Pre_Map_Change(const struct FString& NewMapName, const struct FString& OldMapName);
	void OnChangedDisplayScene(unsigned char ChangedScene, unsigned char OldScene);
	void «0¹0¿0à0¤0Ù0ó0È0_1(EAriseGameState ChangedState, bool NewState);
	void ReceiveTick(float DeltaSeconds);
	void «0¹0¿0à0¤0Ù0ó0È0_2(EAriseGameState ChangedState, bool NewState);
	void ReceiveBeginPlay();
	void CustomEvent_1();
	void ExecuteUbergraph_BP_PFPartyTopCharacterBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
