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

// AnimBlueprintGeneratedClass ABP_CHR_SIO_HUM_051_PHY.ABP_CHR_SIO_HUM_051_PHY_C
// 0x1D60 (0x22C0 - 0x0560)
class UABP_CHR_SIO_HUM_051_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6E3D8E6B4DD423558BAD098FD7553D9C;      // 0x0568(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E6A235FF4C21C9EF529BBDA6E657ECC9;// 0x05B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_811880A94BD760BA7ADD3584433AFF5B;// 0x09A0(0x03F0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2B52E22041EAE402B0779897C2E18CBF;// 0x0D90(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_4678BBA94C1B9C0B9FF2B9834933EFC9;// 0x0DD8(0x00E8)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D07A614F4E880B51189003A619540311;// 0x0EC0(0x03F0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_ECE99AB4410E818A40FFDD9F4FF08AEC;// 0x12B0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x12F8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D23D08E4456973F27E7333889C8E0C72;// 0x1300(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_46B3A676497AC737CE968CACEBEF3419;// 0x16F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5257CEEC40FE94C226BAC783551BC3E8;// 0x1AE0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B2A175AC49E14CD0777191842971BC01;// 0x1ED0(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_SIO_HUM_051_PHY.ABP_CHR_SIO_HUM_051_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_051_PHY_AnimGraphNode_AnimDynamics_D23D08E4456973F27E7333889C8E0C72();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_051_PHY_AnimGraphNode_AnimDynamics_46B3A676497AC737CE968CACEBEF3419();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_051_PHY_AnimGraphNode_AnimDynamics_B2A175AC49E14CD0777191842971BC01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_051_PHY_AnimGraphNode_AnimDynamics_5257CEEC40FE94C226BAC783551BC3E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_051_PHY_AnimGraphNode_AnimDynamics_D07A614F4E880B51189003A619540311();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_051_PHY_AnimGraphNode_AnimDynamics_811880A94BD760BA7ADD3584433AFF5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_051_PHY_AnimGraphNode_AnimDynamics_E6A235FF4C21C9EF529BBDA6E657ECC9();
	void ExecuteUbergraph_ABP_CHR_SIO_HUM_051_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
