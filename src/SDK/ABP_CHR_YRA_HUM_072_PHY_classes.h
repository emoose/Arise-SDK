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

// AnimBlueprintGeneratedClass ABP_CHR_YRA_HUM_072_PHY.ABP_CHR_YRA_HUM_072_PHY_C
// 0x4CA0 (0x5200 - 0x0560)
class UABP_CHR_YRA_HUM_072_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0A9CFD7D407DBCF5AE931FB8BEE0B962;      // 0x0568(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3BEDE223437062CD87FA15A35E807C47;// 0x05B0(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_0BEF8F204E2632AEF82CB7B3D6B46641;// 0x05F8(0x00E8)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0D81D4614B4271B1526DEDAD4325B7E9;// 0x06E0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4FFA9C0E41F04F2D16F5088498E238BC;// 0x0AD0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E7524594481AEB2D555E8793D413A63E;// 0x0EC0(0x03F0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2CC904D34D1AF7EB1A2515B6E66F2028;// 0x12B0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x12F8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2D4EF22E4B57F8605959D4A257A256F1;// 0x1300(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_39E48E804190EBB5A6988FACA6680F88;// 0x16F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_02D5CC2244ADA94EC36D7AA98573B63C;// 0x1AE0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_37DC65D547F5E70DA12BE7A1D5F927C7;// 0x1ED0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CE0F6AF24AF31CF6DCC8AB82701BC115;// 0x22C0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A8D3FE3B47D643F0C38FAE9FF9FA4038;// 0x26B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0504332C41173EAE329066A71AD101C2;// 0x2AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6874B4744925D23B870A6982D8D1ECDB;// 0x2E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EBF49B2B4E5FF3A76308658DE1B23E0C;// 0x3280(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9305141B4FF6D6DAE6BEB7A54EDEFC05;// 0x3670(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_ACA7310D46AD6A803412889D826F46F7;// 0x3A60(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_ECC41B3644240A80A416F7BC0AA9BA30;// 0x3E50(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C91DE3F7462A8DFE90DB488E0EE9A062;// 0x4240(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D2AC021C4B06F52B126669BE3CB88AC1;// 0x4630(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_85D5F4354A235F5A1993D3A249DB76E6;// 0x4A20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C9BDC8034C544258790237AF68256046;// 0x4E10(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_YRA_HUM_072_PHY.ABP_CHR_YRA_HUM_072_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_D2AC021C4B06F52B126669BE3CB88AC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_85D5F4354A235F5A1993D3A249DB76E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_C9BDC8034C544258790237AF68256046();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_6874B4744925D23B870A6982D8D1ECDB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_ECC41B3644240A80A416F7BC0AA9BA30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_ACA7310D46AD6A803412889D826F46F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_9305141B4FF6D6DAE6BEB7A54EDEFC05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_0504332C41173EAE329066A71AD101C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_C91DE3F7462A8DFE90DB488E0EE9A062();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_EBF49B2B4E5FF3A76308658DE1B23E0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_A8D3FE3B47D643F0C38FAE9FF9FA4038();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_CE0F6AF24AF31CF6DCC8AB82701BC115();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_37DC65D547F5E70DA12BE7A1D5F927C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_02D5CC2244ADA94EC36D7AA98573B63C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_39E48E804190EBB5A6988FACA6680F88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_2D4EF22E4B57F8605959D4A257A256F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_E7524594481AEB2D555E8793D413A63E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_4FFA9C0E41F04F2D16F5088498E238BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY_AnimGraphNode_AnimDynamics_0D81D4614B4271B1526DEDAD4325B7E9();
	void ExecuteUbergraph_ABP_CHR_YRA_HUM_072_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
