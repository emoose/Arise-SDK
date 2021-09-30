
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

// Function BPI_EncountGroup.BPI_EncountGroup_C.UpdateRareStateImpl
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_EncountGroup_C::UpdateRareStateImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountGroup.BPI_EncountGroup_C.UpdateRareStateImpl");

	UBPI_EncountGroup_C_UpdateRareStateImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_EncountGroup.BPI_EncountGroup_C.SetBattleResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBtlResultType                 Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_EncountGroup_C::SetBattleResult(EBtlResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountGroup.BPI_EncountGroup_C.SetBattleResult");

	UBPI_EncountGroup_C_SetBattleResult_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_EncountGroup.BPI_EncountGroup_C.UnloadBattleAsset
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_EncountGroup_C::UnloadBattleAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountGroup.BPI_EncountGroup_C.UnloadBattleAsset");

	UBPI_EncountGroup_C_UnloadBattleAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_EncountGroup.BPI_EncountGroup_C.LoadBattleAsset
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_EncountGroup_C::LoadBattleAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountGroup.BPI_EncountGroup_C.LoadBattleAsset");

	UBPI_EncountGroup_C_LoadBattleAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_EncountGroup.BPI_EncountGroup_C.MakeSurroundEncountParameter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         InEncountGroupNames            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FBtlEncountGroupParam   Param                          (Parm, OutParm)
// struct FString                 EncountGroupName               (Parm, OutParm, ZeroConstructor)

void UBPI_EncountGroup_C::MakeSurroundEncountParameter(TArray<struct FString> InEncountGroupNames, bool* Success, struct FBtlEncountGroupParam* Param, struct FString* EncountGroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountGroup.BPI_EncountGroup_C.MakeSurroundEncountParameter");

	UBPI_EncountGroup_C_MakeSurroundEncountParameter_Params params;
	params.InEncountGroupNames = InEncountGroupNames;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Param != nullptr)
		*Param = params.Param;
	if (EncountGroupName != nullptr)
		*EncountGroupName = params.EncountGroupName;
}


// Function BPI_EncountGroup.BPI_EncountGroup_C.MakeEncountParameter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InAutoSymbolName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           LockEntry                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FBtlEncountGroupParam   Param                          (Parm, OutParm)
// struct FString                 EncountGroupName               (Parm, OutParm, ZeroConstructor)

void UBPI_EncountGroup_C::MakeEncountParameter(const struct FString& InAutoSymbolName, bool* Success, bool* LockEntry, struct FBtlEncountGroupParam* Param, struct FString* EncountGroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountGroup.BPI_EncountGroup_C.MakeEncountParameter");

	UBPI_EncountGroup_C_MakeEncountParameter_Params params;
	params.InAutoSymbolName = InAutoSymbolName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (LockEntry != nullptr)
		*LockEntry = params.LockEntry;
	if (Param != nullptr)
		*Param = params.Param;
	if (EncountGroupName != nullptr)
		*EncountGroupName = params.EncountGroupName;
}


// Function BPI_EncountGroup.BPI_EncountGroup_C.ResetBattleFlagImpl
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_EncountGroup_C::ResetBattleFlagImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountGroup.BPI_EncountGroup_C.ResetBattleFlagImpl");

	UBPI_EncountGroup_C_ResetBattleFlagImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_EncountGroup.BPI_EncountGroup_C.RespawnSymbolImpl
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_EncountGroup_C::RespawnSymbolImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountGroup.BPI_EncountGroup_C.RespawnSymbolImpl");

	UBPI_EncountGroup_C_RespawnSymbolImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_EncountGroup.BPI_EncountGroup_C.GetUnloadBattleAssetUserImpl
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Battle                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 AutoSymbolName                 (Parm, OutParm, ZeroConstructor)
// struct FString                 MapName                        (Parm, OutParm, ZeroConstructor)
// struct FName                   GroupID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_EncountGroup_C::GetUnloadBattleAssetUserImpl(bool* Battle, struct FString* AutoSymbolName, struct FString* MapName, struct FName* GroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountGroup.BPI_EncountGroup_C.GetUnloadBattleAssetUserImpl");

	UBPI_EncountGroup_C_GetUnloadBattleAssetUserImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Battle != nullptr)
		*Battle = params.Battle;
	if (AutoSymbolName != nullptr)
		*AutoSymbolName = params.AutoSymbolName;
	if (MapName != nullptr)
		*MapName = params.MapName;
	if (GroupID != nullptr)
		*GroupID = params.GroupID;
}


// Function BPI_EncountGroup.BPI_EncountGroup_C.UnloadBattleAssetImpl
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_EncountGroup_C::UnloadBattleAssetImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountGroup.BPI_EncountGroup_C.UnloadBattleAssetImpl");

	UBPI_EncountGroup_C_UnloadBattleAssetImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_EncountGroup.BPI_EncountGroup_C.UpdateRareImpl
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_EncountGroup_C::UpdateRareImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountGroup.BPI_EncountGroup_C.UpdateRareImpl");

	UBPI_EncountGroup_C_UpdateRareImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_EncountGroup.BPI_EncountGroup_C.DeleteSymbolImpl
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_EncountGroup_C::DeleteSymbolImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountGroup.BPI_EncountGroup_C.DeleteSymbolImpl");

	UBPI_EncountGroup_C_DeleteSymbolImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_EncountGroup.BPI_EncountGroup_C.SetEncountBattleStateImpl
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_EncountGroup_C::SetEncountBattleStateImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountGroup.BPI_EncountGroup_C.SetEncountBattleStateImpl");

	UBPI_EncountGroup_C_SetEncountBattleStateImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
