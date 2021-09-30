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

// BlueprintGeneratedClass PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C
// 0x003C (0x011C - 0x00E0)
class UPFT_EnSym_UpdateNextSplinePoint_C : public UPFT_EnSym_Base2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BB_NextSplinePoint;                                       // 0x00E8(0x0028) (Edit, BlueprintVisible)
	int                                                NextPoint;                                                // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastPoint;                                                // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBackMove;                                                // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0119(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReverse;                                                 // 0x011A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAirLoop;                                                 // 0x011B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C");
		return ptr;
	}


	void IsAtLocation(float AcceptDistance, bool* Result);
	void GetSplineData(struct FVector* Location);
	void GetNextPoint(bool* Lazy);
	void GetNextMovePoint();
	void InitSpline();
	void OnTick(float DeltaTime);
	void OnExecute();
	void ExecuteUbergraph_PFT_EnSym_UpdateNextSplinePoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
