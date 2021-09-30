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

// BlueprintGeneratedClass MenuSEFunctionLibrary.MenuSEFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UMenuSEFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MenuSEFunctionLibrary.MenuSEFunctionLibrary_C");
		return ptr;
	}


	void STATIC_PostMenuSoundEvent(const struct FString& in_EventName, class UObject* __WorldContext);
	void STATIC_PlayMenuSEfromDB(const struct FMenuSoundLabel& MenuSoundLabel, class UObject* __WorldContext);
	void STATIC_PlayMenuSEByLabel(const struct FString& Label, class UObject* __WorldContext);
	void STATIC_PlayMenuSE(TEnumAsByte<EMENU_SE_LABEL> Label, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
