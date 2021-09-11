
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

// Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampTalkGroupActor_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.Refresh");

	ABP_PF_CampTalkGroupActor_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.UpdateSpeakerLookAt
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampTalkGroupActor_C::UpdateSpeakerLookAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.UpdateSpeakerLookAt");

	ABP_PF_CampTalkGroupActor_C_UpdateSpeakerLookAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.UpdateTalk
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampTalkGroupActor_C::UpdateTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.UpdateTalk");

	ABP_PF_CampTalkGroupActor_C_UpdateTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.AddCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFNpcCharacterBase*     NewChracter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampTalkGroupActor_C::AddCharacter(class APFNpcCharacterBase* NewChracter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.AddCharacter");

	ABP_PF_CampTalkGroupActor_C_AddCharacter_Params params;
	params.NewChracter = NewChracter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampTalkGroupActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.UserConstructionScript");

	ABP_PF_CampTalkGroupActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampTalkGroupActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.ReceiveTick");

	ABP_PF_CampTalkGroupActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.ExecuteUbergraph_BP_PF_CampTalkGroupActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampTalkGroupActor_C::ExecuteUbergraph_BP_PF_CampTalkGroupActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.ExecuteUbergraph_BP_PF_CampTalkGroupActor");

	ABP_PF_CampTalkGroupActor_C_ExecuteUbergraph_BP_PF_CampTalkGroupActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
