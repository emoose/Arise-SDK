
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

// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.GetLocationName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 OutLocationName                (Parm, OutParm, ZeroConstructor)

void ABP_PF_SearchOwl_C::GetLocationName(struct FString* OutLocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.GetLocationName");

	ABP_PF_SearchOwl_C_GetLocationName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocationName != nullptr)
		*OutLocationName = params.OutLocationName;
}


// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.GetVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           OutVisibility                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_SearchOwl_C::GetVisibility(bool* OutVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.GetVisibility");

	ABP_PF_SearchOwl_C_GetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVisibility != nullptr)
		*OutVisibility = params.OutVisibility;
}


// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.ResetIdleVoiceTimer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_SearchOwl_C::ResetIdleVoiceTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.ResetIdleVoiceTimer");

	ABP_PF_SearchOwl_C_ResetIdleVoiceTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.SetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InNewVisibility                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_SearchOwl_C::SetVisibility(bool InNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.SetVisibility");

	ABP_PF_SearchOwl_C_SetVisibility_Params params;
	params.InNewVisibility = InNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.BuildCharacter2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InDatabaseID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_SearchOwl_C::BuildCharacter2(const struct FString& InDatabaseID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.BuildCharacter2");

	ABP_PF_SearchOwl_C_BuildCharacter2_Params params;
	params.InDatabaseID = InDatabaseID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.BuildCharacterInternal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESearchOwlType                 InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InModelID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 InAttachmentID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          InScale                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InCollisionSize                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_SearchOwl_C::BuildCharacterInternal(ESearchOwlType InType, const struct FString& InModelID, const struct FString& InAttachmentID, float InScale, float InCollisionSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.BuildCharacterInternal");

	ABP_PF_SearchOwl_C_BuildCharacterInternal_Params params;
	params.InType = InType;
	params.InModelID = InModelID;
	params.InAttachmentID = InAttachmentID;
	params.InScale = InScale;
	params.InCollisionSize = InCollisionSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_SearchOwl_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.UserConstructionScript");

	ABP_PF_SearchOwl_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.OnBuildCharacter
// (Event, Protected, BlueprintEvent)

void ABP_PF_SearchOwl_C::OnBuildCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.OnBuildCharacter");

	ABP_PF_SearchOwl_C_OnBuildCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.FadeIn
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_SearchOwl_C::FadeIn(float InTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.FadeIn");

	ABP_PF_SearchOwl_C_FadeIn_Params params;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.FadeOut
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_SearchOwl_C::FadeOut(float InTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.FadeOut");

	ABP_PF_SearchOwl_C_FadeOut_Params params;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_SearchOwl_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.ReceiveBeginPlay");

	ABP_PF_SearchOwl_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_SearchOwl_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.ReceiveTick");

	ABP_PF_SearchOwl_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.ExecuteUbergraph_BP_PF_SearchOwl
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_SearchOwl_C::ExecuteUbergraph_BP_PF_SearchOwl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.ExecuteUbergraph_BP_PF_SearchOwl");

	ABP_PF_SearchOwl_C_ExecuteUbergraph_BP_PF_SearchOwl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
