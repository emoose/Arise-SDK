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

// BlueprintGeneratedClass BP_ACF_CameraFade.BP_ACF_CameraFade_C
// 0x0009 (0x0071 - 0x0068)
class UBP_ACF_CameraFade_C : public UBP_AlphaMask_CameraFadeTaskBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)
	bool                                               IsAnyCheck;                                               // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ACF_CameraFade.BP_ACF_CameraFade_C");
		return ptr;
	}


	void Begin();
	void ExecuteUbergraph_BP_ACF_CameraFade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
