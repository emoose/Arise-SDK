#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STR_VoiceConditionRecord.STR_VoiceConditionRecord
// 0x0038
struct FSTR_VoiceConditionRecord
{
	EBtlVoiceState                                     State_15_681DD4CA49D6A21EE82B73AE9C127A93;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBtlVoiceCondition                                 Condition_17_C3B9181046AE0D1AF1FD038A91F8942F;            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                TalkRate_11_B4DB29FA4F037E09F182D1BBFE0A2C6A;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DerivedRate_30_BEAA36C646214EDE3BD184B9B3FAC8DD;          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBtlVoiceUsage                                     SingleVoiceLimit_36_1E7B996F417AC6AC94BA038D2D248D6C;     // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBtlVoiceUsage                                     MultipleVoiceLimit_37_233E485E47BF66271DB648B41EDC62C8;   // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ConversationSubunits_40_0F0212924C3737DED01739994719B80A; // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	TArray<class UClass*>                              Handles_26_395C85F3406BF1A5F7B05E84DBF066C7;              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Enabled_5_E9D05C7B497638C459A177A39DE15F4B;               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FString                                     Comment_21_9E62FCD04B09DF790C42E4878FD3ECCA;              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
