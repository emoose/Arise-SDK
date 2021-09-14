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

// BlueprintGeneratedClass BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C
// 0x00D0 (0x0110 - 0x0040)
class UBP_MGC_TASK_NotifyCollision_C : public UBtlMagicTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	class UCurveVector*                                AnimLocation;                                             // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FBtlLinerFloatCurve                         AnimScaleSimple;                                          // 0x0058(0x0010) (Edit, BlueprintVisible)
	class UCurveFloat*                                 AnimScaleCurve;                                           // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0070(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FName                                       Identifier;                                               // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBeginOverlap;                                           // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndOverlap;                                             // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bFirst;                                                   // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 HitComponents1;                                           // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<class UPrimitiveComponent*>                 HitComponents2;                                           // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	float                                              Radius;                                                   // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	TArray<class AActor*>                              IgnoreActor;                                              // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	bool                                               IgnoreOwner;                                              // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreWorldObject;                                        // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreCharacter;                                          // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreOwnerGroupCharacter;                                // 0x00EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreTargetGroupCharacter;                               // 0x00EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreOwnerSpellMagic;                                    // 0x00ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00EE(0x0002) MISSED OFFSET
	struct FVector                                     PrevLocation;                                             // 0x00F0(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnoreFriendsGroupSpellMagic;                             // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreRivalGroupSpellMagic;                               // 0x00FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreBattleWall;                                         // 0x00FE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x00FF(0x0001) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C");
		return ptr;
	}


	struct FName GetIdentifier();
	bool Received_ReplaceTask(class UBtlMagicTask* NewTask);
	struct FString Received_GetNotesInfomation();
	void Received_DebugRender(float FrameDeltaTime);
	void IsSomeGroup(EBtlUnitGroup SelfGroup, EBtlUnitGroup TargetGroup, bool* SameGroup);
	void IsFilterActor(class AActor* Actor, TEnumAsByte<ECollisionChannel> CollisionObjectType, bool* AddActor);
	struct FString Received_GetErrorMessage(class UBtlMagicAsset* Asset);
	void TickFinish(TArray<class UPrimitiveComponent*>* Prev, TArray<class UPrimitiveComponent*>* Current);
	void TickHit(class AActor* HitActor, class UPrimitiveComponent* HitComponent, TArray<class UPrimitiveComponent*>* Prev, TArray<class UPrimitiveComponent*>* Current);
	struct FString Received_GetTaskName();
	void UpdateParam(float ElapsedTime);
	void Received_Begin();
	void Received_Tick(float FrameDeltaTime, float ElapsedTime);
	void ExecuteUbergraph_BP_MGC_TASK_NotifyCollision(int EntryPoint);
	void OnEndOverlap__DelegateSignature(class UPrimitiveComponent* Collision);
	void OnBeginOverlap__DelegateSignature(class UPrimitiveComponent* Collision);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
