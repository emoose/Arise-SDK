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

// AnimBlueprintGeneratedClass ABP_CHR_ARI_HUM_060_PHY.ABP_CHR_ARI_HUM_060_PHY_C
// 0x38F0 (0x3E50 - 0x0560)
class UABP_CHR_ARI_HUM_060_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5174172D4D8650331407A78C9C05A90E;      // 0x0568(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_BFAF09884AD807D2DF7D869364D0B994;// 0x05B0(0x00E8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0698(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_67F554CF48E9C04185E2C4B1B2A451E0;// 0x06A0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E4A127594B832ED7F6CE048294F80511;// 0x0A90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C03DA596422B12C370F436A96ED9BBBD;// 0x0E80(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FC056069427DFCE5E6598C859119A96B;// 0x1270(0x03F0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E103B77E4D737F73840DADA1CE2F5196;// 0x1660(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_55059E934092FAE0BB51FB8A32642397;// 0x16A8(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8CC9FF2C48652E8C815C148A3E8868A1;// 0x16F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_18641A9445987C4D3016B897AAF503BD;// 0x1AE0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FA7682824022BB88EE6163A001C95BD4;// 0x1ED0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E8013D424C923E0B5BEF0BB5AEA8DC46;// 0x22C0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_873C13F94839D2573AF684A1AEA04A7A;// 0x26B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2BED50E64D81114319C71781D9F9E973;// 0x2AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_064ABE2048F1E8C730B7DEB1102C1C91;// 0x2E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0DD2E8314BA161044AD73C9263CA7ACB;// 0x3280(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_28B9BF5A4DF43A625E652BBA5B26E864;// 0x3670(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_49A717A14730EDE2556D6BB16A0E6EB9;// 0x3A60(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_ARI_HUM_060_PHY.ABP_CHR_ARI_HUM_060_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_060_PHY_AnimGraphNode_AnimDynamics_49A717A14730EDE2556D6BB16A0E6EB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_060_PHY_AnimGraphNode_AnimDynamics_FA7682824022BB88EE6163A001C95BD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_060_PHY_AnimGraphNode_AnimDynamics_28B9BF5A4DF43A625E652BBA5B26E864();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_060_PHY_AnimGraphNode_AnimDynamics_0DD2E8314BA161044AD73C9263CA7ACB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_060_PHY_AnimGraphNode_AnimDynamics_E8013D424C923E0B5BEF0BB5AEA8DC46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_060_PHY_AnimGraphNode_AnimDynamics_18641A9445987C4D3016B897AAF503BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_060_PHY_AnimGraphNode_AnimDynamics_8CC9FF2C48652E8C815C148A3E8868A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_060_PHY_AnimGraphNode_AnimDynamics_064ABE2048F1E8C730B7DEB1102C1C91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_060_PHY_AnimGraphNode_AnimDynamics_FC056069427DFCE5E6598C859119A96B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_060_PHY_AnimGraphNode_AnimDynamics_2BED50E64D81114319C71781D9F9E973();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_060_PHY_AnimGraphNode_AnimDynamics_C03DA596422B12C370F436A96ED9BBBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_060_PHY_AnimGraphNode_AnimDynamics_E4A127594B832ED7F6CE048294F80511();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_060_PHY_AnimGraphNode_AnimDynamics_873C13F94839D2573AF684A1AEA04A7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_060_PHY_AnimGraphNode_AnimDynamics_67F554CF48E9C04185E2C4B1B2A451E0();
	void ExecuteUbergraph_ABP_CHR_ARI_HUM_060_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
