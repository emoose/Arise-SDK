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

// BlueprintGeneratedClass BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C
// 0x00B8 (0x0410 - 0x0358)
class UBP_DEV_BtlCommonViewModelBase_C : public UBtlCommonViewModelBase
{
public:
	bool                                               bDevEnableTargetCursor;                                   // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    DevOnChangeVisiblePreset;                                 // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DevOnSwitchStrikeSwap;                                    // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DevOnNotUseArtsForTp;                                     // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DevOnInspirationArts;                                     // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DevOnChangeTutorialCount;                                 // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DevOnBattleMenuChangePlayerNext;                          // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DevOnBattleMenuChangePlayerPrev;                          // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DevOnBattleMenuStart;                                     // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DevOnBattleMenuEnd;                                       // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DevOnBattleMenuChangePlayerPrePhase;                      // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DevOnOpenBreakTextRaw;                                    // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C");
		return ptr;
	}


	void DevBattleChangeCharacterTopPrev();
	void DevBattleChangeCharacterTopNext();
	void DevGetBackMember(TArray<class UBtlStatusViewModelBase*>* Result);
	void DevGetFrontMember(bool IsIgnorePlayer, TArray<class UBtlStatusViewModelBase*>* Result);
	void DevOnOpenBreakTextRaw__DelegateSignature(const struct FVector& Location);
	void DevOnBattleMenuChangePlayerPrePhase__DelegateSignature();
	void DevOnBattleMenuEnd__DelegateSignature();
	void DevOnBattleMenuStart__DelegateSignature();
	void DevOnBattleMenuChangePlayerPrev__DelegateSignature();
	void DevOnBattleMenuChangePlayerNext__DelegateSignature();
	void DevOnChangeTutorialCount__DelegateSignature(int Count, int CountMax);
	void DevOnInspirationArts__DelegateSignature(const struct FBtlArts_XmlDatatableLabel& ArtsLabel);
	void DevOnNotUseArtsForTp__DelegateSignature(int ArtsIndex);
	void DevOnSwitchStrikeSwap__DelegateSignature(bool bIsSwap);
	void DevOnChangeVisiblePreset__DelegateSignature(const struct FName& Preset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
