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

// BlueprintGeneratedClass BP_AlphaMask_CameraFadeTaskBase.BP_AlphaMask_CameraFadeTaskBase_C
// 0x0008 (0x0068 - 0x0060)
class UBP_AlphaMask_CameraFadeTaskBase_C : public UAlphaMaskCameraFadeTask
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0060(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AlphaMask_CameraFadeTaskBase.BP_AlphaMask_CameraFadeTaskBase_C");
		return ptr;
	}


	void Begin();
	void ExecuteUbergraph_BP_AlphaMask_CameraFadeTaskBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
