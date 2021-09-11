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

// BlueprintGeneratedClass BP_ExNewGameScript.BP_ExNewGameScript_C
// 0x0049 (0x03C9 - 0x0380)
class ABP_ExNewGameScript_C : public ABP_GameStartScriptBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FString                                     GameStartMapName_1;                                       // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bInitGamedata;                                            // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	TArray<struct FString>                             SetFlags_1;                                               // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsClose;                                                  // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	int                                                BackupLoadSlot;                                           // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             InheritFlagList;                                          // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsLoaded;                                                 // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExNewGameScript.BP_ExNewGameScript_C");
		return ptr;
	}


	void IsGameStart(bool* Start);
	void ArtifactFlagCheck();
	bool IsDatabaseLoaded();
	void GetScriptState(struct FString* CurrentState);
	void GetScriptName(struct FString* MyName);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void «0¹0¿0à0¤0Ù0ó0È0_1();
	void «0¹0¿0à0¤0Ù0ó0È0_2();
	void ExecuteUbergraph_BP_ExNewGameScript(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
