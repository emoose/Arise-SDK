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

// BlueprintGeneratedClass BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C
// 0x0009 (0x0211 - 0x0208)
class UBP_BtlAlphaMaskComponent_C : public UBP_AlphaMaskComponent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	bool                                               bIsMultiUnit;                                             // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlAlphaMaskComponent.BP_BtlAlphaMaskComponent_C");
		return ptr;
	}


	void BattleDeferredCollection();
	TArray<class UCameraFadeComponent*> Received_CollectionCameraFadeComponent();
	TArray<class UMeshComponent*> Received_CollectionMeshComponent();
	void OnDeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData);
	void RemoveComponent();
	void RegistComponent();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_BtlAlphaMaskComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
