
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

// Function BP_LChatCharacter.BP_LChatCharacter_C.DestroyAniminstance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LChatCharacter_C::DestroyAniminstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.DestroyAniminstance");

	ABP_LChatCharacter_C_DestroyAniminstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.SetPhysicsRestTime
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LChatCharacter_C::SetPhysicsRestTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.SetPhysicsRestTime");

	ABP_LChatCharacter_C_SetPhysicsRestTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.GetPhysicsRestTime
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Times                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatCharacter_C::GetPhysicsRestTime(int* Times)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.GetPhysicsRestTime");

	ABP_LChatCharacter_C_GetPhysicsRestTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Times != nullptr)
		*Times = params.Times;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.SetCharacterTickableWhenPaused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TickableWhenPaused             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LChatCharacter_C::SetCharacterTickableWhenPaused(bool TickableWhenPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.SetCharacterTickableWhenPaused");

	ABP_LChatCharacter_C_SetCharacterTickableWhenPaused_Params params;
	params.TickableWhenPaused = TickableWhenPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.ResetFacial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LChatCharacter_C::ResetFacial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.ResetFacial");

	ABP_LChatCharacter_C_ResetFacial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.RefreshCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LChatCharacter_C::RefreshCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.RefreshCharacter");

	ABP_LChatCharacter_C_RefreshCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.StopEyeBlink
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LChatCharacter_C::StopEyeBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.StopEyeBlink");

	ABP_LChatCharacter_C_StopEyeBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.RequestOpenEye
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LChatCharacter_C::RequestOpenEye()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.RequestOpenEye");

	ABP_LChatCharacter_C_RequestOpenEye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.SetEyeHighlight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PoseName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          PoseRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LChatCharacter_C::SetEyeHighlight(const struct FString& PoseName, float PoseRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.SetEyeHighlight");

	ABP_LChatCharacter_C_SetEyeHighlight_Params params;
	params.PoseName = PoseName;
	params.PoseRate = PoseRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.GetFacialComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseCharacterFacialComponent* FacialComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_LChatCharacter_C::GetFacialComponent(class UAriseCharacterFacialComponent** FacialComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.GetFacialComponent");

	ABP_LChatCharacter_C_GetFacialComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FacialComponent != nullptr)
		*FacialComponent = params.FacialComponent;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.SetFaicalPose
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EyePose                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 MouthPose                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 EyelidPose                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LChatCharacter_C::SetFaicalPose(const struct FString& EyePose, const struct FString& MouthPose, const struct FString& EyelidPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.SetFaicalPose");

	ABP_LChatCharacter_C_SetFaicalPose_Params params;
	params.EyePose = EyePose;
	params.MouthPose = MouthPose;
	params.EyelidPose = EyelidPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.SetFaicalByDatabase
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 charId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 FacialName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 EyePoseName                    (Parm, OutParm, ZeroConstructor)
// struct FString                 MouthPoseName                  (Parm, OutParm, ZeroConstructor)
// struct FAchCharacterFacialPresetData FacialDatabaseItem             (Parm, OutParm)

void ABP_LChatCharacter_C::SetFaicalByDatabase(const struct FString& charId, const struct FString& FacialName, struct FString* EyePoseName, struct FString* MouthPoseName, struct FAchCharacterFacialPresetData* FacialDatabaseItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.SetFaicalByDatabase");

	ABP_LChatCharacter_C_SetFaicalByDatabase_Params params;
	params.charId = charId;
	params.FacialName = FacialName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EyePoseName != nullptr)
		*EyePoseName = params.EyePoseName;
	if (MouthPoseName != nullptr)
		*MouthPoseName = params.MouthPoseName;
	if (FacialDatabaseItem != nullptr)
		*FacialDatabaseItem = params.FacialDatabaseItem;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.UpdateTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              NewTransform                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LChatCharacter_C::UpdateTransform(const struct FTransform& NewTransform, const struct FVector& Location, float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.UpdateTransform");

	ABP_LChatCharacter_C_UpdateTransform_Params params;
	params.NewTransform = NewTransform;
	params.Location = Location;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.AttachToCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_LChatCharacter_C*    ParentChara                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LChatCharacter_C::AttachToCharacter(class ABP_LChatCharacter_C* ParentChara, const struct FString& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.AttachToCharacter");

	ABP_LChatCharacter_C_AttachToCharacter_Params params;
	params.ParentChara = ParentChara;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.SetEyeBlinkMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BlinkMode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LChatCharacter_C::SetEyeBlinkMode(const struct FString& BlinkMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.SetEyeBlinkMode");

	ABP_LChatCharacter_C_SetEyeBlinkMode_Params params;
	params.BlinkMode = BlinkMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LChatCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.UserConstructionScript");

	ABP_LChatCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.OnForceTeleport_
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LChatCharacter_C::OnForceTeleport_(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.OnForceTeleport_");

	ABP_LChatCharacter_C_OnForceTeleport__Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LChatCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.ReceiveTick");

	ABP_LChatCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LChatCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.ReceiveBeginPlay");

	ABP_LChatCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatCharacter.BP_LChatCharacter_C.ExecuteUbergraph_BP_LChatCharacter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LChatCharacter_C::ExecuteUbergraph_BP_LChatCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatCharacter.BP_LChatCharacter_C.ExecuteUbergraph_BP_LChatCharacter");

	ABP_LChatCharacter_C_ExecuteUbergraph_BP_LChatCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
