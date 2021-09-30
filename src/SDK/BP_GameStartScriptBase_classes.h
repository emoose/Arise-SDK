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

// BlueprintGeneratedClass BP_GameStartScriptBase.BP_GameStartScriptBase_C
// 0x0048 (0x0380 - 0x0338)
class ABP_GameStartScriptBase_C : public ABP_GameScriptBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	bool                                               bIsDebugMap;                                              // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	TArray<struct FString>                             SetFlags;                                                 // 0x0348(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnGameDataInitialized;                                    // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFirstMovieEnd;                                          // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UBP_GSC_Title_C*                             GSC_Title;                                                // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameStartScriptBase.BP_GameStartScriptBase_C");
		return ptr;
	}


	void UpdateNewGame();
	void UserConstructionScript();
	void InitializeGameData(const struct FAriseSimpleEventData& EndCallback);
	void PlayFirstMovie(const struct FAriseSimpleEventData& MovieEndCallback);
	void ExecuteUbergraph_BP_GameStartScriptBase(int EntryPoint);
	void OnFirstMovieEnd__DelegateSignature();
	void OnGameDataInitialized__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
