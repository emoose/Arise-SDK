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

// AnimBlueprintGeneratedClass ABP_CHR_ARI_HUM_004_MANT_PHY.ABP_CHR_ARI_HUM_004_MANT_PHY_C
// 0x3900 (0x3E60 - 0x0560)
class UABP_CHR_ARI_HUM_004_MANT_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F1F6F79B42922FECF7B8AC94A268FB1C;// 0x0568(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2574444C464FBCF270D0F0B4417B8038;// 0x05B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_54F22397463EA931BBD715A0974FFB2E;// 0x09A0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_70BD12C04AA56DF8136C7784B042F812;// 0x0D90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_872DDC6345D8187A41E8A99E2033092B;// 0x1180(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1128797C4911F6C66A4EC2A05619F62B;// 0x1570(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_178F5B90470891E05D8E729AA8A252EF;// 0x1960(0x03F0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_88E716874AB3D797D5FCC08A535EE758;// 0x1D50(0x00E8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1E38(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8E05D2AB472141EBC4BA81A3256DA39E;// 0x1E40(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_51C8298849B55414E360F28E1E47EB18;// 0x2230(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_032930444DD5D93A6BBDF2893F3A50A8;// 0x2620(0x03F0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_35A1A0DE4F4F1B699E2E26AD2437853F;// 0x2A10(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x2A58(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E4AEC18B47D2D6ADBC7CC0AE82EE5765;// 0x2A60(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9E2344A347FAB64DAC399C9D41CA2670;// 0x2E50(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_66845AAB448B70FC7F47F58BA9F12B58;// 0x3240(0x03F0)
	struct FAnimNode_Root                              AnimGraphNode_Root_1516CFAA40865AE3C5D1DE9E6130B3C6;      // 0x3630(0x0048)
	unsigned char                                      UnknownData02[0x8];                                       // 0x3678(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_84D8BD334B7A8254ECC2AB8FF356C43E;// 0x3680(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BEE9A1F44DF2A590DA16C298D0907DF9;// 0x3A70(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_ARI_HUM_004_MANT_PHY.ABP_CHR_ARI_HUM_004_MANT_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_MANT_PHY_AnimGraphNode_AnimDynamics_8E05D2AB472141EBC4BA81A3256DA39E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_MANT_PHY_AnimGraphNode_AnimDynamics_178F5B90470891E05D8E729AA8A252EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_MANT_PHY_AnimGraphNode_AnimDynamics_66845AAB448B70FC7F47F58BA9F12B58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_MANT_PHY_AnimGraphNode_AnimDynamics_1128797C4911F6C66A4EC2A05619F62B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_MANT_PHY_AnimGraphNode_AnimDynamics_872DDC6345D8187A41E8A99E2033092B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_MANT_PHY_AnimGraphNode_AnimDynamics_70BD12C04AA56DF8136C7784B042F812();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_MANT_PHY_AnimGraphNode_AnimDynamics_54F22397463EA931BBD715A0974FFB2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_MANT_PHY_AnimGraphNode_AnimDynamics_2574444C464FBCF270D0F0B4417B8038();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_MANT_PHY_AnimGraphNode_AnimDynamics_9E2344A347FAB64DAC399C9D41CA2670();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_MANT_PHY_AnimGraphNode_AnimDynamics_51C8298849B55414E360F28E1E47EB18();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_MANT_PHY_AnimGraphNode_AnimDynamics_032930444DD5D93A6BBDF2893F3A50A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_MANT_PHY_AnimGraphNode_AnimDynamics_84D8BD334B7A8254ECC2AB8FF356C43E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_MANT_PHY_AnimGraphNode_AnimDynamics_BEE9A1F44DF2A590DA16C298D0907DF9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_MANT_PHY_AnimGraphNode_AnimDynamics_E4AEC18B47D2D6ADBC7CC0AE82EE5765();
	void ExecuteUbergraph_ABP_CHR_ARI_HUM_004_MANT_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
