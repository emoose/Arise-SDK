#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function MenuModelWorkActor.MenuModelWorkActor_C.ResetModelMotion
struct AMenuModelWorkActor_C_ResetModelMotion_Params
{
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.PadWork_DragRotate
struct AMenuModelWorkActor_C_PadWork_DragRotate_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDragRotate;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RotateValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.PadWork_DragMove
struct AMenuModelWorkActor_C_PadWork_DragMove_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDragMoving;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.GCCheck
struct AMenuModelWorkActor_C_GCCheck_Params
{
	int                                                AddCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.SetFlameSwordVisiblity
struct AMenuModelWorkActor_C_SetFlameSwordVisiblity_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.MotionBack
struct AMenuModelWorkActor_C_MotionBack_Params
{
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.MotionJump
struct AMenuModelWorkActor_C_MotionJump_Params
{
	int                                                MotionNo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.ModelAutoMoveInit
struct AMenuModelWorkActor_C_ModelAutoMoveInit_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.ModelAutoMove
struct AMenuModelWorkActor_C_ModelAutoMove_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.GetCharaDefaultSingle
struct AMenuModelWorkActor_C_GetCharaDefaultSingle_Params
{
	EArisePartyID                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, IsPlainOldData)
	float                                              Rotate;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.ModelLoadRequest_Direct
struct AMenuModelWorkActor_C_ModelLoadRequest_Direct_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Costume;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EMenuModelMotionType                               MotionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.GetMenuType
struct AMenuModelWorkActor_C_GetMenuType_Params
{
	EMenuModelPositionSaveType                         Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.CheckPadGuide
struct AMenuModelWorkActor_C_CheckPadGuide_Params
{
	struct FVector4                                    State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.UpdatePadGuide
struct AMenuModelWorkActor_C_UpdatePadGuide_Params
{
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.SetShadowScaleParam
struct AMenuModelWorkActor_C_SetShadowScaleParam_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.RevertEventCameraPostProcess
struct AMenuModelWorkActor_C_RevertEventCameraPostProcess_Params
{
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.ChangeEventCameraPostProcess
struct AMenuModelWorkActor_C_ChangeEventCameraPostProcess_Params
{
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.ModelLoadRequest_DLC
struct AMenuModelWorkActor_C_ModelLoadRequest_DLC_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LoadVisible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Costume;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Hair;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Attachment1;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Attachment2;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.SetDLCModeFlag
struct AMenuModelWorkActor_C_SetDLCModeFlag_Params
{
	bool                                               Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.ChangeBodyModel
struct AMenuModelWorkActor_C_ChangeBodyModel_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.ChangeHairModel
struct AMenuModelWorkActor_C_ChangeHairModel_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.ChangeAttachModel
struct AMenuModelWorkActor_C_ChangeAttachModel_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AttachSlotNo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Variation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.SavePositionData
struct AMenuModelWorkActor_C_SavePositionData_Params
{
	EArisePartyID                                      TargetPartyID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.LoadPositionData
struct AMenuModelWorkActor_C_LoadPositionData_Params
{
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.WeaponVisibleCheck
struct AMenuModelWorkActor_C_WeaponVisibleCheck_Params
{
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.NoWeaponMode
struct AMenuModelWorkActor_C_NoWeaponMode_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.SetModelVisible
struct AMenuModelWorkActor_C_SetModelVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.Finish
struct AMenuModelWorkActor_C_Finish_Params
{
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.UpdateCharacterVisualItem
struct AMenuModelWorkActor_C_UpdateCharacterVisualItem_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ItemIDList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        VariationList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               BlockLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.LoadPartyID
struct AMenuModelWorkActor_C_LoadPartyID_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.ChangeWeaponModel
struct AMenuModelWorkActor_C_ChangeWeaponModel_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.PadWork
struct AMenuModelWorkActor_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RotateOnly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PoseChange_LRButton;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.ModelLoadCheck
struct AMenuModelWorkActor_C_ModelLoadCheck_Params
{
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.VisibleCheck
struct AMenuModelWorkActor_C_VisibleCheck_Params
{
	bool                                               NextBranch;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.ModelLoadRequest
struct AMenuModelWorkActor_C_ModelLoadRequest_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LoadVisible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.GetCharaDefault
struct AMenuModelWorkActor_C_GetCharaDefault_Params
{
	TMap<EArisePartyID, struct FVector>                CharaDefault;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.InitDefaultValue
struct AMenuModelWorkActor_C_InitDefaultValue_Params
{
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.UpdateModelRS
struct AMenuModelWorkActor_C_UpdateModelRS_Params
{
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.Initialize
struct AMenuModelWorkActor_C_Initialize_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.UserConstructionScript
struct AMenuModelWorkActor_C_UserConstructionScript_Params
{
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.ReceiveTick
struct AMenuModelWorkActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.ReceiveEndPlay
struct AMenuModelWorkActor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.ExecuteUbergraph_MenuModelWorkActor
struct AMenuModelWorkActor_C_ExecuteUbergraph_MenuModelWorkActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuModelWorkActor.MenuModelWorkActor_C.SelectCameraChangeDelegate__DelegateSignature
struct AMenuModelWorkActor_C_SelectCameraChangeDelegate__DelegateSignature_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
