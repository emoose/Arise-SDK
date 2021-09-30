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

// AnimBlueprintGeneratedClass ABP_CHR_SIO_HUM_002_PHY.ABP_CHR_SIO_HUM_002_PHY_C
// 0x5870 (0x5DD0 - 0x0560)
class UABP_CHR_SIO_HUM_002_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_37DE8DA3409D5FA63DA4B1BFE90D4243;      // 0x0568(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F868A1C547529A3B5D2DC0A96FCF61D4;// 0x05B0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_16CE3EAA4CC44074EAA283816BFA42E1;// 0x05F8(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DD614E334E88FFCF4A030794E2DF5695;// 0x0640(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_136BBC574A1A7506C52FC9994766D495;// 0x0A30(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0A3ABC9C4DB5D25A9E379AA70F262637;// 0x0E20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C9A4ED5A452B2764FCC8C8A3E4D584F9;// 0x1210(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_95A215084A1189DACC135D94DD537901;// 0x1600(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_66E5FBCE471CFB845454258A2AA2DCD0;// 0x19F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_15752908407D3DFAD4C4A797FBA654EE;// 0x1DE0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8699A51E49744EED008A998E276EE8C6;// 0x21D0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4422A6E14063C7F84AF76D8C4AFBD979;// 0x25C0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_15EAABB3448FB95F0344378F3110CB6D;// 0x29B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2090743E4D5680B47E62E68DDC832711;// 0x2DA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E165D474433BB14748F88C84BCC5A1AD;// 0x3190(0x03F0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_64FAFFA2403A145214459E964850AE6D;// 0x3580(0x00E8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x3668(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_081F44AC4759CE6A77FDB08D3C98B338;// 0x3670(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_40A937B94BA08CDEC03A1CB4ECB15424;// 0x3A60(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AB8655554926591220D41982B0546B63;// 0x3E50(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_632965F04479BB85DF02FCB377770BFE;// 0x4240(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5CEEB1EE4038675517F3A2A1A28AB517;// 0x4630(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_028E1E9E49A439E74A4636B1EBC5DB3E;// 0x4A20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_51CAFFA44743453F6F88CE8C71B43770;// 0x4E10(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3684B64A47168FA3C5366B83F7A58689;// 0x5200(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E21422F0408A679775F3248801379B3F;// 0x55F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7362BC004297B3CCBF68C1BD329D69A1;// 0x59E0(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_SIO_HUM_002_PHY.ABP_CHR_SIO_HUM_002_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_7362BC004297B3CCBF68C1BD329D69A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_E165D474433BB14748F88C84BCC5A1AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_2090743E4D5680B47E62E68DDC832711();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_E21422F0408A679775F3248801379B3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_3684B64A47168FA3C5366B83F7A58689();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_51CAFFA44743453F6F88CE8C71B43770();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_028E1E9E49A439E74A4636B1EBC5DB3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_15EAABB3448FB95F0344378F3110CB6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_4422A6E14063C7F84AF76D8C4AFBD979();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_8699A51E49744EED008A998E276EE8C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_15752908407D3DFAD4C4A797FBA654EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_66E5FBCE471CFB845454258A2AA2DCD0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_5CEEB1EE4038675517F3A2A1A28AB517();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_632965F04479BB85DF02FCB377770BFE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_AB8655554926591220D41982B0546B63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_40A937B94BA08CDEC03A1CB4ECB15424();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_081F44AC4759CE6A77FDB08D3C98B338();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_95A215084A1189DACC135D94DD537901();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_C9A4ED5A452B2764FCC8C8A3E4D584F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_0A3ABC9C4DB5D25A9E379AA70F262637();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_136BBC574A1A7506C52FC9994766D495();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY_AnimGraphNode_AnimDynamics_DD614E334E88FFCF4A030794E2DF5695();
	void ExecuteUbergraph_ABP_CHR_SIO_HUM_002_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
