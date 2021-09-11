
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

// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.Battle_Enable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           InEnable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EncountSymbolSaveData_C::Battle_Enable(const struct FString& actorId, bool InEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.Battle_Enable");

	UBP_EncountSymbolSaveData_C_Battle_Enable_Params params;
	params.actorId = actorId;
	params.InEnable = InEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.IsBattle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EncountSymbolSaveData_C::IsBattle(const struct FString& actorId, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.IsBattle");

	UBP_EncountSymbolSaveData_C_IsBattle_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.Battle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_EncountSymbolSaveData_C::Battle(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.Battle");

	UBP_EncountSymbolSaveData_C_Battle_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.IsValid
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EncountSymbolSaveData_C::IsValid(const struct FString& actorId, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.IsValid");

	UBP_EncountSymbolSaveData_C_IsValid_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.IsMapVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EncountSymbolSaveData_C::IsMapVisible(const struct FString& actorId, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.IsMapVisible");

	UBP_EncountSymbolSaveData_C_IsMapVisible_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.MapVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EncountSymbolSaveData_C::MapVisible(const struct FString& actorId, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.MapVisible");

	UBP_EncountSymbolSaveData_C_MapVisible_Params params;
	params.actorId = actorId;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.IsChunkEnable
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InActorID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 InChunkPostFix                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EncountSymbolSaveData_C::IsChunkEnable(const struct FString& InActorID, const struct FString& InChunkPostFix, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.IsChunkEnable");

	UBP_EncountSymbolSaveData_C_IsChunkEnable_Params params;
	params.InActorID = InActorID;
	params.InChunkPostFix = InChunkPostFix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.IsDiscover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EncountSymbolSaveData_C::IsDiscover(const struct FString& actorId, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.IsDiscover");

	UBP_EncountSymbolSaveData_C_IsDiscover_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.SetChunkEnable
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InActorID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 InChunkPostFix                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           InEnable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EncountSymbolSaveData_C::SetChunkEnable(const struct FString& InActorID, const struct FString& InChunkPostFix, bool InEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.SetChunkEnable");

	UBP_EncountSymbolSaveData_C_SetChunkEnable_Params params;
	params.InActorID = InActorID;
	params.InChunkPostFix = InChunkPostFix;
	params.InEnable = InEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.Discover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_EncountSymbolSaveData_C::Discover(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.Discover");

	UBP_EncountSymbolSaveData_C_Discover_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.Register
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InLevelName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            InNum                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EncountSymbolSaveData_C::Register(const struct FString& InLevelName, int InNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.Register");

	UBP_EncountSymbolSaveData_C_Register_Params params;
	params.InLevelName = InLevelName;
	params.InNum = InNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.RegisterParameter
// (Event, Public, BlueprintEvent)

void UBP_EncountSymbolSaveData_C::RegisterParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.RegisterParameter");

	UBP_EncountSymbolSaveData_C_RegisterParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.OnNewGame
// (BlueprintCallable, BlueprintEvent)

void UBP_EncountSymbolSaveData_C::OnNewGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.OnNewGame");

	UBP_EncountSymbolSaveData_C_OnNewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.OnLoad
// (BlueprintCallable, BlueprintEvent)

void UBP_EncountSymbolSaveData_C::OnLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.OnLoad");

	UBP_EncountSymbolSaveData_C_OnLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.ExecuteUbergraph_BP_EncountSymbolSaveData
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EncountSymbolSaveData_C::ExecuteUbergraph_BP_EncountSymbolSaveData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C.ExecuteUbergraph_BP_EncountSymbolSaveData");

	UBP_EncountSymbolSaveData_C_ExecuteUbergraph_BP_EncountSymbolSaveData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
