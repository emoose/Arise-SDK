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

// BlueprintGeneratedClass BP_ContinueScript.BP_ContinueScript_C
// 0x0101 (0x0439 - 0x0338)
class ABP_ContinueScript_C : public ABP_GameScriptBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	bool                                               IsLoadEnd;                                                // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	int                                                SaveSlotIndex;                                            // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        localErrorDLC;                                            // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             localErrorCategory;                                       // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DLCIndex;                                                 // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoVerify;                                                 // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAriseSaveToDoMessage                              ErrorMessage;                                             // 0x036D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUnknownPackage;                                         // 0x036E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x036F(0x0001) MISSED OFFSET
	class UAriseEntitlementManager*                    EntitlementManager;                                       // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FDictionaryText>                     PackageNames;                                             // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FMultiString>                        MultiPackages;                                            // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FModifiedText                               DialogText;                                               // 0x0398(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             localPackages;                                            // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             localDivPackages;                                         // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FMultiString>                        PerPage;                                                  // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FModifiedText                               EmptyString;                                              // 0x0400(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsLoadSuccess;                                            // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ContinueScript.BP_ContinueScript_C");
		return ptr;
	}


	void IsGameStart(bool* Start);
	void GetPackageNames(TArray<struct FString>* Array, struct FModifiedText* Out);
	void CombineWithCRLF(const struct FModifiedText& Text1, const struct FModifiedText& Text2, struct FModifiedText* Out);
	void DialogYesNo(const struct FDictionaryText& InText);
	void GetDLC_CategoryError(const struct FString& Selection, struct FDictionaryText* DicText);
	void GetScriptState(struct FString* CurrentState);
	void GetScriptName(struct FString* MyName);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void StartLoad(bool DoVerify);
	void LoadSuccess();
	void LoadError();
	void ExecuteUbergraph_BP_ContinueScript(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
