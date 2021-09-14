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

// AnimBlueprintGeneratedClass ABP_CHR_SIO_HUM_001_HAIR_PHY.ABP_CHR_SIO_HUM_001_HAIR_PHY_C
// 0x5480 (0x59E0 - 0x0560)
class UABP_CHR_SIO_HUM_001_HAIR_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_15018BC3448E52901B059BB355B9D0A9;      // 0x0568(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2164879E4850958FF4C7A8AE18C09DBE;// 0x05B0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_52628C9B4BEC7ECD36E1838256403F41;// 0x05F8(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B8BC900C48B09FAC68B989A34B81020C;// 0x0640(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EBAE23274EE4473CD76FDD971796BA8A;// 0x0A30(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9D99338045AB6D3E270ABC8E058DB007;// 0x0E20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B4D18BF34B8F4149F6A7AC9220A8C068;// 0x1210(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E5B2250349ED9BA2DAFA0AB8656D17B7;// 0x1600(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_38C15C9D4CBDDBC10D8013B9281A3F66;// 0x19F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_231BE1CC46D0808FFD55059DAA1A4A01;// 0x1DE0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A45F974042CD59FAD47DB091EB2B607B;// 0x21D0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C05A5FD742B5B9A43CB249A867B4379B;// 0x25C0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4F679AEC48B6E338F26F22A5B9FAC4F7;// 0x29B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_ED3B574946F8443CB1CA7F8E46F6E154;// 0x2DA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F2BC110748A13BFABF02BE90FC7A3D7E;// 0x3190(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_80785E3045D664B5020776ABAA199BA5;// 0x3580(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A6B64E2F4952962B325088A74377461A;// 0x3970(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_81F22B074FCFB70C1DC149A9F84A70F0;// 0x3D60(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9A9E3C8143268F871C296FA6DDAFDAFC;// 0x4150(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_42DCA73940F26680F37B069083AB5A6E;// 0x4540(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5F10BFC34F5F27723EC73A8869DAB0E4;// 0x4930(0x03F0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_61F76D734B075C6C9C9CD690F1B9F6F6;// 0x4D20(0x00E8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x4E08(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_82D8B5E64BE1222BDEB7DC8A67F4488F;// 0x4E10(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D3768C0341AE3DE72A9CF68AB13F1412;// 0x5200(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AAB11BFA42280875FB3937A0B56A9946;// 0x55F0(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_SIO_HUM_001_HAIR_PHY.ABP_CHR_SIO_HUM_001_HAIR_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_D3768C0341AE3DE72A9CF68AB13F1412();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_AAB11BFA42280875FB3937A0B56A9946();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_F2BC110748A13BFABF02BE90FC7A3D7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_ED3B574946F8443CB1CA7F8E46F6E154();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_82D8B5E64BE1222BDEB7DC8A67F4488F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_5F10BFC34F5F27723EC73A8869DAB0E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_4F679AEC48B6E338F26F22A5B9FAC4F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_C05A5FD742B5B9A43CB249A867B4379B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_42DCA73940F26680F37B069083AB5A6E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_9A9E3C8143268F871C296FA6DDAFDAFC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_A45F974042CD59FAD47DB091EB2B607B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_231BE1CC46D0808FFD55059DAA1A4A01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_38C15C9D4CBDDBC10D8013B9281A3F66();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_E5B2250349ED9BA2DAFA0AB8656D17B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_B4D18BF34B8F4149F6A7AC9220A8C068();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_9D99338045AB6D3E270ABC8E058DB007();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_EBAE23274EE4473CD76FDD971796BA8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_81F22B074FCFB70C1DC149A9F84A70F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_A6B64E2F4952962B325088A74377461A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_80785E3045D664B5020776ABAA199BA5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY_AnimGraphNode_AnimDynamics_B8BC900C48B09FAC68B989A34B81020C();
	void ExecuteUbergraph_ABP_CHR_SIO_HUM_001_HAIR_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
