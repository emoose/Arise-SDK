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

// BlueprintGeneratedClass BP_PF_AT_ToMoveBrake.BP_PF_AT_ToMoveBrake_C
// 0x0001 (0x0051 - 0x0050)
class UBP_PF_AT_ToMoveBrake_C : public UASTransition_BlueprintBase
{
public:
	TEnumAsByte<EPFActorMovementState>                 MovementState;                                            // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_AT_ToMoveBrake.BP_PF_AT_ToMoveBrake_C");
		return ptr;
	}


	void GetBorderBsValue(TEnumAsByte<EPFActorMovementState> InMovementState, float* OutBsValue);
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
