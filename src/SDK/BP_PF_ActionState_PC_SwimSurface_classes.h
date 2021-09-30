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

// BlueprintGeneratedClass BP_PF_ActionState_PC_SwimSurface.BP_PF_ActionState_PC_SwimSurface_C
// 0x0010 (0x0040 - 0x0030)
class UBP_PF_ActionState_PC_SwimSurface_C : public UPFActionStateBlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (Transient, DuplicateTransient)
	bool                                               bApplyMovement;                                           // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              DisableMovementTimer;                                     // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_ActionState_PC_SwimSurface.BP_PF_ActionState_PC_SwimSurface_C");
		return ptr;
	}


	void IsPrevStateFloating(const struct FName& InPrevState, bool* Out);
	void SetIKEnable(bool Enable);
	struct FPFActionStateTickResult K2_Tick(float DeltaSeconds);
	void K2_Begin(const struct FName& PrevState);
	void K2_End(const struct FName& NextState);
	void ExecuteUbergraph_BP_PF_ActionState_PC_SwimSurface(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
