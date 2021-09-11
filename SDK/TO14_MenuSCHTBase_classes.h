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

// WidgetBlueprintGeneratedClass TO14_MenuSCHTBase.TO14_MenuSCHTBase_C
// 0x0000 (0x0208 - 0x0208)
class UTO14_MenuSCHTBase_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_MenuSCHTBase.TO14_MenuSCHTBase_C");
		return ptr;
	}


	void GetSCHTRoot(class UTO14_BPI_GUI_SYS_SCHT_ROOT_C** Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
