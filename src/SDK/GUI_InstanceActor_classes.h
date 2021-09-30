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

// BlueprintGeneratedClass GUI_InstanceActor.GUI_InstanceActor_C
// 0x0040 (0x0368 - 0x0328)
class AGUI_InstanceActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TScriptInterface<class UIconRegistrarInterface_C>  IconRegistrar;                                            // 0x0338(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface_C> SymbolEnemyIconAnim;                                      // 0x0348(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UTO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C> ComLuneAnim;                                              // 0x0358(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GUI_InstanceActor.GUI_InstanceActor_C");
		return ptr;
	}


	void GetComLuneAnimInterface(TScriptInterface<class UTO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C>* Interface);
	void GetSymbolEnemyIconAnimInterface(TScriptInterface<class UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface_C>* Interface);
	void GetIconRegistrar(TScriptInterface<class UIconRegistrarInterface_C>* IconRegistrar);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Terminate();
	void ExecuteUbergraph_GUI_InstanceActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
