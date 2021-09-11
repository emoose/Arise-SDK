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

// BlueprintGeneratedClass PFT_EnSym_Base2.PFT_EnSym_Base2_C
// 0x0040 (0x00E0 - 0x00A0)
class UPFT_EnSym_Base2_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	class ABP_EncountSymbolBase_C*                     ControlledPawn;                                           // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APFAIC_EnSym_Base_C*                         AIController;                                             // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UPFEncountSymbolComponent*                   ActorComponent;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBlackboardComponent*                        Blackboard;                                               // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bEnableHitCollision;                                      // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              StackAbortTime;                                           // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StackMoveDistance;                                        // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StackTime;                                                // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_Base2.PFT_EnSym_Base2_C");
		return ptr;
	}


	void SetStatckMode();
	void IsStacked(bool* Result);
	void UpdateStackLocation();
	void GetGroundLocation(const struct FVector& InLocation, bool* Result, struct FVector* OutLocation);
	void Finish(bool bSuccess);
	void Initialize(class AAIController* InController, class APawn* InPawn);
	void IsCurrentActionState(const struct FName& State, bool* Result);
	void ChangeActionState(const struct FName& InStateID);
	void IsChangeActionState(const struct FName& State, bool* Result);
	void OnAbort();
	void OnTick(float DeltaTime);
	void OnExecute();
	void OnFinishMove(TEnumAsByte<EPathFollowingResult> Result);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void Bind();
	void Unbind();
	void OnHitCollision();
	void ExecuteUbergraph_PFT_EnSym_Base2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
