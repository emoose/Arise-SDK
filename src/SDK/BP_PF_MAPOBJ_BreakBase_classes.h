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

// BlueprintGeneratedClass BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C
// 0x0043 (0x0473 - 0x0430)
class ABP_PF_MAPOBJ_BreakBase_C : public ABP_PF_MAPOBJ_SwitchModel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	int                                                HP;                                                       // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	class UClass*                                      FieldActionEvent;                                         // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNext;                                                    // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	class AActor*                                      AttackActor;                                              // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HitHeightOffset;                                          // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitLength;                                                // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTrace;                                               // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	class UClass*                                      InteractEvent;                                            // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPoped;                                                   // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHide;                                                    // 0x0471(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishFieldAction;                                       // 0x0472(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_MAPOBJ_BreakBase.BP_PF_MAPOBJ_BreakBase_C");
		return ptr;
	}


	void GetDebShowInfoMessage(bool* bValid, struct FString* OutMessage, struct FLinearColor* OutColor);
	void OnSetHideModel(bool bVisibility);
	void OnSetGatheredModel(bool bVisibility);
	void OnSetBaseModel(bool bVisibility);
	void IsPop(bool* bEnable, int* Value);
	void SetDiscover();
	void IsDiscover(bool* bCleared);
	void GetPrimitiveComponent(class UPrimitiveComponent** PrimitiveComponent);
	void GetLineTraceHit(class AActor* Actor, float HeightOffset, float Length, bool bShowTrace, bool* bIsHit, struct FVector* HitLocation);
	void FinishBreak();
	void Break();
	void FinishDamage();
	void Damage();
	void OnDamage(int Damage, bool* bBreak);
	void UserConstructionScript();
	void On_Receive_Field_Action();
	void ReceiveOnConstruction(const struct FTransform& Transform);
	void OnFoundTrapIn();
	void SetShowModel();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PF_MAPOBJ_BreakBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
