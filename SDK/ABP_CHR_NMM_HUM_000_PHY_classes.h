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

// AnimBlueprintGeneratedClass ABP_CHR_NMM_HUM_000_PHY.ABP_CHR_NMM_HUM_000_PHY_C
// 0x28B0 (0x2E10 - 0x0560)
class UABP_CHR_NMM_HUM_000_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D0E1FCCB49C4AE9AE2F0A3B04EBDA045;      // 0x0568(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_F56F126E4170442BF4114B9908DC317C;  // 0x05B0(0x0068)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_14D401C0410519DD53AD02A52DA91A42;// 0x0618(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_06847E8143A18D6DBA411D97FF08F621;// 0x0660(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x06A8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_08EB5C224D1CC02DEC6240AFFF72198F;// 0x06B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2742178449627E22F68AC1A833A21B58;// 0x0AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F0E8E1394DA87010526BE2B4F51E98DA;// 0x0E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C7E7FEEE44B3DE1D84BEF4A3514FF78F;// 0x1280(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A9075092483370E87DDC9BBA20A8F484;// 0x1670(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_90300DCD4A1DF8C2BBBD8FA6332034B1;// 0x1A60(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EB82CEF84C9031CC7AEB5492D0B36BA8;// 0x1E50(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_12FDFBB54EBAA6BFE44AA28B6BC742B6;// 0x2240(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_00B07950409D0D5FC14743ACF76E9408;// 0x2630(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_01A701784DC22684AF6040861400FEAF;// 0x2A20(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_NMM_HUM_000_PHY.ABP_CHR_NMM_HUM_000_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMM_HUM_000_PHY_AnimGraphNode_AnimDynamics_90300DCD4A1DF8C2BBBD8FA6332034B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMM_HUM_000_PHY_AnimGraphNode_AnimDynamics_01A701784DC22684AF6040861400FEAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMM_HUM_000_PHY_AnimGraphNode_AnimDynamics_A9075092483370E87DDC9BBA20A8F484();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMM_HUM_000_PHY_AnimGraphNode_AnimDynamics_C7E7FEEE44B3DE1D84BEF4A3514FF78F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMM_HUM_000_PHY_AnimGraphNode_AnimDynamics_00B07950409D0D5FC14743ACF76E9408();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMM_HUM_000_PHY_AnimGraphNode_AnimDynamics_F0E8E1394DA87010526BE2B4F51E98DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMM_HUM_000_PHY_AnimGraphNode_AnimDynamics_12FDFBB54EBAA6BFE44AA28B6BC742B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMM_HUM_000_PHY_AnimGraphNode_AnimDynamics_2742178449627E22F68AC1A833A21B58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMM_HUM_000_PHY_AnimGraphNode_AnimDynamics_EB82CEF84C9031CC7AEB5492D0B36BA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMM_HUM_000_PHY_AnimGraphNode_AnimDynamics_08EB5C224D1CC02DEC6240AFFF72198F();
	void ExecuteUbergraph_ABP_CHR_NMM_HUM_000_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
