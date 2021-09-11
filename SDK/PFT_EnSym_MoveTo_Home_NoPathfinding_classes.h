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

// BlueprintGeneratedClass PFT_EnSym_MoveTo_Home_NoPathfinding.PFT_EnSym_MoveTo_Home_NoPathfinding_C
// 0x0020 (0x0100 - 0x00E0)
class UPFT_EnSym_MoveTo_Home_NoPathfinding_C : public UPFT_EnSym_Base2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (Transient, DuplicateTransient)
	TArray<struct FVector>                             PathPoints;                                               // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PointsIndex;                                              // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AbortTime;                                                // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_MoveTo_Home_NoPathfinding.PFT_EnSym_MoveTo_Home_NoPathfinding_C");
		return ptr;
	}


	void ShowLog();
	void GetPathStart(struct FVector* Retrun_Value);
	void DrawDebugPath();
	void UpdatePathPointIndex(bool* ReachedDestination);
	void IsAtLocation(const struct FVector& Location, float AcceptDistance, bool* Result);
	void GetCurrentPathPoint(struct FVector* Point);
	void OnExecute();
	void OnTick(float DeltaTime);
	void ExecuteUbergraph_PFT_EnSym_MoveTo_Home_NoPathfinding(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
