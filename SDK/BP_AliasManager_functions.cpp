
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

// Function BP_AliasManager.BP_AliasManager_C.GetLearnAlias
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    OutIDs                         (Parm, OutParm, ZeroConstructor)

void ABP_AliasManager_C::GetLearnAlias(TArray<int>* OutIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AliasManager.BP_AliasManager_C.GetLearnAlias");

	ABP_AliasManager_C_GetLearnAlias_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIDs != nullptr)
		*OutIDs = params.OutIDs;
}


// Function BP_AliasManager.BP_AliasManager_C.GetPlayableShortChatName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InLabel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OutShortChatName               (Parm, OutParm, ZeroConstructor)
// bool                           OutFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AliasManager_C::GetPlayableShortChatName(const struct FString& InLabel, struct FString* OutShortChatName, bool* OutFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AliasManager.BP_AliasManager_C.GetPlayableShortChatName");

	ABP_AliasManager_C_GetPlayableShortChatName_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutShortChatName != nullptr)
		*OutShortChatName = params.OutShortChatName;
	if (OutFound != nullptr)
		*OutFound = params.OutFound;
}


// Function BP_AliasManager.BP_AliasManager_C.IsCheckAlias
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EAriseGameState                InGameState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInNewState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AliasManager_C::IsCheckAlias(EAriseGameState InGameState, bool bInNewState, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AliasManager.BP_AliasManager_C.IsCheckAlias");

	ABP_AliasManager_C_IsCheckAlias_Params params;
	params.InGameState = InGameState;
	params.bInNewState = bInNewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_AliasManager.BP_AliasManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AliasManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AliasManager.BP_AliasManager_C.UserConstructionScript");

	ABP_AliasManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AliasManager.BP_AliasManager_C.ExecuteGetAlias
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFDelegateArgs_EnableControl* InArgs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AliasManager_C::ExecuteGetAlias(class UPFDelegateArgs_EnableControl* InArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AliasManager.BP_AliasManager_C.ExecuteGetAlias");

	ABP_AliasManager_C_ExecuteGetAlias_Params params;
	params.InArgs = InArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AliasManager.BP_AliasManager_C.AddDelegateTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFDelegateManager*      InDelegateManager              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InPriority                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AliasManager_C::AddDelegateTo(class APFDelegateManager* InDelegateManager, int InPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AliasManager.BP_AliasManager_C.AddDelegateTo");

	ABP_AliasManager_C_AddDelegateTo_Params params;
	params.InDelegateManager = InDelegateManager;
	params.InPriority = InPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AliasManager.BP_AliasManager_C.ExecuteUbergraph_BP_AliasManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AliasManager_C::ExecuteUbergraph_BP_AliasManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AliasManager.BP_AliasManager_C.ExecuteUbergraph_BP_AliasManager");

	ABP_AliasManager_C_ExecuteUbergraph_BP_AliasManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AliasManager.BP_AliasManager_C.OnCloseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AliasManager_C::OnCloseEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AliasManager.BP_AliasManager_C.OnCloseEvent__DelegateSignature");

	ABP_AliasManager_C_OnCloseEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AliasManager.BP_AliasManager_C.OnOpenEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AliasManager_C::OnOpenEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AliasManager.BP_AliasManager_C.OnOpenEvent__DelegateSignature");

	ABP_AliasManager_C_OnOpenEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
