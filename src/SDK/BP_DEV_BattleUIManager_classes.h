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

// BlueprintGeneratedClass BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C
// 0x0030 (0x0578 - 0x0548)
class ABP_DEV_BattleUIManager_C : public ABattleUIManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEnableDebugPartyHpGaugeStartAnimation;                   // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebugTargetHpGaugeStartAnimation;                  // 0x0551(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebugBossHpGaugeStartAnimation;                    // 0x0552(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0553(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    DevOnOpenPlayableHelp;                                    // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DevOnClosePlayableHelp;                                   // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C");
		return ptr;
	}


	void DevHudClosePlayableHelp();
	void DevHUDShowPlayAbleHelp(const struct FModifiedText& Title, const struct FModifiedText& Explanation);
	void UserConstructionScript();
	void DevOnClosePlayableHelp__DelegateSignature();
	void DevOnOpenPlayableHelp__DelegateSignature(const struct FModifiedText& Title, const struct FModifiedText& Explanation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
