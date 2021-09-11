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

// WidgetBlueprintGeneratedClass BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C
// 0x0374 (0x057C - 0x0208)
class UBP_MNU_FREE_CURSOR_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	float                                              MoveSpeed;                                                // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveDushSpeed;                                            // 0x0214(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoveNormalSpeed;                                          // 0x0218(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	class UWidget*                                     MoveCanvasWidget;                                         // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bMouseControl;                                            // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0229(0x0003) MISSED OFFSET
	struct FVector2D                                   InputMoveVector;                                          // 0x022C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	class UBP_MenuFreeCursorAdsorbArea_C*              NextAdsorbArea;                                           // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_MenuFreeCursorAdsorbArea_C*              CurAdsorbArea;                                            // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TMap<class UWidget*, bool>                         HoverAreas;                                               // 0x0248(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDushInput;                                               // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	TMap<class UWidget*, struct FST_MenuFreeCursorAdsorbAreas> AdsorbAreas;                                              // 0x02A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUnhovered;                                              // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UWidget*>                             HoveredAreas;                                             // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FST_WidgetArray>                  GroupJumpAreaMap;                                         // 0x0320(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWidget*                                     NextJumpToWidget;                                         // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              GroupJumpSpeed;                                           // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	class UWidget*                                     CurJumpToWidget;                                          // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TMap<int, struct FST_MenuFreeCursorGroupJumpInput> GroupJumpInputMap;                                        // 0x0388(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, float>                                   GroupJumpSppedMap;                                        // 0x03D8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnStartGroupJump;                                         // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndGroupJump;                                           // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                RunningGroupJump;                                         // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDecideEvent;                                            // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FMargin                                     MoveLimitRect;                                            // 0x0460(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   MoveLimitOffset;                                          // 0x0470(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMoveLimit;                                            // 0x0478(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	TArray<class UWidget*>                             ReactionAreas;                                            // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AdsorbThreshold;                                          // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	TMap<int, float>                                   GroupJumpThresholdMap;                                    // 0x0498(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              MoveThreshold;                                            // 0x04E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDushEnable;                                              // 0x04EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x04ED(0x0003) MISSED OFFSET
	float                                              MoveSpeedScale;                                           // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAdsorbEnable;                                            // 0x04F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMoveCanvas;                                             // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UWidgetComponent*                            WidgetComponent;                                          // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bDragMove;                                                // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0511(0x0003) MISSED OFFSET
	struct FVector2D                                   DragMoveRenderPos;                                        // 0x0514(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DragMoveSpeedScale;                                       // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdsorbSpeed;                                              // 0x0520(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	TMap<class UWidget*, int>                          MouseHoveredReqAreas;                                     // 0x0528(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bTermed;                                                  // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnhoverAllWhenClosedSysWindow;                           // 0x0579(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReqInitJumpWidget;                                       // 0x057A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableUpdateMouseCursor;                                 // 0x057B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C");
		return ptr;
	}


	void IsRunningGroupJump(bool* bRunning);
	void ForceRunGroupJump(int Group, class UWidget* To, bool* bSuccess);
	void MouseUnhoverAll(bool* bSuccess);
	void MouseUnhover(class UWidget* Widget, bool* bSuccess);
	void MouseHover(class UWidget* Widget, bool* bSuccess);
	void RequestInitGroupJump();
	void CheckInitGroupJump(bool* Success);
	void ContainsHitVisibleHoveredAreas(bool* Success);
	void SetDragMoveSpeedScale(float Scale);
	void DragMove(const struct FVector2D& MousePos, bool* bSuccess);
	void SetWidgetComponent(class UWidgetComponent* WidgetComponent, bool* bSuccess);
	void UnbindDecideEvent(const struct FScriptDelegate& OnDecide);
	void BindMoveCanvasEvent(const struct FScriptDelegate& Event);
	void IsAdsorbEnable(bool* bEnable);
	void SetAdsorbEnable(bool bEnable, bool* bSuccess);
	void CanAdsorb(bool* bCan);
	void SetMoveSpeedScale(float Scale);
	void SetEntityVisible(ESlateVisibility Visibility);
	void GetEntityWidget(class UWidget** Widget);
	void StopGroupJump(bool* Success);
	void StopAdsorb();
	void DeReaction(class UWidget* Widget, bool* EndReaction);
	void Reaction(class UWidget* Widget, bool* StartReaction);
	void Hover(class UWidget* Widget, bool* Success);
	void ClampMoveLimit(const struct FVector2D& InPos, struct FVector2D* OutPos);
	void SetMoveLimitOffset(const struct FVector2D& Offset);
	void BindDecideEvent(const struct FScriptDelegate& OnDecide);
	void ResetMove(bool* Success);
	void RemoveHoverAreaAll(bool* Success);
	void BindEndGroupJumpEvent(const struct FScriptDelegate& OnEndGroupJump);
	void BindStartGroupJumpEvent(const struct FScriptDelegate& OnStartGroupJump);
	void CanInput(bool* Can);
	void GetHoveredAreas(TArray<class UWidget*>* HoveredAreas);
	void SetGroupJumpInputButtons(int Group, TArray<struct FST_MenuFreeCursorButton>* Buttons);
	void GetGroupJumpArea(int Group, TArray<class UWidget*>* Widgets);
	void Unhover(class UWidget* Widget, bool* Success);
	void UnhoverAll(bool* Success);
	void RemoveHoverArea(class UWidget* Widget, bool* Success);
	void ExecGroupJump(float Time, bool* Success);
	void BindUnhoveredEvent(const struct FScriptDelegate& OnUnhovered);
	void BindHoveredEvent(const struct FScriptDelegate& OnHovered);
	void RunMove(const struct FVector2D& InputAxis, bool* Success);
	void RunGroup1Jump(const struct FVector2D& InputDir);
	void RunGroup0Jump(const struct FVector2D& InputDir);
	void AddGroupJumpArea(int Group, TArray<class UWidget*>* Widgets);
	void DecideHoveredAreas();
	void CheckDecideInput(class AMenuPadProcess* PadProcess, bool* IsInput);
	void BindMoveCanvasWidget(class UWidget* MoveCanvastWidget);
	void AddHoverArea(class UWidget* Widget, bool* Success);
	void AddAdsorbAreas(class UWidget* Key, TArray<class UBP_MenuFreeCursorAdsorbArea_C*>* AdsorbAreas, bool* Success);
	void Term();
	void CheckGroup1JumpInput(class AMenuPadProcess* PadProcess, bool* IsInput, struct FVector2D* InputDir);
	void CheckMoveInput(class AMenuPadProcess* PadProcess, bool* IsInput, struct FVector2D* InputAxis);
	void FindNearlyAdsorbArea(class UWidget* Key, TArray<class UBP_MenuFreeCursorAdsorbArea_C*>* OutNearlyAdsorbAreaHierarchy, bool* found, class UBP_MenuFreeCursorAdsorbArea_C** NearlyAdsorbArea);
	void CheckGroup0JumpInput(class AInputExtInputProcessBase* PadProcess, bool* IsInput, struct FVector2D* InputDir);
	void CheckDushInput(class AInputExtInputProcessBase* PadProcess, bool* IsInput);
	void MoveCanvas(const struct FVector2D& DeltaMove, float Threshold, bool* Success);
	void CheckMouseCursorHover(bool* Success);
	void CheckPadCursorHover(bool* Success);
	void ExecAdsorb(float Time);
	void ExecPadInput(class AMenuPadProcess* PadProcess, bool* Success);
	void ExecMouseInput(class AMenuPadProcess* PadProcess, bool* Success);
	void CheckControl(class AMenuPadProcess* PadProcess, bool* IsMouse);
	void Exec(float Time, class AMenuPadProcess* PadProcess, const struct FMenuData& GlobalData, bool* Success);
	void Init(bool* Success);
	void OnCloseSystemWindow();
	void OnMouseControlStart();
	void OnPadControlStart(class AMenuPadProcess* PadProcess);
	void OnDushStart();
	void OnDushEnd();
	void OnOpenSystemWindow();
	void Destruct();
	void ExecuteUbergraph_BP_MNU_FREE_CURSOR_Base(int EntryPoint);
	void OnMoveCanvas__DelegateSignature();
	void OnDecideEvent__DelegateSignature(class UWidget* Widget);
	void OnEndGroupJump__DelegateSignature(int Group);
	void OnStartGroupJump__DelegateSignature(int Group);
	void OnUnhovered__DelegateSignature(class UWidget* Widget);
	void OnHovered__DelegateSignature(class UWidget* Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
