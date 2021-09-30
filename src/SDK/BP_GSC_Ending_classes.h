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

// BlueprintGeneratedClass BP_GSC_Ending.BP_GSC_Ending_C
// 0x0089 (0x00D1 - 0x0048)
class UBP_GSC_Ending_C : public UEndingSceneController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)
	class AAriseGameMode*                              AriseGameMode;                                            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AStreamLevelLoader*                          StreamLevelLoader;                                        // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             LevelPaths;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               LevelNames;                                               // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     EndingMovieName;                                          // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class AFullscreenMoviePlayerActor_C*               MoviePlayer;                                              // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_EventSkipController_C*                   EventSkipController;                                      // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AInputExtPlayerController*                   PlayerController;                                         // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPause;                                                   // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayingMovie;                                            // 0x00A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSceneReserved;                                           // 0x00AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00AB(0x0001) MISSED OFFSET
	int                                                MoveState;                                                // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPFPlayerVisibility;                                     // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	class ACharacter*                                  PlayerCharacter;                                          // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    DeleteEvent;                                              // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsClearSaveState;                                         // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_Ending.BP_GSC_Ending_C");
		return ptr;
	}


	bool IsPausePossibleState();
	bool IsEnableSystemPause();
	void IsClearSave(bool* OutIsClearSave);
	void SetPlayerCharacterVisibility(bool IsVisibility);
	void IsPlayMask(bool* OutIsMask);
	void PreloadMovie();
	void FinalizeMovie();
	void IsMovieEnd(bool* bEnd);
	void IsLoadAsyncCheck(bool* IsLoadEnd);
	void IsLevelUnloaded(bool* bUnloaded);
	void IsLevelShowed(bool* bShow);
	void IsLevelLoaded(bool* Loaded);
	void EventPlayMovie();
	void LevelLoad();
	void LevelShow();
	void LevelUnload();
	void BPE_Initialize(ESceneInitializeMode initMode);
	void BPE_Tick(float DeltaTime);
	void BPE_Finalize(ESceneFinalizeReason finalizeReason);
	void ExecuteUbergraph_BP_GSC_Ending(int EntryPoint);
	void DeleteEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
