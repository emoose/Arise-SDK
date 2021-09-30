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

// BlueprintGeneratedClass BP_NewGameScript.BP_NewGameScript_C
// 0x0030 (0x0368 - 0x0338)
class ABP_NewGameScript_C : public ABP_GameScriptBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	struct FString                                     GameStartMapName;                                         // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bInitGamedata;                                            // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	TArray<struct FString>                             SetFlags;                                                 // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NewGameScript.BP_NewGameScript_C");
		return ptr;
	}


	void GetMenuManager_local(TScriptInterface<class UTO14_BP_MenuManagerInterface_C>* MenuManagerInterface);
	void UpdateNewGame();
	void UserConstructionScript();
	void InitializeGameData();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NewGameScript(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
