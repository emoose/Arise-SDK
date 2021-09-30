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

// BlueprintGeneratedClass BP_ItemSupport.BP_ItemSupport_C
// 0x0000 (0x0028 - 0x0028)
class UBP_ItemSupport_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemSupport.BP_ItemSupport_C");
		return ptr;
	}


	void STATIC_GetItemRarity(int InItemID, class UObject* __WorldContext, float* OutRarity);
	void STATIC_IsSkillItem(int ItemID, class UObject* __WorldContext, bool* NewParam);
	void STATIC_IsAttrItem(int ItemID, class UObject* __WorldContext, bool* NewParam1);
	void STATIC_SetItemSkill(const struct FItemWorkData& WorkData, class UTO14_BPI_ICN_SKL_SLOT_C* Target, class UObject* __WorldContext);
	void STATIC_SetItemAttr(int ItemID, class UImage* ATT1, class UImage* ATT2, class UImage* ATT3, class UImage* ATT4, class UImage* ATT5, class UImage* ATT6, class UObject* __WorldContext);
	void STATIC_SetItemText(int ItemID, class UAriseTextWidget* Name, class UAriseTextWidget* Text, class UObject* __WorldContext);
	void STATIC_SetItemIcon(int ItemID, class UImage* Target, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
