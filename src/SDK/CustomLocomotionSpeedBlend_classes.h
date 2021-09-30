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

// BlueprintGeneratedClass CustomLocomotionSpeedBlend.CustomLocomotionSpeedBlend_C
// 0x0000 (0x0038 - 0x0038)
class UCustomLocomotionSpeedBlend_C : public UASState_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CustomLocomotionSpeedBlend.CustomLocomotionSpeedBlend_C");
		return ptr;
	}


	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
