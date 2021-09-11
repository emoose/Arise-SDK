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

// BlueprintGeneratedClass PFT_EnSym_Base.PFT_EnSym_Base_C
// 0x0039 (0x00D9 - 0x00A0)
class UPFT_EnSym_Base_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	class APFAIC_EnSym_Base_C*                         AIController;                                             // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_EncountSymbolBase_C*                     ControlledPawn;                                           // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class UPFEncountSymbolComponent*                   ActorComponent;                                           // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBlackboardComponent*                        Blackboard;                                               // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bEnableHitCollision;                                      // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_Base.PFT_EnSym_Base_C");
		return ptr;
	}


	void InitTask(class AAIController* InController, class APawn* InPawn);
	void Finalize();
	void IsCurrentActionState(const struct FName& State, bool* Result);
	void ChangeActionState(const struct FName& InStateID);
	void IsNearHomeLocation(float Near, bool* Result);
	void IsChangeActionState(const struct FName& State, bool* Result);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void OnHitCollision();
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnAbort();
	void OnTick(float DeltaTime);
	void OnExecute();
	void OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result);
	void OnFinishMove(TEnumAsByte<EPathFollowingResult> Result);
	void ExecuteUbergraph_PFT_EnSym_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
