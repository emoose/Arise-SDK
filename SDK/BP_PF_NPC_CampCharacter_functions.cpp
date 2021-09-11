
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

// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.SetInitPlayAction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_CampCharacter_C::SetInitPlayAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.SetInitPlayAction");

	ABP_PF_NPC_CampCharacter_C_SetInitPlayAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.SetFacialAutoPreset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_CampCharacter_C::SetFacialAutoPreset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.SetFacialAutoPreset");

	ABP_PF_NPC_CampCharacter_C_SetFacialAutoPreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.OnGetUserLoadAsset
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSoftObjectPath> OutAssetReference              (Parm, OutParm, ZeroConstructor)

void ABP_PF_NPC_CampCharacter_C::OnGetUserLoadAsset(TArray<struct FSoftObjectPath>* OutAssetReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.OnGetUserLoadAsset");

	ABP_PF_NPC_CampCharacter_C_OnGetUserLoadAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssetReference != nullptr)
		*OutAssetReference = params.OutAssetReference;
}


// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_CampCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.UserConstructionScript");

	ABP_PF_NPC_CampCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.SetFacialPresetNo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FacialPresetNo                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_CampCharacter_C::SetFacialPresetNo(int FacialPresetNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.SetFacialPresetNo");

	ABP_PF_NPC_CampCharacter_C_SetFacialPresetNo_Params params;
	params.FacialPresetNo = FacialPresetNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.ReceiveBuildCharacterInitAnim
// (Event, Public, BlueprintEvent)

void ABP_PF_NPC_CampCharacter_C::ReceiveBuildCharacterInitAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.ReceiveBuildCharacterInitAnim");

	ABP_PF_NPC_CampCharacter_C_ReceiveBuildCharacterInitAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_CampCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.ReceiveTick");

	ABP_PF_NPC_CampCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.OnBuildCharacter
// (Event, Protected, BlueprintEvent)

void ABP_PF_NPC_CampCharacter_C::OnBuildCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.OnBuildCharacter");

	ABP_PF_NPC_CampCharacter_C_OnBuildCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.SetFacialEye_LookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_CampCharacter_C::SetFacialEye_LookAt(float Angle, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.SetFacialEye_LookAt");

	ABP_PF_NPC_CampCharacter_C_SetFacialEye_LookAt_Params params;
	params.Angle = Angle;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.ExecuteUbergraph_BP_PF_NPC_CampCharacter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_CampCharacter_C::ExecuteUbergraph_BP_PF_NPC_CampCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.ExecuteUbergraph_BP_PF_NPC_CampCharacter");

	ABP_PF_NPC_CampCharacter_C_ExecuteUbergraph_BP_PF_NPC_CampCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
