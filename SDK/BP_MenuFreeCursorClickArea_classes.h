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

// BlueprintGeneratedClass BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C
// 0x003A (0x046A - 0x0430)
class UBP_MenuFreeCursorClickArea_C : public UAriseClickableArea
{
public:
	struct FScriptMulticastDelegate                    FreeCursorHoveredDelegate;                                // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FreeCursorUnHoveredDelegate;                              // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FreeCursorDecidedDelegate;                                // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UUserWidget*                                 OwnerUserWidget;                                          // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsFreeCursorReaction;                                     // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanFreeCursorDecide;                                     // 0x0469(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C");
		return ptr;
	}


	void CanAdsorb(bool* Can);
	void IsOnFreeCursorReaction(bool* IsReaction);
	void OnFreeCursorDecided(bool* Success);
	void OnFreeCusrorHovered(bool* Success);
	void OnFreeCursorUnhovered(bool* Success);
	void SetCanFreeCursorDecide(bool bCanFreeCursorDecide);
	void GetOwnerUserWidget(class UUserWidget** OwnerUserWidget);
	void SetOwnerUserWidget(class UUserWidget* OwnerUserWidget);
	void BindFreeCursorDecidedEvent(const struct FScriptDelegate& FreeCursorDecided);
	void BindFreeCursorUnhoveredEvent(const struct FScriptDelegate& OnFreeCursorUnhovered);
	void BindFreeCursorHoveredEvent(const struct FScriptDelegate& OnFreeCursorHovered);
	void FreeCursorDecidedDelegate__DelegateSignature(class UWidget* Widget);
	void FreeCursorUnHoveredDelegate__DelegateSignature(class UWidget* Widget);
	void FreeCursorHoveredDelegate__DelegateSignature(class UWidget* Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
