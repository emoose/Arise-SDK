
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

// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.SwitchShowMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowArenaMap                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_TrainingEventActor_C::SwitchShowMap(bool bShowArenaMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.SwitchShowMap");

	ABP_PF_TrainingEventActor_C_SwitchShowMap_Params params;
	params.bShowArenaMap = bShowArenaMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.IsBattleMapLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_TrainingEventActor_C::IsBattleMapLoaded(bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.IsBattleMapLoaded");

	ABP_PF_TrainingEventActor_C_IsBattleMapLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.CheckTrophy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_TrainingEventActor_C::CheckTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.CheckTrophy");

	ABP_PF_TrainingEventActor_C_CheckTrophy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.IsArenaMapVisibled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bVisibled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_TrainingEventActor_C::IsArenaMapVisibled(bool* bVisibled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.IsArenaMapVisibled");

	ABP_PF_TrainingEventActor_C_IsArenaMapVisibled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bVisibled != nullptr)
		*bVisibled = params.bVisibled;
}


// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.SetTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_TrainingEventActor_C::SetTime(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.SetTime");

	ABP_PF_TrainingEventActor_C_SetTime_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.DoTrainingStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBtlEncountGroupParam> EncountGroups                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArenaData           ArenaData                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PF_TrainingEventActor_C::DoTrainingStart(const struct FName& MapName, const struct FBtlArenaData& ArenaData, TArray<struct FBtlEncountGroupParam>* EncountGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.DoTrainingStart");

	ABP_PF_TrainingEventActor_C_DoTrainingStart_Params params;
	params.MapName = MapName;
	params.ArenaData = ArenaData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EncountGroups != nullptr)
		*EncountGroups = params.EncountGroups;
}


// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.GetResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EDE_TrainingResult> NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_TrainingEventActor_C::GetResult(TEnumAsByte<EDE_TrainingResult>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.GetResult");

	ABP_PF_TrainingEventActor_C_GetResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.SetResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDE_TrainingResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_TrainingEventActor_C::SetResult(TEnumAsByte<EDE_TrainingResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.SetResult");

	ABP_PF_TrainingEventActor_C_SetResult_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.DoBattleStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_TrainingEventActor_C::DoBattleStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.DoBattleStart");

	ABP_PF_TrainingEventActor_C_DoBattleStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_TrainingEventActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.UserConstructionScript");

	ABP_PF_TrainingEventActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_TrainingEventActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.ReceiveBeginPlay");

	ABP_PF_TrainingEventActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.On Training Battle End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  PrevScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_TrainingEventActor_C::On_Training_Battle_End(unsigned char PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.On Training Battle End");

	ABP_PF_TrainingEventActor_C_On_Training_Battle_End_Params params;
	params.PrevScene = PrevScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_TrainingEventActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.ReceiveEndPlay");

	ABP_PF_TrainingEventActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.On Training Event Start
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_TrainingEventActor_C::On_Training_Event_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.On Training Event Start");

	ABP_PF_TrainingEventActor_C_On_Training_Event_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.On Go Back Title
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_TrainingEventActor_C::On_Go_Back_Title()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.On Go Back Title");

	ABP_PF_TrainingEventActor_C_On_Go_Back_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.ExecuteUbergraph_BP_PF_TrainingEventActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_TrainingEventActor_C::ExecuteUbergraph_BP_PF_TrainingEventActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C.ExecuteUbergraph_BP_PF_TrainingEventActor");

	ABP_PF_TrainingEventActor_C_ExecuteUbergraph_BP_PF_TrainingEventActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
