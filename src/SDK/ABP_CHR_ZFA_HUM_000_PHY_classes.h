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

// AnimBlueprintGeneratedClass ABP_CHR_ZFA_HUM_000_PHY.ABP_CHR_ZFA_HUM_000_PHY_C
// 0x57F0 (0x5D50 - 0x0560)
class UABP_CHR_ZFA_HUM_000_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C4FF520643C8F050820342AD11E2888F;      // 0x0568(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_71274D8F410C7E4F08714BAA300458BC;  // 0x05B0(0x0068)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0618(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_42D9518A4E886EB4950BF4965AAA5F2E;// 0x0620(0x03F0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1890622141C038AB5426298FF823DA17;// 0x0A10(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3D3B219D405E5E3D3EE1759BF2F71A5D;// 0x0A58(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0EF6294B42B28E37016811972ED353AA;// 0x0AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4AEDC0D342397F51F24DBDB65D710882;// 0x0E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_68C7AE8C41DCA4A1D0ED3587AD679AFF;// 0x1280(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_07103368463C590639DBF69FA2DA5A94;// 0x1670(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A40F539541F1C441F2C3B19DA11C3FD1;// 0x1A60(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E8FF768742EF85EA1264F48AFC82ACDA;// 0x1E50(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EC8E228C4BDE7BDD45A36487DD7FC02F;// 0x2240(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_124534254D4DE107DBA310BAD1EB11A1;// 0x2630(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AEB9EEA947A101D1519B78838A017931;// 0x2A20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2DD97F224603F5AC362FFC833FF9E92A;// 0x2E10(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4DC79576407BB10E0F5237B1A6665EA0;// 0x3200(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A31D854F4CF07CB118637FBCBAE2ACBF;// 0x35F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EF7BDB424FBE5382891933A2EBC09212;// 0x39E0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AA645A224B237B467466C089EB0087B6;// 0x3DD0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E3E0B56C42C0C9FA2218CA9FEBE68B9F;// 0x41C0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_17EFCB95495A6E42D5B039A72539245B;// 0x45B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7BDBDDFA4E3046F8C3FC73910EF878C0;// 0x49A0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_85A7DBBA4740F30F2EDC7E9EF346A0C2;// 0x4D90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3652F13146B0D8386A13DEB3812EE9E2;// 0x5180(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A13A20904C5D6387A59A56A2C4944885;// 0x5570(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C5E0266B434F728B4A4B1CB4F69F381A;// 0x5960(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_ZFA_HUM_000_PHY.ABP_CHR_ZFA_HUM_000_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_85A7DBBA4740F30F2EDC7E9EF346A0C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_3652F13146B0D8386A13DEB3812EE9E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_A13A20904C5D6387A59A56A2C4944885();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_C5E0266B434F728B4A4B1CB4F69F381A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_4DC79576407BB10E0F5237B1A6665EA0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_2DD97F224603F5AC362FFC833FF9E92A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_AEB9EEA947A101D1519B78838A017931();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_124534254D4DE107DBA310BAD1EB11A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_EC8E228C4BDE7BDD45A36487DD7FC02F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_E8FF768742EF85EA1264F48AFC82ACDA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_7BDBDDFA4E3046F8C3FC73910EF878C0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_A40F539541F1C441F2C3B19DA11C3FD1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_07103368463C590639DBF69FA2DA5A94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_17EFCB95495A6E42D5B039A72539245B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_68C7AE8C41DCA4A1D0ED3587AD679AFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_4AEDC0D342397F51F24DBDB65D710882();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_0EF6294B42B28E37016811972ED353AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_E3E0B56C42C0C9FA2218CA9FEBE68B9F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_42D9518A4E886EB4950BF4965AAA5F2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_AA645A224B237B467466C089EB0087B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_EF7BDB424FBE5382891933A2EBC09212();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY_AnimGraphNode_AnimDynamics_A31D854F4CF07CB118637FBCBAE2ACBF();
	void ExecuteUbergraph_ABP_CHR_ZFA_HUM_000_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
