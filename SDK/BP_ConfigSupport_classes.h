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

// BlueprintGeneratedClass BP_ConfigSupport.BP_ConfigSupport_C
// 0x0000 (0x0028 - 0x0028)
class UBP_ConfigSupport_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConfigSupport.BP_ConfigSupport_C");
		return ptr;
	}


	void STATIC_GetPadConfigOverridePictureID(EInputCategory Category, EButtonIconSet Icon, class UObject* __WorldContext, TMap<EPadKeyId, struct FName>* Map);
	void STATIC_GetPadConfigOverride(EInputCategory Category, class UObject* __WorldContext, TMap<EPadKeyId, struct FName>* Map);
	void STATIC_GetInputConfigActionString(const struct FName& Button, class UObject* __WorldContext, struct FDictionaryText* DictionaryText);
	void STATIC_GetPadKeyIds(EInputCategory Category, class UObject* __WorldContext, TMap<EPadKeyId, struct FName>* ButtonList1);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
