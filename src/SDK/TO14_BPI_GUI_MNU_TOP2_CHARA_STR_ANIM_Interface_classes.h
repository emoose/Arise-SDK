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

// BlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP2_CHARA_STR_ANIM_Interface.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_ANIM_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_ANIM_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP2_CHARA_STR_ANIM_Interface.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_ANIM_Interface_C");
		return ptr;
	}


	void GetANM_CHANGE_OUT(class UWidgetAnimation** Animation);
	void GetANM_CHANGE_IN(class UWidgetAnimation** Animation);
	void GetANM_PRE_OPEN(class UWidgetAnimation** Animation);
	void GetANM_NEXT_OUT(class UWidgetAnimation** Animation);
	void GetANM_NEXT_IN(class UWidgetAnimation** Animation);
	void GetANM_OPEN(class UWidgetAnimation** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
