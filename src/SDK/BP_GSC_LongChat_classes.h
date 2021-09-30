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

// BlueprintGeneratedClass BP_GSC_LongChat.BP_GSC_LongChat_C
// 0x00F2 (0x013A - 0x0048)
class UBP_GSC_LongChat_C : public UTitleSceneController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AInputExtPlayerController*                   PlayerController;                                         // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_ScreenMaskBase_C*                        ScreenMask;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseScreenMask;                                           // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPrintDebug;                                              // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
	class ABP_LChatSceneBuilder_C*                     LongChatScene;                                            // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CaptureDelayTick;                                         // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     PlayChatName;                                             // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ADirectionalLight*                           RefDirectionalLight;                                      // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FLongChatPlayArgs                           PlayArgs;                                                 // 0x0098(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_EventSkipController_C*                   EventSkipController;                                      // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  LongchatPlayTransform;                                    // 0x00F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      TickableActor;                                            // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	EAriseGameScene                                    OldScene;                                                 // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipEnd;                                                 // 0x0129(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x012A(0x0002) MISSED OFFSET
	float                                              CharHideDelay;                                            // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPushPFActor;                                             // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayAbort;                                               // 0x0131(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNeedPlayEndMask;                                         // 0x0132(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDelaySceneClose;                                         // 0x0133(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AssetUnloadSubState;                                      // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartPauseManagement;                                    // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLCPause;                                                 // 0x0139(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_LongChat.BP_GSC_LongChat_C");
		return ptr;
	}


	void SetupPrePFStartOperation();
	void EndPlayLongChat();
	void UpdatePlayRecord();
	void DestroyEventSkipController();
	void NeedPlayEndMask_();
	void PlayAbort();
	void SendKpiData();
	void FlushTextureStream();
	bool IsPausePossibleState();
	void _DoCaputerScene(const struct FTransform& CameraTransform, class UCameraComponent* BaseCamera);
	void _IsScreenMasked(bool* bMasked);
	void _ChangeScreenMask();
	void _DoScreenMask(bool MaskOn);
	void AddPlayArgsOnPlayCamp();
	void PostSoundDuckingVolume();
	void PreSoundDuckingVolume();
	void PostEndGC();
	void PreStartGC();
	void PauseAndEventSkipManagement(float Tick);
	void ShowNpcLevel(bool bShow);
	void PauseManagement(bool* bEventSkip);
	bool BPGeneralFunctionBool(const struct FName& OpertionName, TMap<struct FName, struct FString> Params);
	void SetScreenMaskVisible(bool bVisible);
	void GetLongChatPlayTransform(struct FTransform* PlayTransform);
	void PFCharacterActive(bool bEnable, class AActor** PlayerActor);
	void SetupScreenMask(bool NewScreenMask);
	void CreateScreenMask();
	void DebugPrintSceneState();
	void BPE_Sleep(unsigned char nextScene);
	void PushState();
	void PopState();
	void OnEndLongChat();
	void IF_SetDelayLongchatClose(bool bDelay);
	void OnWakeup(unsigned char ActiveScene, unsigned char PrevScene);
	void EventHideNpc(float Delay);
	void BPE_Finalize(ESceneFinalizeReason finalizeReason);
	void BPE_Initialize(ESceneInitializeMode initMode);
	void BPE_Tick(float DeltaTime);
	void OnMemoryRefresh();
	void ExecuteUbergraph_BP_GSC_LongChat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
