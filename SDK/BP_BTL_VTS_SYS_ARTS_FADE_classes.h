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

// BlueprintGeneratedClass BP_BTL_VTS_SYS_ARTS_FADE.BP_BTL_VTS_SYS_ARTS_FADE_C
// 0x0028 (0x00B8 - 0x0090)
class UBP_BTL_VTS_SYS_ARTS_FADE_C : public UBtlVisualRootTaskBlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)
	struct FBtlArtsHandle                              ArtsHandle;                                               // 0x0098(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_VTS_SYS_ARTS_FADE.BP_BTL_VTS_SYS_ARTS_FADE_C");
		return ptr;
	}


	void Received_Begin();
	void OnEndArts(const struct FBtlArtsHandle& ArtsHandle);
	void ExecuteUbergraph_BP_BTL_VTS_SYS_ARTS_FADE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
