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

// BlueprintGeneratedClass PFBP_EnSym_Placement.PFBP_EnSym_Placement_C
// 0x00CD (0x054D - 0x0480)
class APFBP_EnSym_Placement_C : public APFEnSymPlacement
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               FollowBox;                                                // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAreaComponent*                              LinkRange;                                                // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               SearchBox;                                                // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               WanderingRange;                                           // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPFEncountSymbolID                          ID;                                                       // 0x04A8(0x0010) (Edit, BlueprintVisible)
	bool                                               bUseSearchBox;                                            // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	struct FVector                                     SearchBoxSize;                                            // 0x04BC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class APFBP_EnSym_SplineActor_C*                   MoveRoute;                                                // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	EEnSymWaitType                                     WaitType;                                                 // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EEnSymWanderingType                                WanderingType;                                            // 0x04D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EEnSymFollowType                                   FollowType;                                               // 0x04D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableFly;                                                // 0x04D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyHeight;                                                // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APFEnSymTargetPoint*                         TargetPoint;                                              // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              JumpSpeed;                                                // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpAngle;                                                // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EncountLink;                                              // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	float                                              LinkDistance;                                             // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RushTime;                                                 // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNotify;                                                  // 0x04F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSpawnEvent;                                             // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Radar;                                                    // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0509(0x0003) MISSED OFFSET
	float                                              Variation;                                                // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSpawnEventWithPlacment;                                 // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ATargetPoint*                                PlayerWakeupPoint;                                        // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               LevelDiffChase;                                           // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	float                                              RespawnDistance;                                          // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FollowRange;                                              // 0x0530(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	class ABP_EncountSymbolBase_C*                     SpawnSymbol;                                              // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              OutofNavTime;                                             // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoUsePathFinding;                                        // 0x054C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFBP_EnSym_Placement.PFBP_EnSym_Placement_C");
		return ptr;
	}


	void GetFlyHeigjt(float* FlyHeight);
	void OutputParameter(struct FEncountSymbolParamData* Output);
	void SetLinkRange();
	void SetWanderingRange();
	void SetSearchBox();
	void GetDatabase(bool* Result);
	void Contains(bool* Result);
	void Rebuild();
	void Unload();
	void SetFlyHeight();
	void Build();
	void Ground();
	void IsLoaded(bool* bLoaded);
	void Preload();
	void SetRange();
	void InitSplinePoint();
	void GetBlueprint(class UClass** Class);
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PFBP_EnSym_Placement(int EntryPoint);
	void OnSpawnEventWithPlacment__DelegateSignature(class APFBP_EnSym_Placement_C* Placement, class ABP_EncountSymbolBase_C* Symbol);
	void OnSpawnEvent__DelegateSignature(class APFEncountSymbol* Symbol);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
