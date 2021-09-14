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

// BlueprintGeneratedClass BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C
// 0x0038 (0x0130 - 0x00F8)
class UBP_DerivedInputStateComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class ABtlCharacterBase*                           BP_Unit;                                                  // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                BP_NowPressedArtsButtonCount;                             // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BP_DerivedArtsSlotIndex;                                  // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BP_InputKeepTime;                                         // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BP_MysticInputKeepTime;                                   // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BP_InputEnabled;                                          // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bArtsSwap;                                                // 0x0119(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	TArray<bool>                                       InputStateArray;                                          // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C");
		return ptr;
	}


	void ReplaceInputState(bool bSwapEnabled);
	void SetInputState(int ArtsSlotIndex, bool Enabled);
	void GetArtsSlotIndexByButtonId(struct FName* ButtonID, int* ArtsSlotIndex);
	bool CanArtsSwap();
	struct FName GetNowArtsButtonId();
	bool IsMagicKeepButtonPressed();
	bool BP_CanMysticAction();
	int GetPressedCount();
	bool IsMysticButtonPressed();
	bool CanDerivedAction();
	bool IsDerivedButtonPressed();
	void OnButtonPressed(const struct FName& ButtonName, EBtlInputEventType Type);
	void OnButtonReleased(const struct FName& ButtonName, EBtlInputEventType Type);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnBeginAttackState();
	void BindUnitEvent(class ABtlCharacterBase* Unit);
	void OnStateChanged(EBattleActionState NowState, EBattleActionState PreState);
	void UnbindUnitEvent(class ABtlCharacterBase* Unit);
	void OnPaused();
	void OnUnPaused();
	void InitializeInputState();
	void OnWon();
	void OnOperationUnitChanged(class ABtlCharacterBase* PrevOperationUnit, class ABtlCharacterBase* NowOperationUnit);
	void OnArtsSwapButtonPressed(const struct FName& ButtonName, EBtlInputEventType Type);
	void OnArtsSwapButtonReleased(const struct FName& ButtonName, EBtlInputEventType Type);
	void ExecuteUbergraph_BP_DerivedInputStateComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
