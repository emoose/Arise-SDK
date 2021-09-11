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

// AnimBlueprintGeneratedClass ABP_CHR_ARI_HUM_003_PHY.ABP_CHR_ARI_HUM_003_PHY_C
// 0x3110 (0x3670 - 0x0560)
class UABP_CHR_ARI_HUM_003_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6E67030042B8380CDE2F0CBBFBDAFD65;      // 0x0568(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_45F0281A417B8FCF44EA1586C48A98F7;// 0x05B0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5A8B201640996BAD0393458C56F942E1;// 0x05F8(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_FF86878B4CBF1931320DA79E78F2BC98;// 0x0640(0x00E8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0728(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0DB2424242879F2251D333A7930F093D;// 0x0730(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CD476A48477D61C7D84196B8CA5CCF63;// 0x0B20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BE2962F244E2EDE8355132890A2D0299;// 0x0F10(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6A8369B24AAF6F61E7068481EDAB2F69;// 0x1300(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7A52714E41526794AF95849271E09300;// 0x16F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2988992F4015A7C74FE0D6999FE6F199;// 0x1AE0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_90A1BC994E838B1B9525898A78C8785D;// 0x1ED0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_317328684EF0A2371D89CD9AD179FE10;// 0x22C0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5EC8242846EA710A4B058E8DADE1B459;// 0x26B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_52CEF8804F74B0F75B5DFEA962C1F0C3;// 0x2AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C6FB63674BE7313416CF2BB72C2190C6;// 0x2E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4D577C414C102B0A39D0A4AF337C19DA;// 0x3280(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_ARI_HUM_003_PHY.ABP_CHR_ARI_HUM_003_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_003_PHY_AnimGraphNode_AnimDynamics_4D577C414C102B0A39D0A4AF337C19DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_003_PHY_AnimGraphNode_AnimDynamics_90A1BC994E838B1B9525898A78C8785D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_003_PHY_AnimGraphNode_AnimDynamics_C6FB63674BE7313416CF2BB72C2190C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_003_PHY_AnimGraphNode_AnimDynamics_2988992F4015A7C74FE0D6999FE6F199();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_003_PHY_AnimGraphNode_AnimDynamics_7A52714E41526794AF95849271E09300();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_003_PHY_AnimGraphNode_AnimDynamics_52CEF8804F74B0F75B5DFEA962C1F0C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_003_PHY_AnimGraphNode_AnimDynamics_6A8369B24AAF6F61E7068481EDAB2F69();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_003_PHY_AnimGraphNode_AnimDynamics_BE2962F244E2EDE8355132890A2D0299();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_003_PHY_AnimGraphNode_AnimDynamics_CD476A48477D61C7D84196B8CA5CCF63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_003_PHY_AnimGraphNode_AnimDynamics_5EC8242846EA710A4B058E8DADE1B459();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_003_PHY_AnimGraphNode_AnimDynamics_0DB2424242879F2251D333A7930F093D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_003_PHY_AnimGraphNode_AnimDynamics_317328684EF0A2371D89CD9AD179FE10();
	void ExecuteUbergraph_ABP_CHR_ARI_HUM_003_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
