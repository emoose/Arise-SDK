
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

// Function BP_EventManager_Interface.BP_EventManager_Interface_C.GetEventLevelSequencePlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULevelSequencePlayer*    Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EventManager_Interface_C::GetEventLevelSequencePlayer(class ULevelSequencePlayer** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager_Interface.BP_EventManager_Interface_C.GetEventLevelSequencePlayer");

	UBP_EventManager_Interface_C_GetEventLevelSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
}


// Function BP_EventManager_Interface.BP_EventManager_Interface_C.EventAtPFRuning
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EventManager_Interface_C::EventAtPFRuning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager_Interface.BP_EventManager_Interface_C.EventAtPFRuning");

	UBP_EventManager_Interface_C_EventAtPFRuning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager_Interface.BP_EventManager_Interface_C.IsPostEventNpcRespawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNpcRespawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EventManager_Interface_C::IsPostEventNpcRespawn(bool* bNpcRespawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager_Interface.BP_EventManager_Interface_C.IsPostEventNpcRespawn");

	UBP_EventManager_Interface_C_IsPostEventNpcRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNpcRespawn != nullptr)
		*bNpcRespawn = params.bNpcRespawn;
}


// Function BP_EventManager_Interface.BP_EventManager_Interface_C.DestroyObjects
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAccept                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EventManager_Interface_C::DestroyObjects(bool* bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager_Interface.BP_EventManager_Interface_C.DestroyObjects");

	UBP_EventManager_Interface_C_DestroyObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAccept != nullptr)
		*bAccept = params.bAccept;
}


// Function BP_EventManager_Interface.BP_EventManager_Interface_C.IsRunPostScript
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRun                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EventManager_Interface_C::IsRunPostScript(bool* bRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager_Interface.BP_EventManager_Interface_C.IsRunPostScript");

	UBP_EventManager_Interface_C_IsRunPostScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRun != nullptr)
		*bRun = params.bRun;
}


// Function BP_EventManager_Interface.BP_EventManager_Interface_C.RequestMapShowOutEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EventManager_Interface_C::RequestMapShowOutEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager_Interface.BP_EventManager_Interface_C.RequestMapShowOutEvent");

	UBP_EventManager_Interface_C_RequestMapShowOutEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager_Interface.BP_EventManager_Interface_C.GetCurrentFrameInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Info                           (Parm, OutParm, ZeroConstructor)

void UBP_EventManager_Interface_C::GetCurrentFrameInfo(struct FString* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager_Interface.BP_EventManager_Interface_C.GetCurrentFrameInfo");

	UBP_EventManager_Interface_C_GetCurrentFrameInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
}


// Function BP_EventManager_Interface.BP_EventManager_Interface_C.IsNeedDisplayFrameInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Need                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EventManager_Interface_C::IsNeedDisplayFrameInfo(bool* Need)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager_Interface.BP_EventManager_Interface_C.IsNeedDisplayFrameInfo");

	UBP_EventManager_Interface_C_IsNeedDisplayFrameInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Need != nullptr)
		*Need = params.Need;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
