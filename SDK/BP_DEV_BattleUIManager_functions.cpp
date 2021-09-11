
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

// Function BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C.DevHudClosePlayableHelp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DEV_BattleUIManager_C::DevHudClosePlayableHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C.DevHudClosePlayableHelp");

	ABP_DEV_BattleUIManager_C_DevHudClosePlayableHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C.DevHUDShowPlayAbleHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Explanation                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DEV_BattleUIManager_C::DevHUDShowPlayAbleHelp(const struct FModifiedText& Title, const struct FModifiedText& Explanation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C.DevHUDShowPlayAbleHelp");

	ABP_DEV_BattleUIManager_C_DevHUDShowPlayAbleHelp_Params params;
	params.Title = Title;
	params.Explanation = Explanation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DEV_BattleUIManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C.UserConstructionScript");

	ABP_DEV_BattleUIManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C.DevOnClosePlayableHelp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_DEV_BattleUIManager_C::DevOnClosePlayableHelp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C.DevOnClosePlayableHelp__DelegateSignature");

	ABP_DEV_BattleUIManager_C_DevOnClosePlayableHelp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C.DevOnOpenPlayableHelp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Explanation                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DEV_BattleUIManager_C::DevOnOpenPlayableHelp__DelegateSignature(const struct FModifiedText& Title, const struct FModifiedText& Explanation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C.DevOnOpenPlayableHelp__DelegateSignature");

	ABP_DEV_BattleUIManager_C_DevOnOpenPlayableHelp__DelegateSignature_Params params;
	params.Title = Title;
	params.Explanation = Explanation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
