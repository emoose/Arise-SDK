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

// BlueprintGeneratedClass TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C
// 0x0630 (0x0958 - 0x0328)
class ATO14_BP_MenuManagerBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        DomeMesh;                                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 ViewWidget;                                               // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsOpenFlag;                                               // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETO14_ENM_MenuState>                   FlowStatus;                                               // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCloseFlag;                                              // 0x034A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x034B(0x0001) MISSED OFFSET
	int                                                nextScene;                                                // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTO14_BP_OpenMenuSet                        NowScene;                                                 // 0x0350(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTO14_BP_OpenMenuSet>                PrevSceneList;                                            // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     NextSceneID;                                              // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class APlayerController*                           OwnerPlayer;                                              // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMenuPadProcess*                             PadProcess;                                               // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ReturnValue;                                              // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	class UUserWidget*                                 BaseWidget;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // 0x03B0(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               InitGlobalItem;                                           // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x03B2(0x0006) MISSED OFFSET
	class AActor*                                      OldViewTarget;                                            // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_HLP_C*                     HelpWidget;                                               // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bRePositionFinished;                                      // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCurrentScreenMasked;                                     // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNeedScreenMasked;                                        // 0x03CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x03CB(0x0005) MISSED OFFSET
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CurrentMenuID;                                            // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bIsCaptured;                                              // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	float                                              DelayTimer;                                               // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Eventinit;                                                // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FMenuData                                   CurrentMenuData;                                          // 0x0400(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMenuCharacterManager*                       CharacterManager;                                         // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Bitmask_Need;                                             // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Bitmask_LoadStart;                                        // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Bitmask_LoadEnd;                                          // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	class UUserWidget*                                 WorldMap;                                                 // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector2D                                   PosTarget;                                                // 0x04D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PosRecent;                                                // 0x04D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FocusTime;                                                // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentTime;                                              // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFocusAnimation;                                         // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	int                                                TestCounter;                                              // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector2D>                           TestTarget;                                               // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TestTimer;                                                // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PosCurrent;                                               // 0x0504(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ScaleTarget;                                              // 0x050C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ScaleCurrent;                                             // 0x0514(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	struct FName                                       LevelMenuStageName;                                       // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     LevelMenuStagePath;                                       // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_StreamLevelLoader_C*                     StreamLevelLoader;                                        // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     WorldMapPath;                                             // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     StarMapPath;                                              // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Bitmask_RecentNeed;                                       // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	struct FString                                     ShopID;                                                   // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ForceOpenID;                                              // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     BtlItemID;                                                // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FBattleMenuParam                            BattleMenuParam;                                          // 0x0598(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UUserWidget*                                 BtlBack;                                                  // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsHoldMouse;                                              // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPauseMenu;                                              // 0x05B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWorldTimePaused;                                        // 0x05BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x5];                                       // 0x05BB(0x0005) MISSED OFFSET
	struct FString                                     HelpID;                                                   // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsLevelMasked;                                            // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSaveDataLoaded_1;                                       // 0x05D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x05D2(0x0006) MISSED OFFSET
	struct FString                                     OpenMapLocation;                                          // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsHideCapture;                                            // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x05E9(0x0007) MISSED OFFSET
	struct FString                                     InnID;                                                    // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_MenuCamera_C*                            MenuCamera;                                               // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     LocationID;                                               // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UUserWidget*                                 FrameWidget;                                              // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsFrameOpened;                                            // 0x0620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0621(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<ETO14_Menu_Parts_Bitmask>, EWidgetUse> EnumMap;                                                  // 0x0628(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UTO14_MenuSCHTBase_C*                        SCHTWidget;                                               // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	EArisePartyID                                      CampCharaID;                                              // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0681(0x0007) MISSED OFFSET
	class UTO14_BP_MenuBGBase_C*                       TopFadeWidget;                                            // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                Bitmask_DoAnimation;                                      // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDoTopFadeOut;                                            // 0x0694(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0695(0x0003) MISSED OFFSET
	float                                              SleepTimeoutCounter;                                      // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CaptureWait;                                              // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTO14_BP_MenuHeaderBase_C*                   HeaderWidget;                                             // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                Bitmask_Mask;                                             // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsClosePrepared;                                          // 0x06AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x06AD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    LevelActivate;                                            // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     ShowAlias;                                                // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EArisePartyID                                      TITCharaID;                                               // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x06D1(0x0003) MISSED OFFSET
	int                                                TITAliasID;                                               // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CampPointID;                                              // 0x06D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AMenuPadProcess*                             DummyPadProcess;                                          // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UTO14_BP_MenuTutorialBase_C*                 TutorialWidget;                                           // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                Bitmask_BG;                                               // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x06FC(0x0004) MISSED OFFSET
	struct FString                                     QuestID;                                                  // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LoadedSlot;                                               // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShowLevel;                                              // 0x0714(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHideLevel;                                              // 0x0715(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x0716(0x0002) MISSED OFFSET
	class UInheritFlags*                               InheritFlags;                                             // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSupressCapture;                                          // 0x0720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0721(0x0007) MISSED OFFSET
	struct FBtlHudVisible_DatatableLabel               HudPresetBackUp;                                          // 0x0728(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ShowCaptureBG;                                            // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ShowLevelHeader;                                          // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UTO14_BP_MenuHeaderBase_C*                   HeaderWidget3D;                                           // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      HeaderActor;                                              // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CaptureWaitFrameCount;                                    // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0764(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    EventInitMenu;                                            // 0x0768(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventFinalizeMenu;                                        // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ShowTopBG;                                                // 0x0788(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	EMenuTopCharaType                                  TopCharaType;                                             // 0x0798(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMenuTopCharaType                                  TopCharaTypeOld;                                          // 0x0799(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x6];                                       // 0x079A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    ChangeTopBG;                                              // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              TopBackDarkness;                                          // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x07B4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ShowTopParticle;                                          // 0x07B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              ExecTime;                                                 // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x07CC(0x0004) MISSED OFFSET
	struct FString                                     MenuResult;                                               // 0x07D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ExitDelayTimer;                                           // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x07E4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnOpenStart;                                              // 0x07E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCloseStart;                                             // 0x07F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpenEnd;                                                // 0x0808(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCloseEnd;                                               // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeEquipment;                                        // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AActor*                                      TopBackActor;                                             // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	EMenuBGType                                        BGType;                                                   // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMenuBGType                                        BGTypeOld;                                                // 0x0841(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInitializeComplete;                                     // 0x0842(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x5];                                       // 0x0843(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCloseViewStart;                                         // 0x0848(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bFinishFading;                                            // 0x0858(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x0859(0x0007) MISSED OFFSET
	struct FString                                     QuestIDSecondary;                                         // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     OpenMapLocationSecondary;                                 // 0x0870(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               StoredMapEnvs;                                            // 0x0880(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bShowMapEnvironment;                                      // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDucking;                                               // 0x0891(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsNeedDLC_Check;                                         // 0x0892(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsNewGameStart;                                           // 0x0893(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x0894(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ShowLight;                                                // 0x0898(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       FinalizeTaskId;                                           // 0x08A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     OldMenuID;                                                // 0x08B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class UUserWidget*>           RemainWidgetMap;                                          // 0x08C0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bIsNext;                                                  // 0x0910(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x0911(0x0003) MISSED OFFSET
	int                                                ChangeMapEnvWaitFrameCnt;                                 // 0x0914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 ExternalInnerHelpWidget;                                  // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TScriptInterface<class UTO14_BPI_GUI_ICN_MNU_ANIM_Interface_C> IcnMnuAnim;                                               // 0x0920(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LoadPriority;                                             // 0x0930(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	TArray<struct FSoftObjectPath>                     PreloadStatusImageList;                                   // 0x0938(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnCookingEvent;                                           // 0x0948(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C");
		return ptr;
	}


	void GetIcnMnuAnimInterface(TScriptInterface<class UTO14_BPI_GUI_ICN_MNU_ANIM_Interface_C>* Interface);
	void GetBtlControlChara(EArisePartyID* NewParam);
	void SetVisibilityHeaderWidget(ESlateVisibility InVisibility, bool* bSuccess);
	void SetBtlUsetItemID(const struct FString& ItemID, bool* bSuccess);
	void GetIsNewGameStart(bool* IsNewGameStart);
	void SetIsNewGameStart(bool bIsNewGameStart, bool* bSuccess);
	void GetNextSceneID(struct FString* NextSceneID);
	void SetHeaderNameTopMenu(const struct FString& InMenuID, const struct FDictionaryText& InText, bool* bSuccess);
	void SetSaveDataLoaded(bool InSaveDataLoaded, bool* bSuccess);
	void SetLoadedSlot(int LoadedSlot, bool* bSuccess);
	void ShowHelpWidget(bool* bSuccess);
	void GetCurrentMenuData(struct FMenuData* CurrentMenuData);
	void SetHeaderWidget3D(class UUserWidget* HeaderWidget3D, bool* bSuccess);
	void SetHeaderActor(class AActor* HeaderActor, bool* bSuccess);
	void SetHeaderIcon(const struct FString& MenuID, bool WithAnimation, bool* bSuccess);
	void GetShowAlias(struct FString* Label);
	void GetHelpWidget(class UUserWidget** HelpWidget);
	void GetQuestID(struct FString* QuestID);
	void Close(bool* bSuccess);
	void GetOpenMapLocation(struct FString* OpenMapLocation);
	void GetOpenMapLocationSecondary(struct FString* OpenMapLocationSecondary);
	void GetQuestIDSecondary(struct FString* QuestIDSecondary);
	void CallGetBackMenuID(struct FString* MenuID);
	void SetOpenMapLocationSecondary(const struct FString& OpenMapLocationSecondary, bool* bSuccess);
	void SetOpenMapLocation(const struct FString& OpenMapLocation, bool* bSuccess);
	void SetQuestIDSecondary(const struct FString& QuestIDSecondary, bool* bSuccess);
	void SetQuestID(const struct FString& QuestID, bool* bSuccess);
	void CheckPrevMenuCount(const struct FString& MenuID, int* Count);
	void GetPadProcess(class AMenuPadProcess** PadProcess);
	void PrepareToCloseView(const struct FString& NextMenuID, bool* bSuccess);
	void SetShowAlias(const struct FString& Label, bool* bSuccess);
	void SetHelpID(const struct FString& HelpID, bool* bSuccess);
	void GetMenuBGType(EMenuBGType* BGType);
	void SetExternalHelpInnerWidget(class UUserWidget* HelpInnerWidget, bool* bSuccess);
	void GetPrevSceneCount(int* Count);
	void CheckIsClose(bool* IsClose);
	void Open(const struct FString& MenuID, class APlayerController* OwnerPlayer, bool HideCapture, bool* bSuccess);
	void GetShopID(struct FString* ShopID);
	void IsAllowInputChangeMenu(bool* bAllow);
	void SetHelp(const struct FString& HelpLabel, bool* bSuccess);
	void FadeInForLevel(bool* bSuccess);
	void FadeOutForLevel(bool* bSuccess);
	void SetBattleMenuParam(const struct FBattleMenuParam& BattleMenuParam, bool* bSuccess);
	void GetBattleMenuParam(struct FBattleMenuParam* BattleMenuParam);
	void GetBtlItemID(struct FString* BtlItemID);
	void ForceFinalize(bool* bSuccess);
	void GetCurrentMenuID(struct FString* MenuID);
	void IsTutorialState(bool* bTutorialState);
	void CheckAndExecCurrentMenuTutorial(bool* bExecTutorial);
	void GetMenuResult(struct FString* Result);
	void GetLoadedSlot(int* OutLoadedSlot);
	void IsSaveDataLoaded(bool* OutSaveDataLoaded);
	void IsLoadStatusImage(bool* Loaded1);
	void UnloadStatusImage();
	void PreloadStatusImage();
	void FinalizeVariables();
	void RequestDLCEntitlementCheck(bool bIsNeedDLC_Check);
	void CheckDLCEntitlementIfNeed(bool* OKorNotNeed);
	void GetBGTypeOld(EMenuBGType* BGType);
	void IsDucking(bool* IsDucking);
	void ShowMapEnvironment(bool bNewShow);
	void RestoreMapEnvironment();
	void StoreMapEnvironment();
	void GetBackMenuID(struct FString* MenuID);
	void CheckPrevMenuCountImpl(const struct FString& MenuID, int* Count);
	void GetBGType(EMenuBGType* BGType);
	void IsTitleScene(bool* OutIsTitle);
	void SetShowDomeMesh(bool InIsShow);
	void SetMenuResult(const struct FString& MenuResult);
	void Terminate();
	void SetTopCharaType(struct FMenuData* MenuData);
	void Set3DHeaderVisibility(bool bNewVisibility);
	void GetHeaderWidget(class UTO14_BP_MenuHeaderBase_C** Widget);
	void BackupInheritFlags();
	void UpdateInitialize();
	bool IsMenuTransparent();
	void UpdateInitTutorial();
	void UpdateTutorial(float Time);
	void ClearTITSettings();
	void GetTITSettings(EArisePartyID* CharaID, int* AliasID);
	void SetTITSettings(EArisePartyID CharaID, int AliasID);
	void GetShowAliasImpl(struct FString* Label);
	void SetHeaderIconImpl(const struct FString& MenuID, bool WithAnimation);
	void SetCharaOffset(const struct FVector2D& Offset);
	void ShowCharaLevel(bool IsShow);
	void Open_Delayed(const struct FString& MenuID, class APlayerController* OwnerPlayer, bool HideCapture);
	void WaitEnd_TopFade();
	void WaitEnd_Help();
	void WaitEnd_Capture();
	void WaitEnd(EWidgetUse Bit);
	void WaitEnd_Frame();
	void WaitEnd_BtlBG();
	void CallCloseAnimations();
	void GetSCHTRoot(class UTO14_BPI_GUI_SYS_SCHT_ROOT_C** Widget);
	void CheckHelpMenuID(const struct FString& MenuID, struct FString* HelpMenuID);
	void UpdateBeforExit();
	void TerminatePauseMenu();
	void OpenPause();
	void SetBtlUseMagicArts(EArisePartyID UseChara, const struct FString& Label);
	void SetBtlContrloMode();
	void GetBtlControlMode();
	void OnBattleMenuEnd();
	void LoadEnd_CharaLevel();
	void UnloadEnd_CharaLevel();
	void UnloadCharaLevel();
	void LoadCharaLevel();
	struct FVector2D BlendVector2D(const struct FVector2D& Goal, const struct FVector2D& Start, float Rate);
	void SetNeedFlags(struct FMenuData* MenuData);
	void CreateViewWidget(class UClass* Class);
	void OpenNext(const struct FString& InputPin);
	void Initialize();
	void UpdateMain(float InputPin);
	void UpdateExitWait();
	void DoCapture();
	void UpdateFinalize();
	void UpdateLoading(float Tick);
	void GetSceneDepth(int* SceneCount);
	void IsOpen(bool* IsOpen);
	void ReleaseGlobalItem();
	void CreateGlobalItem();
	void HelpUpdate();
	void BGWork();
	void FinishPad();
	void InitPad(bool* IsCreate);
	void CloseImpl();
	void IsClose(bool* IsClose);
	void UserConstructionScript();
	void BindOnOpenStartEvent(const struct FAriseSimpleEventData& Event);
	void UnbindOnOpenStartEvent(const struct FAriseSimpleEventData& Event);
	void BindOnCloseStartEvent(const struct FAriseSimpleEventData& Event);
	void UnbindOnCloseStartEvent(const struct FAriseSimpleEventData& Event);
	void BindOnChangeEquipmentEvent(const struct FAriseCharaEventData& Event);
	void UnbindOnChangeEquipmentEvent(const struct FAriseCharaEventData& Event);
	void RestoreInheritFlags();
	void BindOnCloseViewStartEvent(const struct FAriseSimpleEventData& Event);
	void UnbindOnCloseViewStartEvent(const struct FAriseSimpleEventData& Event);
	void BindOnOpenEndEvent(const struct FAriseSimpleEventData& Event);
	void UnbindOnCloseEndEvent(const struct FAriseSimpleEventData& Event);
	void UnbindOnOpenEndEvent(const struct FAriseSimpleEventData& Event);
	void BindOnCloseEndEvent(const struct FAriseSimpleEventData& Event);
	void BindOnShowTopBG(const struct FOnMenuShowTopBGEventData& Event);
	void UnbindOnShowTopBG(const struct FOnMenuShowTopBGEventData& Event);
	void BindOnChangeTopBG(const struct FOnMenuChangeTopBGEventData& Event);
	void UnbindOnChangeTopBG(const struct FOnMenuChangeTopBGEventData& Event);
	void BindOnLevelActivate(const struct FOnMenuLevelActivate& Event);
	void UnbindOnLevelActivate(const struct FOnMenuLevelActivate& Event);
	void BindOnShowLevelHeader(const struct FOnMenuSimpleShow& Event);
	void UnbindOnShowLevelHeader(const struct FOnMenuSimpleShow& Event);
	void BindOnShowCaptureBG(const struct FOnMenuSimpleShow& Event);
	void UnbindOnShowCaptureBG(const struct FOnMenuSimpleShow& Event);
	void BindOnShowTopParticle(const struct FOnMenuSimpleShow& Event);
	void UnbindOnShowTopParticle(const struct FOnMenuSimpleShow& Event);
	void BindOnShowLight(const struct FOnMenuSimpleShow& Event);
	void UnbindOnShowLight(const struct FOnMenuSimpleShow& Event);
	void NotifyOnChangeEquipment(EArisePartyID PartyId);
	void BindOnCookingEvent(const struct FAriseCookingEventData& Event);
	void UnbindOnCookingEvent(const struct FAriseCookingEventData& Event);
	void CallOnCookingEvent(EArisePartyID PartyId, int RecipeID);
	void ResetMenuArenaSelect();
	void ReceiveBeginPlay();
	void UpdateFunc(float TickData);
	void SetupDelegate();
	void OnStarMapRemove();
	void OnOpenView();
	void OnCloseView();
	void OnCloseImmidiate();
	void EventGameStateChanged(EAriseGameState ChangedState, bool NewState);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnWaitEnd_TopFade();
	void OnDuckingStart();
	void OnDuckingEnd();
	void onGoBackToTitle();
	void OnLoadedTop2BackActor(class UObject* InLoadedAsset);
	void OnOpenSystemWindow();
	void OnCloseSystemWindow();
	void ExecuteUbergraph_TO14_BP_MenuManagerBase(int EntryPoint);
	void OnCookingEvent__DelegateSignature(EArisePartyID PartyId, int RecipeID);
	void ShowLight__DelegateSignature(bool bShow);
	void OnCloseViewStart__DelegateSignature();
	void OnChangeEquipment__DelegateSignature(EArisePartyID PartyId);
	void OnCloseEnd__DelegateSignature();
	void OnOpenEnd__DelegateSignature();
	void OnCloseStart__DelegateSignature();
	void OnOpenStart__DelegateSignature();
	void ShowTopParticle__DelegateSignature(bool bShow);
	void ChangeTopBG__DelegateSignature(bool bNext, bool OldShow, EMenuTopCharaType OldCharaType, bool NewShow, EMenuTopCharaType NewCharaType, float BackDarkness);
	void ShowTopBG__DelegateSignature(bool bShow, EMenuTopCharaType ShowCharaType, float BackDarkness);
	void EventFinalizeMenu__DelegateSignature();
	void EventInitMenu__DelegateSignature();
	void ShowLevelHeader__DelegateSignature(bool bShow);
	void ShowCaptureBG__DelegateSignature(bool bShow);
	void LevelActivate__DelegateSignature(bool Active, bool bUsePostProcess);
	void Eventinit__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
