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

// AnimBlueprintGeneratedClass ABP_CHR_ARI_HUM_053_HAIR_PHY.ABP_CHR_ARI_HUM_053_HAIR_PHY_C
// 0x2538 (0x2A98 - 0x0560)
class UABP_CHR_ARI_HUM_053_HAIR_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F2E5DD2E484F37CCD7C1509971A304EA;      // 0x0568(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A4272C3540DC0A24398379B9EFF012D6;// 0x05B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A93063F94F9F14B3A004699257105E50;// 0x09A0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5D35B99F4038B3B3D49F8D9E5F1C2424;// 0x0D90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AE3D4435418D6E2BFE818281591660B1;// 0x1180(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3EFCDD47487D6507FA5277B2FDDD1FBF;// 0x1570(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AB07634144BEF36794FEDA941E883B50;// 0x1960(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BD7F69BE44C0A67721F1EFB71C6650B1;// 0x1D50(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F08F1A0B4F7CC5853379B7A5DF982DD6;// 0x2140(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FF670F07438B7F6EDB252CA9F05C9D39;// 0x2530(0x03F0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1AF2935144763DD642BD7E91032050A7;// 0x2920(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_3063B02B4F7B8D772BA017BC91E86B1A;// 0x2968(0x00E8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_395B02E644450B36CA9E17B436A061DA;// 0x2A50(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_ARI_HUM_053_HAIR_PHY.ABP_CHR_ARI_HUM_053_HAIR_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_5D35B99F4038B3B3D49F8D9E5F1C2424();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_A93063F94F9F14B3A004699257105E50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_AB07634144BEF36794FEDA941E883B50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_FF670F07438B7F6EDB252CA9F05C9D39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_AE3D4435418D6E2BFE818281591660B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_F08F1A0B4F7CC5853379B7A5DF982DD6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_BD7F69BE44C0A67721F1EFB71C6650B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_A4272C3540DC0A24398379B9EFF012D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_3EFCDD47487D6507FA5277B2FDDD1FBF();
	void ExecuteUbergraph_ABP_CHR_ARI_HUM_053_HAIR_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
