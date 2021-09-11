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

// AnimBlueprintGeneratedClass ABP_CHR_NMC_HUM_000_PHY.ABP_CHR_NMC_HUM_000_PHY_C
// 0x18F0 (0x1E50 - 0x0560)
class UABP_CHR_NMC_HUM_000_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D6A692EC491BD9233ADDCB8083235423;      // 0x0568(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CD8F39484DB1D08D649896836F150466;// 0x05B0(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_098600F24976DCA78D7D7CA4D9E093F0;  // 0x05F8(0x0068)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CC9C2F054237EA560850048B2D41E8E0;// 0x0660(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x06A8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7E1DF941435752EBC6094683DEA23348;// 0x06B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7BC31637408E65A917FC3F8174332BF7;// 0x0AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6FC5A6DB4ED008B9125ED988B4A486B4;// 0x0E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B1730D1045DAB295103CD481867910A8;// 0x1280(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BFE1852B43D4F35A710713A3C696C8A5;// 0x1670(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A5E07F1748F7278C654D3DB98ABEDAF8;// 0x1A60(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_NMC_HUM_000_PHY.ABP_CHR_NMC_HUM_000_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMC_HUM_000_PHY_AnimGraphNode_AnimDynamics_B1730D1045DAB295103CD481867910A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMC_HUM_000_PHY_AnimGraphNode_AnimDynamics_A5E07F1748F7278C654D3DB98ABEDAF8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMC_HUM_000_PHY_AnimGraphNode_AnimDynamics_6FC5A6DB4ED008B9125ED988B4A486B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMC_HUM_000_PHY_AnimGraphNode_AnimDynamics_7BC31637408E65A917FC3F8174332BF7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMC_HUM_000_PHY_AnimGraphNode_AnimDynamics_7E1DF941435752EBC6094683DEA23348();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMC_HUM_000_PHY_AnimGraphNode_AnimDynamics_BFE1852B43D4F35A710713A3C696C8A5();
	void ExecuteUbergraph_ABP_CHR_NMC_HUM_000_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
