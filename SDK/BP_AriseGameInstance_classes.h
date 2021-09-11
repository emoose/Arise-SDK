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

// BlueprintGeneratedClass BP_AriseGameInstance.BP_AriseGameInstance_C
// 0x006A (0x032A - 0x02C0)
class UBP_AriseGameInstance_C : public UAriseGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (Transient, DuplicateTransient)
	struct FString                                     InitialMapName;                                           // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET
	struct FTransform                                  SavePlayerTransform;                                      // 0x02E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             LoadingDatabasePaths;                                     // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UObject*                                     BootWidget;                                               // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoadStringDictionary;                                    // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBootScenePostLoadFinished;                               // 0x0329(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AriseGameInstance.BP_AriseGameInstance_C");
		return ptr;
	}


	void BootScenePostLoadFinished();
	void LoadStringDictionary();
	void OpenAriseMasterLevel();
	void StopLoadScreem();
	void IsLoadedStringDictionary(bool* IsLoaded);
	void _8_Ð™‡eW_Ržøfn0í0ü0É0(class UStringDictionaryListDatabase* ResidentStringDictionary);
	void ReceiveInit();
	void ReceiveShutdown();
	void ExecuteUbergraph_BP_AriseGameInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
