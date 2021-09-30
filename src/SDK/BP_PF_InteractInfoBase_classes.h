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

// BlueprintGeneratedClass BP_PF_InteractInfoBase.BP_PF_InteractInfoBase_C
// 0x0038 (0x0380 - 0x0348)
class ABP_PF_InteractInfoBase_C : public APFInteractInfo
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	class UBP_InfoIconComponent_C*                     BP_InfoIconComponent;                                     // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETO14_InfoIconType>                    IconType;                                                 // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowInfo;                                                // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x035A(0x0006) MISSED OFFSET
	struct FString                                     ActInfoLabel;                                             // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DictionaryGroup;                                          // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InteractInfoBase.BP_PF_InteractInfoBase_C");
		return ptr;
	}


	void GetCPCost(int* Out);
	void ShowActInfo();
	void GetIconLocation(class ACharacter* Character, struct FVector* Location);
	void UserConstructionScript();
	void K2_HideInformation();
	void K2_ShowInformation();
	void ReceiveTick(float DeltaSeconds);
	void K2_ShowActInformation();
	void K2_HideActInformation();
	void K2_SetActInformationLabel(const struct FName& Label);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PF_InteractInfoBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
