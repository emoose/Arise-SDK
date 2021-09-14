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

// BlueprintGeneratedClass BP_BTL_UMG_HELPER_LIBRARY.BP_BTL_UMG_HELPER_LIBRARY_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BTL_UMG_HELPER_LIBRARY_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_UMG_HELPER_LIBRARY.BP_BTL_UMG_HELPER_LIBRARY_C");
		return ptr;
	}


	void STATIC_SetPercent_ProgressBar(class UProgressBar* ProgressBar, float Percent, class UObject* __WorldContext);
	void STATIC_SetPercent_GaugeImage(class UImage* GaugeImage, const struct FName& ParameterName, float Percent, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
