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

// BlueprintGeneratedClass BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C
// 0x0038 (0x0390 - 0x0358)
class ABP_EnSymScenarioLayer_C : public APFEnSymScenarioLayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Root;                                                     // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               UseChangeFlag;                                            // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	struct FScenarioConditionNamed                     ChangeFlag;                                               // 0x0370(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C");
		return ptr;
	}


	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	void OutputParameter(struct FEncountSymbolLayerParamData* Output);
	void SetActivate();
	void IsScenarioCondition(bool UseChangeFlag, bool* Result);
	void UserConstructionScript();
	void «0¹0¿0à0¤0Ù0ó0È0_1(int counter, int Prev);
	void «0¹0¿0à0¤0Ù0ó0È0_2(int Flag, bool bValid);
	void OnInitCallback();
	void OnEndCallback();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_EnSymScenarioLayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
