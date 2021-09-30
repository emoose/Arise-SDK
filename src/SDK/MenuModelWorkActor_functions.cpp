
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function MenuModelWorkActor.MenuModelWorkActor_C.ResetModelMotion
// (Public, BlueprintCallable, BlueprintEvent)

void AMenuModelWorkActor_C::ResetModelMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.ResetModelMotion");

	AMenuModelWorkActor_C_ResetModelMotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.PadWork_DragRotate
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDragRotate                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RotateValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::PadWork_DragRotate(class AMenuPadProcess* PadProcess, bool* bDragRotate, float* RotateValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.PadWork_DragRotate");

	AMenuModelWorkActor_C_PadWork_DragRotate_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDragRotate != nullptr)
		*bDragRotate = params.bDragRotate;
	if (RotateValue != nullptr)
		*RotateValue = params.RotateValue;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.PadWork_DragMove
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDragMoving                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::PadWork_DragMove(class AMenuPadProcess* PadProcess, bool* bDragMoving)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.PadWork_DragMove");

	AMenuModelWorkActor_C_PadWork_DragMove_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDragMoving != nullptr)
		*bDragMoving = params.bDragMoving;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.GCCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::GCCheck(int AddCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.GCCheck");

	AMenuModelWorkActor_C_GCCheck_Params params;
	params.AddCount = AddCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.SetFlameSwordVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::SetFlameSwordVisiblity(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.SetFlameSwordVisiblity");

	AMenuModelWorkActor_C_SetFlameSwordVisiblity_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.MotionBack
// (Public, BlueprintCallable, BlueprintEvent)

void AMenuModelWorkActor_C::MotionBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.MotionBack");

	AMenuModelWorkActor_C_MotionBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.MotionJump
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MotionNo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::MotionJump(int MotionNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.MotionJump");

	AMenuModelWorkActor_C_MotionJump_Params params;
	params.MotionNo = MotionNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.ModelAutoMoveInit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::ModelAutoMoveInit(int Type, bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.ModelAutoMoveInit");

	AMenuModelWorkActor_C_ModelAutoMoveInit_Params params;
	params.Type = Type;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.ModelAutoMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::ModelAutoMove(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.ModelAutoMove");

	AMenuModelWorkActor_C_ModelAutoMove_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.GetCharaDefaultSingle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, OutParm, IsPlainOldData)
// float                          Rotate                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::GetCharaDefaultSingle(EArisePartyID Target, struct FVector* Position, float* Rotate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.GetCharaDefaultSingle");

	AMenuModelWorkActor_C_GetCharaDefaultSingle_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Rotate != nullptr)
		*Rotate = params.Rotate;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.ModelLoadRequest_Direct
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Costume                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EMenuModelMotionType           MotionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::ModelLoadRequest_Direct(int CharacterID, const struct FString& Costume, const struct FString& Weapon, EMenuModelMotionType MotionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.ModelLoadRequest_Direct");

	AMenuModelWorkActor_C_ModelLoadRequest_Direct_Params params;
	params.CharacterID = CharacterID;
	params.Costume = Costume;
	params.Weapon = Weapon;
	params.MotionType = MotionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.GetMenuType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EMenuModelPositionSaveType     Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::GetMenuType(EMenuModelPositionSaveType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.GetMenuType");

	AMenuModelWorkActor_C_GetMenuType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.CheckPadGuide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector4                State                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AMenuModelWorkActor_C::CheckPadGuide(const struct FVector4& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.CheckPadGuide");

	AMenuModelWorkActor_C_CheckPadGuide_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.UpdatePadGuide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMenuModelWorkActor_C::UpdatePadGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.UpdatePadGuide");

	AMenuModelWorkActor_C_UpdatePadGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.SetShadowScaleParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::SetShadowScaleParam(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.SetShadowScaleParam");

	AMenuModelWorkActor_C_SetShadowScaleParam_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.RevertEventCameraPostProcess
// (Public, BlueprintCallable, BlueprintEvent)

void AMenuModelWorkActor_C::RevertEventCameraPostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.RevertEventCameraPostProcess");

	AMenuModelWorkActor_C_RevertEventCameraPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.ChangeEventCameraPostProcess
// (Public, BlueprintCallable, BlueprintEvent)

void AMenuModelWorkActor_C::ChangeEventCameraPostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.ChangeEventCameraPostProcess");

	AMenuModelWorkActor_C_ChangeEventCameraPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.ModelLoadRequest_DLC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LoadVisible                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Costume                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Hair                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Attachment1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Attachment2                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::ModelLoadRequest_DLC(int CharacterID, bool LoadVisible, int Costume, int Hair, int Attachment1, int Attachment2, int Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.ModelLoadRequest_DLC");

	AMenuModelWorkActor_C_ModelLoadRequest_DLC_Params params;
	params.CharacterID = CharacterID;
	params.LoadVisible = LoadVisible;
	params.Costume = Costume;
	params.Hair = Hair;
	params.Attachment1 = Attachment1;
	params.Attachment2 = Attachment2;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.SetDLCModeFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::SetDLCModeFlag(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.SetDLCModeFlag");

	AMenuModelWorkActor_C_SetDLCModeFlag_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.ChangeBodyModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::ChangeBodyModel(EArisePartyID PartyId, int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.ChangeBodyModel");

	AMenuModelWorkActor_C_ChangeBodyModel_Params params;
	params.PartyId = PartyId;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.ChangeHairModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::ChangeHairModel(EArisePartyID PartyId, int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.ChangeHairModel");

	AMenuModelWorkActor_C_ChangeHairModel_Params params;
	params.PartyId = PartyId;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.ChangeAttachModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AttachSlotNo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Variation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::ChangeAttachModel(EArisePartyID PartyId, int AttachSlotNo, int ItemID, int Variation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.ChangeAttachModel");

	AMenuModelWorkActor_C_ChangeAttachModel_Params params;
	params.PartyId = PartyId;
	params.AttachSlotNo = AttachSlotNo;
	params.ItemID = ItemID;
	params.Variation = Variation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.SavePositionData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  TargetPartyID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::SavePositionData(EArisePartyID TargetPartyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.SavePositionData");

	AMenuModelWorkActor_C_SavePositionData_Params params;
	params.TargetPartyID = TargetPartyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.LoadPositionData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMenuModelWorkActor_C::LoadPositionData()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.LoadPositionData");

	AMenuModelWorkActor_C_LoadPositionData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.WeaponVisibleCheck
// (Public, BlueprintCallable, BlueprintEvent)

void AMenuModelWorkActor_C::WeaponVisibleCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.WeaponVisibleCheck");

	AMenuModelWorkActor_C_WeaponVisibleCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.NoWeaponMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::NoWeaponMode(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.NoWeaponMode");

	AMenuModelWorkActor_C_NoWeaponMode_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.SetModelVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::SetModelVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.SetModelVisible");

	AMenuModelWorkActor_C_SetModelVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.Finish
// (Public, BlueprintCallable, BlueprintEvent)

void AMenuModelWorkActor_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.Finish");

	AMenuModelWorkActor_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.UpdateCharacterVisualItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ItemIDList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    VariationList                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           BlockLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::UpdateCharacterVisualItem(EArisePartyID PartyId, bool BlockLoad, TArray<int>* ItemIDList, TArray<int>* VariationList)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.UpdateCharacterVisualItem");

	AMenuModelWorkActor_C_UpdateCharacterVisualItem_Params params;
	params.PartyId = PartyId;
	params.BlockLoad = BlockLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIDList != nullptr)
		*ItemIDList = params.ItemIDList;
	if (VariationList != nullptr)
		*VariationList = params.VariationList;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.LoadPartyID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::LoadPartyID(EArisePartyID PartyId, int WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.LoadPartyID");

	AMenuModelWorkActor_C_LoadPartyID_Params params;
	params.PartyId = PartyId;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.ChangeWeaponModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::ChangeWeaponModel(EArisePartyID PartyId, int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.ChangeWeaponModel");

	AMenuModelWorkActor_C_ChangeWeaponModel_Params params;
	params.PartyId = PartyId;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.PadWork
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RotateOnly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PoseChange_LRButton            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::PadWork(class AMenuPadProcess* PadProcess, float Time, bool RotateOnly, bool PoseChange_LRButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.PadWork");

	AMenuModelWorkActor_C_PadWork_Params params;
	params.PadProcess = PadProcess;
	params.Time = Time;
	params.RotateOnly = RotateOnly;
	params.PoseChange_LRButton = PoseChange_LRButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.ModelLoadCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMenuModelWorkActor_C::ModelLoadCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.ModelLoadCheck");

	AMenuModelWorkActor_C_ModelLoadCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.VisibleCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NextBranch                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::VisibleCheck(bool* NextBranch)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.VisibleCheck");

	AMenuModelWorkActor_C_VisibleCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextBranch != nullptr)
		*NextBranch = params.NextBranch;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.ModelLoadRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LoadVisible                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::ModelLoadRequest(int CharacterID, bool LoadVisible, int WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.ModelLoadRequest");

	AMenuModelWorkActor_C_ModelLoadRequest_Params params;
	params.CharacterID = CharacterID;
	params.LoadVisible = LoadVisible;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.GetCharaDefault
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EArisePartyID, struct FVector> CharaDefault                   (Parm, OutParm, ZeroConstructor)

void AMenuModelWorkActor_C::GetCharaDefault(TMap<EArisePartyID, struct FVector>* CharaDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.GetCharaDefault");

	AMenuModelWorkActor_C_GetCharaDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharaDefault != nullptr)
		*CharaDefault = params.CharaDefault;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.InitDefaultValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMenuModelWorkActor_C::InitDefaultValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.InitDefaultValue");

	AMenuModelWorkActor_C_InitDefaultValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.UpdateModelRS
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMenuModelWorkActor_C::UpdateModelRS()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.UpdateModelRS");

	AMenuModelWorkActor_C_UpdateModelRS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AMenuModelWorkActor_C::Initialize(const struct FString& MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.Initialize");

	AMenuModelWorkActor_C_Initialize_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMenuModelWorkActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.UserConstructionScript");

	AMenuModelWorkActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.ReceiveTick");

	AMenuModelWorkActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.ReceiveEndPlay");

	AMenuModelWorkActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.ExecuteUbergraph_MenuModelWorkActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::ExecuteUbergraph_MenuModelWorkActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.ExecuteUbergraph_MenuModelWorkActor");

	AMenuModelWorkActor_C_ExecuteUbergraph_MenuModelWorkActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuModelWorkActor.MenuModelWorkActor_C.SelectCameraChangeDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuModelWorkActor_C::SelectCameraChangeDelegate__DelegateSignature(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuModelWorkActor.MenuModelWorkActor_C.SelectCameraChangeDelegate__DelegateSignature");

	AMenuModelWorkActor_C_SelectCameraChangeDelegate__DelegateSignature_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
