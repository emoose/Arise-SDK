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

// BlueprintGeneratedClass BP_BattleManager.BP_BattleManager_C
// 0x0018 (0x0B40 - 0x0B28)
class ABP_BattleManager_C : public ABP_BattleManagerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B28(0x0008) (Transient, DuplicateTransient)
	TArray<class UClass*>                              ResidentEncountWidget;                                    // 0x0B30(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleManager.BP_BattleManager_C");
		return ptr;
	}


	bool LineTraceForWall(const struct FVector& Start, const struct FVector& End);
	void ScreenMaskCaptchImpl(const struct FBtlScreenCaptchaWidget_DatabaseLabel& Label, class ABP_ScreenEncountEffectWidgetBase_C** ScreenMask);
	void UserConstructionScript();
	void ScreenCaptchaAddViewport(const struct FBtlScreenCaptchaWidget_DatabaseLabel& WidgetLabel);
	void ScreenCaptchaFadeOut();
	void ReceiveFinalize();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnChangeEquipmentEvent(EArisePartyID Param);
	void ExecuteUbergraph_BP_BattleManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
