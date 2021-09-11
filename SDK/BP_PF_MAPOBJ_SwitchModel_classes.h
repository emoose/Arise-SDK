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

// BlueprintGeneratedClass BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C
// 0x002F (0x0430 - 0x0401)
class ABP_PF_MAPOBJ_SwitchModel_C : public ABP_PF_MAPOBJ_BaseObject_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	class UBP_AlphaMaskComponent_C*                    AlphaMaskComponent;                                       // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPFInteractionModelComponent*                ModelComponent;                                           // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPFSearchModelID                            ModelID;                                                  // 0x0420(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C");
		return ptr;
	}


	void GetDebShowInfoMessage(bool* bValid, struct FString* OutMessage, struct FLinearColor* OutColor);
	void SetModelCollisionProfile(const struct FName& InCollisionProfileName);
	void PlayGatheringEffect();
	void CollectionFadeObjects();
	void SetHideModel();
	void SetShowModel();
	void BuildModel();
	void UserConstructionScript();
	void ReceiveUpdateActive();
	void ReceiveBeginPlay();
	void On_Build_Completed();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveOnConstruction(const struct FTransform& Transform);
	void ExecuteUbergraph_BP_PF_MAPOBJ_SwitchModel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
