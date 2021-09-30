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

// BlueprintGeneratedClass BP_PFPlayerCamera.BP_PFPlayerCamera_C
// 0x0008 (0x0550 - 0x0548)
class ABP_PFPlayerCamera_C : public APFPlayerCamera
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0548(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PFPlayerCamera.BP_PFPlayerCamera_C");
		return ptr;
	}


	void ApplyPostProcessParam(struct FPostProcessSettings* StructRef);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnApplyMotionBlurParams();
	void OnPostMapChange(const struct FString& NewMapName, const struct FString& OldMapName);
	void ExecuteUbergraph_BP_PFPlayerCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
