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

// BlueprintGeneratedClass PFAIC_EnSym_Base.PFAIC_EnSym_Base_C
// 0x0043 (0x050C - 0x04C9)
class APFAIC_EnSym_Base_C : public APFAIC_EnSym_Common_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (Transient, DuplicateTransient)
	class ABP_EncountSymbolBase_C*                     ControlledPawn;                                           // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFindedTarget;                                            // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEscape;                                                  // 0x04E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunAI;                                                   // 0x04E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurn;                                                    // 0x04E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDetect;                                                  // 0x04E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWait;                                                    // 0x04E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExecJump;                                                // 0x04E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipGiveupWait;                                          // 0x04E7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBtlTurn;                                              // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExecFall;                                                // 0x04E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04EA(0x0002) MISSED OFFSET
	float                                              FlyDuration;                                              // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Elapse;                                                   // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Forward;                                                  // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Up;                                                       // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamOutMoveSpeedMagnify;                                   // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HomeLocation;                                             // 0x0500(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFAIC_EnSym_Base.PFAIC_EnSym_Base_C");
		return ptr;
	}


	bool BPE_IsExecFall();
	void CalcFollowRange();
	bool BPE_IsExecJump();
	void CalcRandomMoveRange();
	void SetWanderingMode();
	void InitControlledPawn();
	void GetInitSplinePoint(int* Result);
	void OnChangeRender(bool bRendering);
	void FinishBackHome();
	void FinishRepop();
	void InitBackHomeBlueprint();
	void RepopSymbol();
	void PrintJumpError();
	void IsPerception(bool* Success);
	void IsFinded(bool* Success);
	void IsFollow(bool* Success);
	void SetRandomAIState();
	void RestartAI();
	void StopAI();
	void IsEscape(bool* Escape);
	void SetFollowStart();
	void SetEntrySearchArea(bool bEntry);
	void SetMoveSpeed(bool IsWalk, float Magnify);
	void LostTarget();
	void FindedTarget();
	void RespawnSymbol();
	void InitBlackBoard();
	void UserConstructionScript();
	void OnInitCallback();
	void ReceiveBeginPlay();
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void ReceiveDestroyed();
	void OnCeilFalling();
	void OnDetectActor();
	void OnInitControlledPawn();
	void OnInitBehaviour();
	void OnAIPaused(bool bPause);
	void BPE_ExecJump();
	void BPE_ForceGiveup();
	void OnJumpMove();
	void OnLaunchCharacter();
	void ExecuteUbergraph_PFAIC_EnSym_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
