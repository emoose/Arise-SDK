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

// BlueprintGeneratedClass TO14_BP_SAT_Prop_Lamp_03_b_MCAM.TO14_BP_SAT_Prop_Lamp_03_b_MCAM_C
// 0x0010 (0x03C8 - 0x03B8)
class ATO14_BP_SAT_Prop_Lamp_03_b_MCAM_C : public ATO14_BP_WT_Base_C
{
public:
	class UCapsuleComponent*                           Capsule;                                                  // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_AlphaMaskComponent_C*                    BP_AlphaMaskComponent;                                    // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BP_SAT_Prop_Lamp_03_b_MCAM.TO14_BP_SAT_Prop_Lamp_03_b_MCAM_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
