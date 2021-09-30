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

// AnimBlueprintGeneratedClass ABP_CHR_NFY_HUM_000_PHY.ABP_CHR_NFY_HUM_000_PHY_C
// 0x4C20 (0x5180 - 0x0560)
class UABP_CHR_NFY_HUM_000_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DFA6420341DD4650C73C8EB8A3187FB4;      // 0x0568(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_F15297644406A23D05D8FE9C182FF45A;  // 0x05B0(0x0068)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0618(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3BE09C934076DF262821BEAD689C2AFD;// 0x0620(0x03F0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7DB2651743D6322A38A6B695839A252A;// 0x0A10(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3484BE934B6B9984F0B191A7B7D28693;// 0x0A58(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_08E445D24ECB0BB5557890AE465F7D21;// 0x0AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5F3A1B17486B607B9A4F5B994C3E457A;// 0x0E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1D3EE4BA492D7ABE67293DA867BAB457;// 0x1280(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_11B1A29E4CBDE23064D528B6C31FE73A;// 0x1670(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_717CA1404E03D3A1BD0D94AB7CF470F5;// 0x1A60(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5ACB57264E9F574EAA7AC7976E05AF53;// 0x1E50(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9042B1154A71D9C3A3613C8429FD8903;// 0x2240(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_ACBE17BC48E6F52E5AD7DDB4FA81F185;// 0x2630(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C11806A94B7FBCFC8727539E941C8510;// 0x2A20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5B8B433E4D7A32EF661C4C8D9484703D;// 0x2E10(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_21A123594056451809362FB02F0BA132;// 0x3200(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E372D711412F7C6B04FA52A072527F38;// 0x35F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_35BAF7B14F1C9ABDF837FE98B4ECFC7C;// 0x39E0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_873F908E44299DDC8F3F3793D0EB1305;// 0x3DD0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_97DD12D44E9CE08A88B8B2A811D706FC;// 0x41C0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AC89E2824066D2CA960ACC92DACE40C7;// 0x45B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B96E6ADB42FB7CFA50BEE387D5164EF6;// 0x49A0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_80F4B5984157E48E6307B58B3CB85434;// 0x4D90(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_NFY_HUM_000_PHY.ABP_CHR_NFY_HUM_000_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_C11806A94B7FBCFC8727539E941C8510();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_ACBE17BC48E6F52E5AD7DDB4FA81F185();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_80F4B5984157E48E6307B58B3CB85434();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_B96E6ADB42FB7CFA50BEE387D5164EF6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_AC89E2824066D2CA960ACC92DACE40C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_97DD12D44E9CE08A88B8B2A811D706FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_9042B1154A71D9C3A3613C8429FD8903();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_5ACB57264E9F574EAA7AC7976E05AF53();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_873F908E44299DDC8F3F3793D0EB1305();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_717CA1404E03D3A1BD0D94AB7CF470F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_11B1A29E4CBDE23064D528B6C31FE73A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_1D3EE4BA492D7ABE67293DA867BAB457();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_35BAF7B14F1C9ABDF837FE98B4ECFC7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_5F3A1B17486B607B9A4F5B994C3E457A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_E372D711412F7C6B04FA52A072527F38();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_08E445D24ECB0BB5557890AE465F7D21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_21A123594056451809362FB02F0BA132();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_3BE09C934076DF262821BEAD689C2AFD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY_AnimGraphNode_AnimDynamics_5B8B433E4D7A32EF661C4C8D9484703D();
	void ExecuteUbergraph_ABP_CHR_NFY_HUM_000_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
