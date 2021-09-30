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

// BlueprintGeneratedClass BP_AlphaMaskComponent.BP_AlphaMaskComponent_C
// 0x0010 (0x0208 - 0x01F8)
class UBP_AlphaMaskComponent_C : public UAlphaMaskComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F8(0x0008) (Transient, DuplicateTransient)
	bool                                               bDistanceFadeEnable;                                      // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0201(0x0003) MISSED OFFSET
	float                                              FadeTime;                                                 // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AlphaMaskComponent.BP_AlphaMaskComponent_C");
		return ptr;
	}


	void OnFailed_EB66E0744302EDFB796495950350D143(TEnumAsByte<EAlphaMask> Type);
	void OnComplete_EB66E0744302EDFB796495950350D143(TEnumAsByte<EAlphaMask> Type);
	void OnFailed_0099894848E9A789DB9AB7996704CB6C(TEnumAsByte<EAlphaMask> Type);
	void OnComplete_0099894848E9A789DB9AB7996704CB6C(TEnumAsByte<EAlphaMask> Type);
	void FadeInMeshes(float FadeTime, TArray<class UMeshComponent*> Meshes);
	void FadeOutMeshes(float FadeTime, TArray<class UMeshComponent*> Meshes);
	void ExecuteUbergraph_BP_AlphaMaskComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
