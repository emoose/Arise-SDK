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

// AnimBlueprintGeneratedClass ABP_CHR_ZGU_HUM_053_PHY.ABP_CHR_ZGU_HUM_053_PHY_C
// 0x4CA0 (0x5200 - 0x0560)
class UABP_CHR_ZGU_HUM_053_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_32382BB94F378EA86E27A98CA42393B2;      // 0x0568(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1DC1034840ED886BBBC8B4BCB2D9A34B;// 0x05B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AC4D9A834DBA165CEAB10BA9F055218A;// 0x09A0(0x03F0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8872502E4813E1966D4403A00E68D495;// 0x0D90(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_438189604913AE5CA40435BDAB850808;// 0x0DD8(0x00E8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1DDD867F471F09E64136DDBB050CEE76;// 0x0EC0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0F08(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_59A670F9473447CFC64546A9C28ABFB3;// 0x0F10(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5F5A6E5B475E2003ACE92FA275859559;// 0x1300(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EF715C33446231D38669FA9AB9B684C9;// 0x16F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6AB22BEE4823F5F811EA4EB5B5ACD9ED;// 0x1AE0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CAB35D71482699B315A89CBC8CD8A6A0;// 0x1ED0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D340BC414A63048B91304D8C8CB3789B;// 0x22C0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_44077FD04A95FFC393280D8070CECEE0;// 0x26B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_994704FD4A17E6D6A93EC485D267EA78;// 0x2AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D02E4DFF408A0F08B7EB4DAD54372888;// 0x2E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B7F43F7846941A2AE9F8D18132D9D87A;// 0x3280(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DD13CB2B47389E7EE2C73A8445148B2E;// 0x3670(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_09ADDDF64DAC169138E420B65A68ED10;// 0x3A60(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_19E99D6F4FEA6FF2659B9CBC88F55D59;// 0x3E50(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5585CF064EA4A94E7C525D91E160E2E3;// 0x4240(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_26AC832248C9C56710FF2084B0E1A3C5;// 0x4630(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1EEE484D419DC6C5D769568CCEEFF2B0;// 0x4A20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8C84318249715A8AA85602B38437124D;// 0x4E10(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_ZGU_HUM_053_PHY.ABP_CHR_ZGU_HUM_053_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_994704FD4A17E6D6A93EC485D267EA78();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_D02E4DFF408A0F08B7EB4DAD54372888();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_8C84318249715A8AA85602B38437124D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_44077FD04A95FFC393280D8070CECEE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_1EEE484D419DC6C5D769568CCEEFF2B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_D340BC414A63048B91304D8C8CB3789B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_26AC832248C9C56710FF2084B0E1A3C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_CAB35D71482699B315A89CBC8CD8A6A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_5585CF064EA4A94E7C525D91E160E2E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_6AB22BEE4823F5F811EA4EB5B5ACD9ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_19E99D6F4FEA6FF2659B9CBC88F55D59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_EF715C33446231D38669FA9AB9B684C9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_09ADDDF64DAC169138E420B65A68ED10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_5F5A6E5B475E2003ACE92FA275859559();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_DD13CB2B47389E7EE2C73A8445148B2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_59A670F9473447CFC64546A9C28ABFB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_B7F43F7846941A2AE9F8D18132D9D87A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_AC4D9A834DBA165CEAB10BA9F055218A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY_AnimGraphNode_AnimDynamics_1DC1034840ED886BBBC8B4BCB2D9A34B();
	void ExecuteUbergraph_ABP_CHR_ZGU_HUM_053_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
