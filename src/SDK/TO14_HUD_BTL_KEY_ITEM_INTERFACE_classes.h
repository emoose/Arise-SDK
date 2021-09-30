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

// BlueprintGeneratedClass TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C
// 0x0000 (0x0028 - 0x0028)
class UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C");
		return ptr;
	}


	void SetButtonArtsLabel(const struct FName& ButtonLabel);
	void SetNormalAttack(bool IsAir);
	void SetMystic(const struct FName& UnitID);
	void SetEnableArts(bool IsAir, bool IsUseable);
	void PlayNotUseAnim();
	void SetArts(const struct FName& ArtsLabel, bool IsAir, bool IsUseable);
	void PlayStartKeyAnim();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
