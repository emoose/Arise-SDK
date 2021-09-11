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

// BlueprintGeneratedClass BP_AliasSupport.BP_AliasSupport_C
// 0x0000 (0x0028 - 0x0028)
class UBP_AliasSupport_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AliasSupport.BP_AliasSupport_C");
		return ptr;
	}


	void STATIC_IsEnableAlias(int AliasID, class UObject* __WorldContext, bool* bEnable);
	void STATIC_GetAliasCompleteBonusExp(int BonusType, int BonusValue, class UObject* __WorldContext, struct FModifiedText* BonusExp);
	void STATIC_GetWidgetPosition(class UWidget* NewParam, class UObject* __WorldContext, struct FVector2D* Position);
	void STATIC_GetAliasStatus(const struct FString& AliasName, class UObject* __WorldContext, struct FString* Status);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
