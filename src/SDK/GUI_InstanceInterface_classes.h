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

// BlueprintGeneratedClass GUI_InstanceInterface.GUI_InstanceInterface_C
// 0x0000 (0x0028 - 0x0028)
class UGUI_InstanceInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GUI_InstanceInterface.GUI_InstanceInterface_C");
		return ptr;
	}


	void GetComLuneAnimInterface(TScriptInterface<class UTO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C>* Interface);
	void GetSymbolEnemyIconAnimInterface(TScriptInterface<class UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface_C>* Interface);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
