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

// AnimBlueprintGeneratedClass ABP_CHR_SIO_HUM_053_HAIR_PHY.ABP_CHR_SIO_HUM_053_HAIR_PHY_C
// 0x2930 (0x2E90 - 0x0560)
class UABP_CHR_SIO_HUM_053_HAIR_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_273562174C5EE94A003FC3BD2DF21DEA;      // 0x0568(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4879204445EF71E1B6B238BD3DE76C54;// 0x05B0(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_72A6403E45C9029A300AD88E7C58482E;// 0x05F8(0x00E8)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2A3EAC1F4DF4956A94598698E718BD1E;// 0x06E0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E1D23CA44B98347CBC7ECCBAAD30197E;// 0x0AD0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B9DCD3A444DF668671676EBC60D096B9;// 0x0EC0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FD72DE344C7CAA7B94E093BAE177F806;// 0x12B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A732D30742BB5FE01C94F2B9C744A684;// 0x16A0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_35C5529E4EFC32207846F6AE2FCED619;// 0x1A90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6F374AFA4E5CF647EAF17FA920C9C197;// 0x1E80(0x03F0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FACC5CC043AD6A1D70F44E9FDCC28E69;// 0x2270(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x22B8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_86AE0EF449D5C8A37893C09BF58580FB;// 0x22C0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2CF44FED4C550870A196718B7587C414;// 0x26B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7B090A7D4D515623A995FF8F7A4337EC;// 0x2AA0(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_SIO_HUM_053_HAIR_PHY.ABP_CHR_SIO_HUM_053_HAIR_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_7B090A7D4D515623A995FF8F7A4337EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_2CF44FED4C550870A196718B7587C414();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_35C5529E4EFC32207846F6AE2FCED619();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_A732D30742BB5FE01C94F2B9C744A684();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_FD72DE344C7CAA7B94E093BAE177F806();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_86AE0EF449D5C8A37893C09BF58580FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_B9DCD3A444DF668671676EBC60D096B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_E1D23CA44B98347CBC7ECCBAAD30197E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_2A3EAC1F4DF4956A94598698E718BD1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_053_HAIR_PHY_AnimGraphNode_AnimDynamics_6F374AFA4E5CF647EAF17FA920C9C197();
	void ExecuteUbergraph_ABP_CHR_SIO_HUM_053_HAIR_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
