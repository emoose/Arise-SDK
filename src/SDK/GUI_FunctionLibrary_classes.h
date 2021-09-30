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

// BlueprintGeneratedClass GUI_FunctionLibrary.GUI_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UGUI_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GUI_FunctionLibrary.GUI_FunctionLibrary_C");
		return ptr;
	}


	void STATIC_GUI_GetComLuneAnim_ANM(class UObject* __WorldContext, class UWidgetAnimation** Animation);
	void STATIC_GUI_GetComLuneAnimInterface(class UObject* __WorldContext, TScriptInterface<class UTO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C>* Interface);
	void STATIC_GUI_GetSymbolEnemyIconAnim_Show(class UObject* __WorldContext, class UWidgetAnimation** Animation);
	void STATIC_GUI_GetSymbolEnemyIconAnim_Vanish(class UObject* __WorldContext, class UWidgetAnimation** Animation);
	void STATIC_GUI_GetSymbolEnemyIconAnim_Disappear_Big(class UObject* __WorldContext, class UWidgetAnimation** Animation);
	void STATIC_GUI_GetSymbolEnemyIconAnim_Disappear_Small(class UObject* __WorldContext, class UWidgetAnimation** Animation);
	void STATIC_GUI_GetSymbolEnemyIconAnim_Mist_Non_to_Big(class UObject* __WorldContext, class UWidgetAnimation** Animation);
	void STATIC_GUI_GetSymbolEnemyIconAnim_Mist_Non_to_Small(class UObject* __WorldContext, class UWidgetAnimation** Animation);
	void STATIC_GUI_SymbolEnemyIconAnim_Mist_Big_to_Small(class UObject* __WorldContext, class UWidgetAnimation** Animation);
	void STATIC_GUI_SymbolEnemyIconAnim_Mist_Small_to_Big(class UObject* __WorldContext, class UWidgetAnimation** Animation);
	void STATIC_GUI_GetSymbolEnemyIconAnimInterface(class UObject* __WorldContext, TScriptInterface<class UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface_C>* Interface);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
