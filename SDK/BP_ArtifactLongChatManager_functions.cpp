
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

// Function BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C.IsLongChatPlayed
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 InLongChatName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           OutPlayed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ArtifactLongChatManager_C::IsLongChatPlayed(const struct FString& InLongChatName, bool* OutPlayed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C.IsLongChatPlayed");

	ABP_ArtifactLongChatManager_C_IsLongChatPlayed_Params params;
	params.InLongChatName = InLongChatName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlayed != nullptr)
		*OutPlayed = params.OutPlayed;
}


// Function BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ArtifactLongChatManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C.UserConstructionScript");

	ABP_ArtifactLongChatManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C.ExecutePlayLongChat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFDelegateArgs_EnableControl* InArgs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ArtifactLongChatManager_C::ExecutePlayLongChat(class UPFDelegateArgs_EnableControl* InArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C.ExecutePlayLongChat");

	ABP_ArtifactLongChatManager_C_ExecutePlayLongChat_Params params;
	params.InArgs = InArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C.AddDelegateTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFDelegateManager*      InDelegateManager              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InPriority                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ArtifactLongChatManager_C::AddDelegateTo(class APFDelegateManager* InDelegateManager, int InPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C.AddDelegateTo");

	ABP_ArtifactLongChatManager_C_AddDelegateTo_Params params;
	params.InDelegateManager = InDelegateManager;
	params.InPriority = InPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C.ExecuteUbergraph_BP_ArtifactLongChatManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ArtifactLongChatManager_C::ExecuteUbergraph_BP_ArtifactLongChatManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C.ExecuteUbergraph_BP_ArtifactLongChatManager");

	ABP_ArtifactLongChatManager_C_ExecuteUbergraph_BP_ArtifactLongChatManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
