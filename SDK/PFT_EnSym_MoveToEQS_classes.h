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

// BlueprintGeneratedClass PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C
// 0x0050 (0x0130 - 0x00E0)
class UPFT_EnSym_MoveToEQS_C : public UPFT_EnSym_Base2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (Transient, DuplicateTransient)
	TArray<struct FVector>                             PathPoints;                                               // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PointsIndex;                                              // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x0100(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               QueryProcessing;                                          // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	class UEnvQuery*                                   EQSQuery;                                                 // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LoopTime;                                                 // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FinishLocation;                                           // 0x011C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpSpeed;                                              // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AbortTime;                                                // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C");
		return ptr;
	}


	void GetPathEnd(struct FVector* Retrun_Value);
	void FindPath();
	void ShowLog();
	void GetPathStart(struct FVector* Retrun_Value);
	void DrawDebugPath();
	void UpdatePathPointIndex(bool* ReachedDestination);
	void IsAtLocation(const struct FVector& Location, float AcceptDistance, bool* Result);
	void GetCurrentPathPoint(struct FVector* Point);
	void OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void ExecuteEQS();
	void OnExecute();
	void OnTick(float DeltaTime);
	void OnExecEQS();
	void OnAbort();
	void ExecuteUbergraph_PFT_EnSym_MoveToEQS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
