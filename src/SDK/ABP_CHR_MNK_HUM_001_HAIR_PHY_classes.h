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

// AnimBlueprintGeneratedClass ABP_CHR_MNK_HUM_001_HAIR_PHY.ABP_CHR_MNK_HUM_001_HAIR_PHY_C
// 0x38E8 (0x3E48 - 0x0560)
class UABP_CHR_MNK_HUM_001_HAIR_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DED4BB904CB2894DE05371A254D56355;      // 0x0568(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1E2D2E0940F9F8E8386B6898FF3F318A;// 0x05B0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_089425EF472E9AF9A3A6049936AEC98D;// 0x05F8(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C4EC22C74BD8F47E6E3C6896EEEB81EE;// 0x0640(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3221D50546ECC1718AE0FFA4430B44BB;// 0x0A30(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AC19ECC6484A4FCBA4676B8331781144;// 0x0E20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B5E985CC4D338BCE6272FAA5EB5CCC89;// 0x1210(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_861E9A0545869636E455AFBD420EC563;// 0x1600(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B6F8B89C44D1268B4DD20CAF9FDF4596;// 0x19F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_13F7DB2343264F02F6A52EBB189DAD0F;// 0x1DE0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_596E554C4274C8C86B886B9B0D5F9399;// 0x21D0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C860A62D415CB816A34F55ACCBDAD8CA;// 0x25C0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E3526B4C47AA111C55EB6FA605BDBF3B;// 0x29B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_040B944B441B305DD5CDAEA0F7D48F70;// 0x2DA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0EA34B8B4909C852E84042AB85151040;// 0x3190(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2739269D43D2B72C2F2FC0BD92B96DB7;// 0x3580(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2EFAA9E14A15E5B4CDB82EA0D7C74CC8;// 0x3970(0x03F0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_E9573EDB4C6DB5044806A69C2AD266F7;// 0x3D60(0x00E8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_MNK_HUM_001_HAIR_PHY.ABP_CHR_MNK_HUM_001_HAIR_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_2EFAA9E14A15E5B4CDB82EA0D7C74CC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_596E554C4274C8C86B886B9B0D5F9399();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_13F7DB2343264F02F6A52EBB189DAD0F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_B6F8B89C44D1268B4DD20CAF9FDF4596();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_2739269D43D2B72C2F2FC0BD92B96DB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_861E9A0545869636E455AFBD420EC563();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_B5E985CC4D338BCE6272FAA5EB5CCC89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_0EA34B8B4909C852E84042AB85151040();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_AC19ECC6484A4FCBA4676B8331781144();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_040B944B441B305DD5CDAEA0F7D48F70();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_E3526B4C47AA111C55EB6FA605BDBF3B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_3221D50546ECC1718AE0FFA4430B44BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_C4EC22C74BD8F47E6E3C6896EEEB81EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_C860A62D415CB816A34F55ACCBDAD8CA();
	void ExecuteUbergraph_ABP_CHR_MNK_HUM_001_HAIR_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
