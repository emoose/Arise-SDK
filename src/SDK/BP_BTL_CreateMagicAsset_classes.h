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

// BlueprintGeneratedClass BP_BTL_CreateMagicAsset.BP_BTL_CreateMagicAsset_C
// 0x0008 (0x00B8 - 0x00B0)
class UBP_BTL_CreateMagicAsset_C : public UBtlAnimNotify_CreateMagicAssetBase
{
public:
	class UBtlMagicAsset*                              MagicAsset;                                               // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_CreateMagicAsset.BP_BTL_CreateMagicAsset_C");
		return ptr;
	}


	struct FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
