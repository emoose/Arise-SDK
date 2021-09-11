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

// BlueprintGeneratedClass PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C
// 0x0024 (0x0104 - 0x00E0)
class UPFT_EnSym_GetRandomMovePoint_EQS_C : public UPFT_EnSym_Base2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     Left;                                                     // 0x00E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x00F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C");
		return ptr;
	}


	void PrintDebugLog();
	void IsOutMoveRange(float RotatorZ, float MoveLength, bool* Result);
	void GetMoveDirToLocation(float RotatorZ, float MoveLength, struct FVector* TargetLocation);
	void GetRotatorZ(float Min, float Max, float* RotatorZ);
	void GetMovePoint();
	void OnExecute();
	void ExecuteUbergraph_PFT_EnSym_GetRandomMovePoint_EQS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
