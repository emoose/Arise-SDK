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

// BlueprintGeneratedClass BP_BMS_EGR_010_YOK_WOL_000.BP_BMS_EGR_010_YOK_WOL_000_C
// 0x000C (0x0050 - 0x0044)
class UBP_BMS_EGR_010_YOK_WOL_000_C : public UBP_BtlMetaScript_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BMS_EGR_010_YOK_WOL_000.BP_BMS_EGR_010_YOK_WOL_000_C");
		return ptr;
	}


	void OnComplete_0F1A31D34D2E812617FAA8A5608685BC(const struct FString& Label);
	void OnPostCameraInitialize(class ABtl_Camera* BtlCamera);
	void OnFinalize();
	void OnPrevMainProduction();
	void ExecuteUbergraph_BP_BMS_EGR_010_YOK_WOL_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
