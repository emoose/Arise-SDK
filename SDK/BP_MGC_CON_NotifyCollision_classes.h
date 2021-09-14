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

// BlueprintGeneratedClass BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C
// 0x0029 (0x0069 - 0x0040)
class UBP_MGC_CON_NotifyCollision_C : public UBtlMagicCondition_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	struct FName                                       IdentifierName;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USphereComponent*>                    NotifyCollision;                                          // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	class USphereComponent*                            NewVar_1;                                                 // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bOverlap;                                                 // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C");
		return ptr;
	}


	struct FString Received_GetConditionName();
	bool Received_Condition();
	struct FString Received_GetErrorMessage(class UBtlMagicAsset* Asset);
	void OnEndOverlap(class UPrimitiveComponent* Collision);
	void OnBeginOverlap(class UPrimitiveComponent* Collision);
	void Received_Deactivated();
	void Received_Activated();
	void V2_BeginOverlap();
	void V2_EndOverlap();
	void ExecuteUbergraph_BP_MGC_CON_NotifyCollision(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
