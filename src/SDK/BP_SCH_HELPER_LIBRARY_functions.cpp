
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

// Function BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C.PFSC_InteractReleaseLock
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCH_HELPER_LIBRARY_C::STATIC_PFSC_InteractReleaseLock(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C.PFSC_InteractReleaseLock");

	UBP_SCH_HELPER_LIBRARY_C_PFSC_InteractReleaseLock_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C.PFSC_NPCTalkLockPause
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCH_HELPER_LIBRARY_C::STATIC_PFSC_NPCTalkLockPause(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C.PFSC_NPCTalkLockPause");

	UBP_SCH_HELPER_LIBRARY_C_PFSC_NPCTalkLockPause_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C.PFSC_TreasureLockPause
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCH_HELPER_LIBRARY_C::STATIC_PFSC_TreasureLockPause(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C.PFSC_TreasureLockPause");

	UBP_SCH_HELPER_LIBRARY_C_PFSC_TreasureLockPause_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C.PFSC_DisableWaitOwl
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCH_HELPER_LIBRARY_C::STATIC_PFSC_DisableWaitOwl(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C.PFSC_DisableWaitOwl");

	UBP_SCH_HELPER_LIBRARY_C_PFSC_DisableWaitOwl_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C.ConvertPartyID2CharaIconID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAriseCharaIconID              IconId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SCH_HELPER_LIBRARY_C::STATIC_ConvertPartyID2CharaIconID(EArisePartyID PartyId, class UObject* __WorldContext, EAriseCharaIconID* IconId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C.ConvertPartyID2CharaIconID");

	UBP_SCH_HELPER_LIBRARY_C_ConvertPartyID2CharaIconID_Params params;
	params.PartyId = PartyId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconId != nullptr)
		*IconId = params.IconId;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
