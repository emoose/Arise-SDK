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

// BlueprintGeneratedClass TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface_C");
		return ptr;
	}


	void GetShow(class UWidgetAnimation** Animation);
	void GetVanish(class UWidgetAnimation** Animation);
	void GetDisappear_Big(class UWidgetAnimation** Animation);
	void GetDisappear_Small(class UWidgetAnimation** Animation);
	void GetMist_Non_to_Big(class UWidgetAnimation** Animation);
	void GetMist_Non_to_Small(class UWidgetAnimation** Animation);
	void GetMist_Big_to_Small(class UWidgetAnimation** Animation);
	void GetMist_Small_to_Big(class UWidgetAnimation** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
