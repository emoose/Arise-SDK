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

// AnimBlueprintGeneratedClass ABP_CHR_ARI_HUM_004_HAIR02_PHY.ABP_CHR_ARI_HUM_004_HAIR02_PHY_C
// 0x0DA0 (0x1300 - 0x0560)
class UABP_CHR_ARI_HUM_004_HAIR02_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4D0A4BB24F8CD984FF836BA6CE656C7D;      // 0x0568(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_02DAE5B44A3D5BFC4481ADAF3724009B;// 0x05B0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05F8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F7FDA46D43E456645C8616AD5AF86F68;// 0x0600(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E72EAC6C4181C7E630D87FB238F10B11;// 0x09F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6789A50A40D4DA1AB947F791DBF48B6C;// 0x0DE0(0x03F0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F14239C34354F489E8E324B660F5F592;// 0x11D0(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_DE41B1394576782AB1AB40B26E53DE72;// 0x1218(0x00E8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_ARI_HUM_004_HAIR02_PHY.ABP_CHR_ARI_HUM_004_HAIR02_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR02_PHY_AnimGraphNode_AnimDynamics_F7FDA46D43E456645C8616AD5AF86F68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR02_PHY_AnimGraphNode_AnimDynamics_E72EAC6C4181C7E630D87FB238F10B11();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR02_PHY_AnimGraphNode_AnimDynamics_6789A50A40D4DA1AB947F791DBF48B6C();
	void ExecuteUbergraph_ABP_CHR_ARI_HUM_004_HAIR02_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
