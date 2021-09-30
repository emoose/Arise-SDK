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

// BlueprintGeneratedClass BP_GSC_Movie.BP_GSC_Movie_C
// 0x0080 (0x00C8 - 0x0048)
class UBP_GSC_Movie_C : public UGameSceneController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UTO14_BPI_GUI_SYS_TTL_TEST_C*                UMG;                                                      // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AInputExtPlayerController*                   PlayerController;                                         // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDispDebugLog;                                            // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNewGame;                                                 // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
	class AFullscreenMoviePlayerActor_C*               MoviePlayer;                                              // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     movieName;                                                // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      EventSkipController;                                      // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPause;                                                   // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	class AInputExtPlayerController*                   PlayerControlller;                                        // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAriseMovieOptionDatabase*                   MoviePlayOption;                                          // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBreakOnEventFinalize;                                    // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FName                                       EventSkipControllerName;                                  // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UBPI_SkipPauseController_C> EventSkipControllerIF;                                    // 0x00B8(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_Movie.BP_GSC_Movie_C");
		return ptr;
	}


	void SetPostMaskColor(TEnumAsByte<EVisualFadeLayer> Layer);
	bool IsEnableSystemPause();
	void ExitMovie();
	void PlayMovie();
	void WaitEndMovie(bool* bEnd);
	void DebugPrintSceneState();
	void BPE_Tick(float DeltaTime);
	void BPE_Initialize(ESceneInitializeMode initMode);
	void SetMovieName(const struct FString& movieName);
	void BPE_Finalize(ESceneFinalizeReason finalizeReason);
	void EventPreFade(bool bBlack);
	void ExecuteUbergraph_BP_GSC_Movie(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
