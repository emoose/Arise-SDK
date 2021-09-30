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

// BlueprintGeneratedClass BP_BTL_VTS_RUSH_TRAITS.BP_BTL_VTS_RUSH_TRAITS_C
// 0x0048 (0x00D8 - 0x0090)
class UBP_BTL_VTS_RUSH_TRAITS_C : public UBtlVisualRootTaskBlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)
	class UParticleSystem*                             SpanEffect;                                               // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             LoopEffect;                                               // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               AttachLists;                                              // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FBtlArtsHandle                              ArtsHandle;                                               // 0x00B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_VTS_RUSH_TRAITS.BP_BTL_VTS_RUSH_TRAITS_C");
		return ptr;
	}


	void Received_Begin();
	void OnEndArts(const struct FBtlArtsHandle& ArtsHandle);
	void ExecuteUbergraph_BP_BTL_VTS_RUSH_TRAITS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
