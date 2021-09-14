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

// AnimBlueprintGeneratedClass ABP_CHR_SOL_HUM_000_PHY.ABP_CHR_SOL_HUM_000_PHY_C
// 0x0D20 (0x1280 - 0x0560)
class UABP_CHR_SOL_HUM_000_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_34235B2746CE2F1505934BAA8650A1BE;      // 0x0568(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_465E9B1847708196A5786A80C91A3E21;  // 0x05B0(0x0068)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0618(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BF7E2D4448D01C997E42AAA606F0A733;// 0x0620(0x03F0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_49EF873741BC56E4BDF09785327D3414;// 0x0A10(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B9632FE04E88A082F85F16A072B8EBAD;// 0x0A58(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7FC077D54B90F2E6B0952BA50E3555A5;// 0x0AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2BA2159D47650BFF7B3A5EAA43EB24AA;// 0x0E90(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_SOL_HUM_000_PHY.ABP_CHR_SOL_HUM_000_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SOL_HUM_000_PHY_AnimGraphNode_AnimDynamics_7FC077D54B90F2E6B0952BA50E3555A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SOL_HUM_000_PHY_AnimGraphNode_AnimDynamics_BF7E2D4448D01C997E42AAA606F0A733();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SOL_HUM_000_PHY_AnimGraphNode_AnimDynamics_2BA2159D47650BFF7B3A5EAA43EB24AA();
	void ExecuteUbergraph_ABP_CHR_SOL_HUM_000_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
