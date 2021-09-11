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

// BlueprintGeneratedClass QID_SQ_1100_FORESTOWL.QID_SQ_1100_FORESTOWL_C
// 0x01F7 (0x0618 - 0x0421)
class UQID_SQ_1100_FORESTOWL_C : public UBP_GP_Script2_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	struct FAchScenarioCharacterID                     SIO;                                                      // 0x0430(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAchScenarioCharacterID                     ARI;                                                      // 0x0440(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAchScenarioCharacterID                     NNA;                                                      // 0x0450(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAchScenarioCharacterID                     ZGU;                                                      // 0x0460(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAchScenarioCharacterID                     MNK;                                                      // 0x0470(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAchScenarioCharacterID                     YRA;                                                      // 0x0480(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPFNpcDefineID                              NID_OWL_KING;                                             // 0x0490(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPFNpcDefineID                              NID_OWL_QUEEN;                                            // 0x04A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLongchatName                               SQ_1100_ST02_LC;                                          // 0x04B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                OwlRate;                                                  // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	struct FLongchatName                               SQ_1100_ST03_LC;                                          // 0x04C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLongchatName                               SQ_1100_ST04_LC;                                          // 0x04D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEventNo                                    SQ_1100_ST05_B;                                           // 0x04E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x28];                                      // 0x04F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty QID_SQ_1100_FORESTOWL.QID_SQ_1100_FORESTOWL_C.SQ_1100_ST05 B Seq
	struct FEventNo                                    SQ_1100_END_;                                             // 0x0520(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0530(0x0028) UNKNOWN PROPERTY: SoftObjectProperty QID_SQ_1100_FORESTOWL.QID_SQ_1100_FORESTOWL_C.SQ_110_END Seq
	struct FEventNo                                    SQ_1100_ST05_A;                                           // 0x0558(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x28];                                      // 0x0568(0x0028) UNKNOWN PROPERTY: SoftObjectProperty QID_SQ_1100_FORESTOWL.QID_SQ_1100_FORESTOWL_C.SQ_1100_ST05 A Seq
	struct FEventNo                                    SQ1100_ST01;                                              // 0x0590(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x28];                                      // 0x05A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty QID_SQ_1100_FORESTOWL.QID_SQ_1100_FORESTOWL_C.SQ1100_ST01 Seq
	struct FEventNo                                    S;                                                        // 0x05C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x28];                                      // 0x05D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty QID_SQ_1100_FORESTOWL.QID_SQ_1100_FORESTOWL_C.S
	struct FQuestID                                    QST;                                                      // 0x0600(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SC01;                                                     // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SC02;                                                     // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass QID_SQ_1100_FORESTOWL.QID_SQ_1100_FORESTOWL_C");
		return ptr;
	}


	void Main(const struct FString& String);
	void ExecuteUbergraph_QID_SQ_1100_FORESTOWL(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
