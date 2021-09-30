
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

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.IsHide
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ActrorID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bUnlocked                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapGimmickSaveData_C::IsHide(const struct FString& ActrorID, bool* bUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.IsHide");

	UBP_MapGimmickSaveData_C_IsHide_Params params;
	params.ActrorID = ActrorID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnlocked != nullptr)
		*bUnlocked = params.bUnlocked;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapGimmickSaveData_C::Hide(const struct FString& actorId, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.Hide");

	UBP_MapGimmickSaveData_C_Hide_Params params;
	params.actorId = actorId;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.IsValidMapGimmick
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapGimmickSaveData_C::IsValidMapGimmick(const struct FString& actorId, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.IsValidMapGimmick");

	UBP_MapGimmickSaveData_C_IsValidMapGimmick_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.Register
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapGimmickSaveData_C::Register(const struct FString& LevelName, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.Register");

	UBP_MapGimmickSaveData_C_Register_Params params;
	params.LevelName = LevelName;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.DebugRegisterInfo
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_MapGimmickSaveData_C::DebugRegisterInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.DebugRegisterInfo");

	UBP_MapGimmickSaveData_C_DebugRegisterInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.BindOnUnlockStateChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         ¤0Ù0ó0È0                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MapGimmickSaveData_C::BindOnUnlockStateChanged(struct FScriptDelegate* ¤0Ù0ó0È0)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.BindOnUnlockStateChanged");

	UBP_MapGimmickSaveData_C_BindOnUnlockStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (¤0Ù0ó0È0 != nullptr)
		*¤0Ù0ó0È0 = params.¤0Ù0ó0È0;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.SetChunkEnable
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChangeState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapGimmickSaveData_C::SetChunkEnable(const struct FString& actorId, const struct FString& ChunkName, bool Enable, bool* IsChangeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.SetChunkEnable");

	UBP_MapGimmickSaveData_C_SetChunkEnable_Params params;
	params.actorId = actorId;
	params.ChunkName = ChunkName;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsChangeState != nullptr)
		*IsChangeState = params.IsChangeState;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.BindOnDiscoverStateChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         ¤0Ù0ó0È0                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MapGimmickSaveData_C::BindOnDiscoverStateChanged(struct FScriptDelegate* ¤0Ù0ó0È0)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.BindOnDiscoverStateChanged");

	UBP_MapGimmickSaveData_C_BindOnDiscoverStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (¤0Ù0ó0È0 != nullptr)
		*¤0Ù0ó0È0 = params.¤0Ù0ó0È0;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.IsChunkEnable
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapGimmickSaveData_C::IsChunkEnable(const struct FString& actorId, const struct FString& ChunkName, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.IsChunkEnable");

	UBP_MapGimmickSaveData_C_IsChunkEnable_Params params;
	params.actorId = actorId;
	params.ChunkName = ChunkName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.IsUnlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ActrorID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bUnlocked                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapGimmickSaveData_C::IsUnlock(const struct FString& ActrorID, bool* bUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.IsUnlock");

	UBP_MapGimmickSaveData_C_IsUnlock_Params params;
	params.ActrorID = ActrorID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnlocked != nullptr)
		*bUnlocked = params.bUnlocked;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.Unlock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_MapGimmickSaveData_C::Unlock(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.Unlock");

	UBP_MapGimmickSaveData_C_Unlock_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.IsDiscover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bDiscover                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapGimmickSaveData_C::IsDiscover(const struct FString& actorId, bool* bDiscover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.IsDiscover");

	UBP_MapGimmickSaveData_C_IsDiscover_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDiscover != nullptr)
		*bDiscover = params.bDiscover;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.Discover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_MapGimmickSaveData_C::Discover(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.Discover");

	UBP_MapGimmickSaveData_C_Discover_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.RegisterParameter
// (Event, Public, BlueprintEvent)

void UBP_MapGimmickSaveData_C::RegisterParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.RegisterParameter");

	UBP_MapGimmickSaveData_C_RegisterParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.OnNewGame
// (BlueprintCallable, BlueprintEvent)

void UBP_MapGimmickSaveData_C::OnNewGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.OnNewGame");

	UBP_MapGimmickSaveData_C_OnNewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.ExecuteUbergraph_BP_MapGimmickSaveData
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapGimmickSaveData_C::ExecuteUbergraph_BP_MapGimmickSaveData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.ExecuteUbergraph_BP_MapGimmickSaveData");

	UBP_MapGimmickSaveData_C_ExecuteUbergraph_BP_MapGimmickSaveData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.OnHideStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapGimmickSaveData_C::OnHideStateChanged__DelegateSignature(const struct FString& actorId, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.OnHideStateChanged__DelegateSignature");

	UBP_MapGimmickSaveData_C_OnHideStateChanged__DelegateSignature_Params params;
	params.actorId = actorId;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.OnUnlockStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_MapGimmickSaveData_C::OnUnlockStateChanged__DelegateSignature(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.OnUnlockStateChanged__DelegateSignature");

	UBP_MapGimmickSaveData_C_OnUnlockStateChanged__DelegateSignature_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.OnDiscoverStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_MapGimmickSaveData_C::OnDiscoverStateChanged__DelegateSignature(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.OnDiscoverStateChanged__DelegateSignature");

	UBP_MapGimmickSaveData_C_OnDiscoverStateChanged__DelegateSignature_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
