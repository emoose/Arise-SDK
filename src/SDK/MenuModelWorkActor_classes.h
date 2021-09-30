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

// BlueprintGeneratedClass MenuModelWorkActor.MenuModelWorkActor_C
// 0x01F8 (0x0520 - 0x0328)
class AMenuModelWorkActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      SceneCamera;                                              // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  LevelTransform;                                           // 0x0340(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LoadLevel;                                                // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_MenuCamera_C*                            MenuCamera;                                               // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMenuCharacterManager*                       CharacterManager;                                         // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LoadingModelID;                                           // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ModelLocateScale;                                         // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DefaultRotate;                                            // 0x0390(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ModelRotate;                                              // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EArisePartyID, struct FVector4>               CurrentCharaTRS;                                          // 0x03A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AMenuCharacter*                              ViewModel;                                                // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ModelVisibleCheck;                                        // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	struct FVector2D                                   ModelOffset;                                              // 0x03FC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	EArisePartyID                                      PartyId;                                                  // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CameraMake;                                               // 0x0405(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponDisable;                                            // 0x0406(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StateWait;                                                // 0x0407(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnimChange;                                               // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	struct FString                                     OpenMenuType;                                             // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DLCMode;                                                  // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	TArray<class ABP_PF_ScriptCamera_C*>               BackupEventCamera;                                        // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<bool>                                       EventPostProcessEnabled;                                  // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SendCommandSkip;                                          // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	int                                                TestValue;                                                // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HelpState;                                                // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GuideCheckSkip;                                           // 0x0451(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMenuModelPositionSaveType                         MenuSceneType;                                            // 0x0452(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x0453(0x0005) MISSED OFFSET
	struct FString                                     NowHelpText;                                              // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EMenuModelMotionType                               AppendMotionType;                                         // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    SelectCameraChangeDelegate;                               // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector                                     MoveBase;                                                 // 0x0480(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MoveEnd;                                                  // 0x048C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveTime;                                                 // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleBase;                                                // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleEnd;                                                 // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateBase;                                               // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateEnd;                                                // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OldFlameScale;                                            // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PrevMotionNo;                                             // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveFinishTime;                                           // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleBaseBack;                                            // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateBaseBack;                                           // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MoveBaseBack;                                             // 0x04C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              NextRotate;                                               // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextScale;                                                // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ResetWork;                                                // 0x04D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	int                                                GCCheckCount;                                             // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDragMoveStart;                                           // 0x04DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04DD(0x0003) MISSED OFFSET
	struct FVector                                     DragMovePos;                                              // 0x04E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DragRotateSpeed;                                          // 0x04EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsInvisiblePrevViewModel;                                 // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData09[0x28];                                      // 0x04F1(0x0028) UNKNOWN PROPERTY: SoftObjectProperty MenuModelWorkActor.MenuModelWorkActor_C.LastUpdateViewModel

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MenuModelWorkActor.MenuModelWorkActor_C");
		return ptr;
	}


	void ResetModelMotion();
	void PadWork_DragRotate(class AMenuPadProcess* PadProcess, bool* bDragRotate, float* RotateValue);
	void PadWork_DragMove(class AMenuPadProcess* PadProcess, bool* bDragMoving);
	void GCCheck(int AddCount);
	void SetFlameSwordVisiblity(bool Visible);
	void MotionBack();
	void MotionJump(int MotionNo);
	void ModelAutoMoveInit(int Type, bool Reverse);
	void ModelAutoMove(float Time);
	void GetCharaDefaultSingle(EArisePartyID Target, struct FVector* Position, float* Rotate);
	void ModelLoadRequest_Direct(int CharacterID, const struct FString& Costume, const struct FString& Weapon, EMenuModelMotionType MotionType);
	void GetMenuType(EMenuModelPositionSaveType* Type);
	void CheckPadGuide(const struct FVector4& State);
	void UpdatePadGuide();
	void SetShadowScaleParam(float Scale);
	void RevertEventCameraPostProcess();
	void ChangeEventCameraPostProcess();
	void ModelLoadRequest_DLC(int CharacterID, bool LoadVisible, int Costume, int Hair, int Attachment1, int Attachment2, int Weapon);
	void SetDLCModeFlag(bool Flag);
	void ChangeBodyModel(EArisePartyID PartyId, int ItemID);
	void ChangeHairModel(EArisePartyID PartyId, int ItemID);
	void ChangeAttachModel(EArisePartyID PartyId, int AttachSlotNo, int ItemID, int Variation);
	void SavePositionData(EArisePartyID TargetPartyID);
	void LoadPositionData();
	void WeaponVisibleCheck();
	void NoWeaponMode(bool Enable);
	void SetModelVisible(bool Visible);
	void Finish();
	void UpdateCharacterVisualItem(EArisePartyID PartyId, bool BlockLoad, TArray<int>* ItemIDList, TArray<int>* VariationList);
	void LoadPartyID(EArisePartyID PartyId, int WeaponID);
	void ChangeWeaponModel(EArisePartyID PartyId, int ItemID);
	void PadWork(class AMenuPadProcess* PadProcess, float Time, bool RotateOnly, bool PoseChange_LRButton);
	void ModelLoadCheck();
	void VisibleCheck(bool* NextBranch);
	void ModelLoadRequest(int CharacterID, bool LoadVisible, int WeaponID);
	void GetCharaDefault(TMap<EArisePartyID, struct FVector>* CharaDefault);
	void InitDefaultValue();
	void UpdateModelRS();
	void Initialize(const struct FString& MenuID);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_MenuModelWorkActor(int EntryPoint);
	void SelectCameraChangeDelegate__DelegateSignature(float Time);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
