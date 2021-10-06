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

// AnimBlueprintGeneratedClass ABP_CHR_ARI_HUM_004_HAIR_PHY.ABP_CHR_ARI_HUM_004_HAIR_PHY_C
// 0x2D20 (0x3280 - 0x0560)
class UABP_CHR_ARI_HUM_004_HAIR_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_012433954753AF6EC83200BEE8125A00;      // 0x0568(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EF3C94104B1F7531933E0FBF3DACC915;// 0x05B0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05F8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FCE4FC8643713E8C9B4C0CB5C83EEAB2;// 0x0600(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5FBA02174313944A0D8AD79CECD1D5E8;// 0x09F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_204F507A4248D1164A6111B2D539D5A4;// 0x0DE0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6D86A95648DCDE1D5526B9BD6A3A1F4F;// 0x11D0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5A7D4C5346B2EBD84659F097CC4CA1CF;// 0x15C0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_702C4EF040182B92EF85E28B882CAF17;// 0x19B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F63CF1A44DA30CA5E4BBB8B87CFE854E;// 0x1DA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8775089649EBD64795C8EEA01F81426E;// 0x2190(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5B102AF041B9FF9D7354A39D06A2C7A9;// 0x2580(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3212A52C436AAFF0D22BD8974F34ADD3;// 0x2970(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3C91D9DE4FF1B7E679BEABA0DCE339CD;// 0x2D60(0x03F0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8578752743439A2AAA1F4ABCA86E115D;// 0x3150(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_9BF017044356AC299649C888EC828B40;// 0x3198(0x00E8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_ARI_HUM_004_HAIR_PHY.ABP_CHR_ARI_HUM_004_HAIR_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR_PHY_AnimGraphNode_AnimDynamics_F63CF1A44DA30CA5E4BBB8B87CFE854E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR_PHY_AnimGraphNode_AnimDynamics_702C4EF040182B92EF85E28B882CAF17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR_PHY_AnimGraphNode_AnimDynamics_3C91D9DE4FF1B7E679BEABA0DCE339CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR_PHY_AnimGraphNode_AnimDynamics_5A7D4C5346B2EBD84659F097CC4CA1CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR_PHY_AnimGraphNode_AnimDynamics_6D86A95648DCDE1D5526B9BD6A3A1F4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR_PHY_AnimGraphNode_AnimDynamics_204F507A4248D1164A6111B2D539D5A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR_PHY_AnimGraphNode_AnimDynamics_5FBA02174313944A0D8AD79CECD1D5E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR_PHY_AnimGraphNode_AnimDynamics_FCE4FC8643713E8C9B4C0CB5C83EEAB2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR_PHY_AnimGraphNode_AnimDynamics_3212A52C436AAFF0D22BD8974F34ADD3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR_PHY_AnimGraphNode_AnimDynamics_5B102AF041B9FF9D7354A39D06A2C7A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR_PHY_AnimGraphNode_AnimDynamics_8775089649EBD64795C8EEA01F81426E();
	void ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
