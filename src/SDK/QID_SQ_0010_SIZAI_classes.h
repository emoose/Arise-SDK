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

// BlueprintGeneratedClass QID_SQ_0010_SIZAI.QID_SQ_0010_SIZAI_C
// 0x00E7 (0x0508 - 0x0421)
class UQID_SQ_0010_SIZAI_C : public UBP_GP_Script2_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	int                                                SC_010_09600;                                             // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SC_010_09400;                                             // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        鈋瓓�0򎒾;                                               // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        x悶bd�Y;                                               // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FAchScenarioCharacterID                     SIO;                                                      // 0x0458(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAchScenarioCharacterID                     ARI;                                                      // 0x0468(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAchScenarioCharacterID                     NNA;                                                      // 0x0478(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAchScenarioCharacterID                     ZGU;                                                      // 0x0488(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAchScenarioCharacterID                     MNK;                                                      // 0x0498(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAchScenarioCharacterID                     YRA;                                                      // 0x04A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SC_010_09800;                                             // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	struct FString                                     ScriptString;                                             // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FEventNo                                    MEP_SQE_0010_020;                                         // 0x04D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x28];                                      // 0x04E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty QID_SQ_0010_SIZAI.QID_SQ_0010_SIZAI_C.SQ_SQE_0010_020

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass QID_SQ_0010_SIZAI.QID_SQ_0010_SIZAI_C");
		return ptr;
	}


	void Main(const struct FString& String);
	void Quest_Post();
	void ExecuteUbergraph_QID_SQ_0010_SIZAI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
