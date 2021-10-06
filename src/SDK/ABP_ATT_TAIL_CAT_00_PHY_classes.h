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

// AnimBlueprintGeneratedClass ABP_ATT_TAIL_CAT_00_PHY.ABP_ATT_TAIL_CAT_00_PHY_C
// 0x1110 (0x1670 - 0x0560)
class UABP_ATT_TAIL_CAT_00_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8F3C4FF24EAE537664F61680D37D82CE;      // 0x0568(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_79B608BB41FFF68B35EC25992A911361;  // 0x05B0(0x0068)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0618(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6BFC454D497041701D3E1CA12845DFEC;// 0x0620(0x03F0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EBF8558C4C5DAD6A782C6CB2ECA7A179;// 0x0A10(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6E57EB51476EB5C5C97563A363EFD872;// 0x0A58(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B4091F544A03457699CEB49FCC8B6599;// 0x0AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BF53C7F84326CBD2BF3076803DDF2332;// 0x0E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8F8170784040EE0B4B02929BEEE2CBFC;// 0x1280(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_ATT_TAIL_CAT_00_PHY.ABP_ATT_TAIL_CAT_00_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ATT_TAIL_CAT_00_PHY_AnimGraphNode_AnimDynamics_B4091F544A03457699CEB49FCC8B6599();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ATT_TAIL_CAT_00_PHY_AnimGraphNode_AnimDynamics_6BFC454D497041701D3E1CA12845DFEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ATT_TAIL_CAT_00_PHY_AnimGraphNode_AnimDynamics_8F8170784040EE0B4B02929BEEE2CBFC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ATT_TAIL_CAT_00_PHY_AnimGraphNode_AnimDynamics_BF53C7F84326CBD2BF3076803DDF2332();
	void ExecuteUbergraph_ABP_ATT_TAIL_CAT_00_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
