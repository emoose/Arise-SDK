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

// AnimBlueprintGeneratedClass ABP_CHR_ARI_HUM_004_PHY.ABP_CHR_ARI_HUM_004_PHY_C
// 0x5868 (0x5DC8 - 0x0560)
class UABP_CHR_ARI_HUM_004_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5536467B4E36951C58EA4C909961D9CF;      // 0x0568(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_434F92874066CB3DE60421B30FBD6DFA;// 0x05B0(0x03F0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_199F0914425A52D8F8C01383EF8D5BB7;// 0x09A0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7102F3C24FF9939750E55CB4EF5E34AE;// 0x09E8(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_42F583B44E91EF3E09E2B39CA7905D63;// 0x0A30(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_417652FD475FA5931EE759835365AA3F;// 0x0E20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2E7277F347F96F4CE417A1AFD60D39BF;// 0x1210(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_15529CE949BAC782205324B85472FDE6;// 0x1600(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4A05CD5B4FB7E8CC197EC192512B33BD;// 0x19F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F632BBE749FE560A17791DAF651FBD91;// 0x1DE0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_034CBCC846064711A89B5FBB5215D5B1;// 0x21D0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A689AF69460F61DA6DBCA394DD96F9FD;// 0x25C0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FB7851B0414B50CFF429D489C0942D66;// 0x29B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_27EE02B444EF071FF90FBEA2E4EA31B5;// 0x2DA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0FD166C3435997DB50DFE8A82C304F6F;// 0x3190(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D05AFB68432EBD9930099FA7342DC4D7;// 0x3580(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FE2032F34681862ACB7BC582596609FD;// 0x3970(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_48F625F04F1595D24FAE2198DD5947C2;// 0x3D60(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E29662CB41EF3EF92D85FD8987E75338;// 0x4150(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_50BAEE154A9B930EE243BBA9746F1AB5;// 0x4540(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4040C1D9449E00EECC0EB79E67FEB10C;// 0x4930(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_19ED0A2E40777BBB0A66F4ADA4122412;// 0x4D20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BAC1D74F46C92A1018A109B13EEC240B;// 0x5110(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_ED8541C046B78542AB134AA31D3CAEF8;// 0x5500(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_55E272244683C3D9C8ABD1AAFBFFBEA2;// 0x58F0(0x03F0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_0D8CAAD8475D0D83C69F53B2DB192115;// 0x5CE0(0x00E8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_ARI_HUM_004_PHY.ABP_CHR_ARI_HUM_004_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_ED8541C046B78542AB134AA31D3CAEF8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_55E272244683C3D9C8ABD1AAFBFFBEA2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_BAC1D74F46C92A1018A109B13EEC240B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_19ED0A2E40777BBB0A66F4ADA4122412();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_0FD166C3435997DB50DFE8A82C304F6F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_27EE02B444EF071FF90FBEA2E4EA31B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_FB7851B0414B50CFF429D489C0942D66();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_A689AF69460F61DA6DBCA394DD96F9FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_034CBCC846064711A89B5FBB5215D5B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_F632BBE749FE560A17791DAF651FBD91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_4040C1D9449E00EECC0EB79E67FEB10C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_50BAEE154A9B930EE243BBA9746F1AB5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_E29662CB41EF3EF92D85FD8987E75338();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_4A05CD5B4FB7E8CC197EC192512B33BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_15529CE949BAC782205324B85472FDE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_2E7277F347F96F4CE417A1AFD60D39BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_417652FD475FA5931EE759835365AA3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_42F583B44E91EF3E09E2B39CA7905D63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_434F92874066CB3DE60421B30FBD6DFA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_48F625F04F1595D24FAE2198DD5947C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_FE2032F34681862ACB7BC582596609FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY_AnimGraphNode_AnimDynamics_D05AFB68432EBD9930099FA7342DC4D7();
	void ExecuteUbergraph_ABP_CHR_ARI_HUM_004_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
