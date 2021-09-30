
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

// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetRecoveryPointSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseScriptSaveData*    RecoveryPointSaveData          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseScriptSaveDataManager_C::GetRecoveryPointSaveData(class UAriseScriptSaveData** RecoveryPointSaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetRecoveryPointSaveData");

	ABP_AriseScriptSaveDataManager_C_GetRecoveryPointSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RecoveryPointSaveData != nullptr)
		*RecoveryPointSaveData = params.RecoveryPointSaveData;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetSearchPointSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseScriptSaveData*    SearchPointSaveData            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseScriptSaveDataManager_C::GetSearchPointSaveData(class UAriseScriptSaveData** SearchPointSaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetSearchPointSaveData");

	ABP_AriseScriptSaveDataManager_C_GetSearchPointSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SearchPointSaveData != nullptr)
		*SearchPointSaveData = params.SearchPointSaveData;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetEncountSymbolSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseScriptSaveData*    EncountSymbolSaveData          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseScriptSaveDataManager_C::GetEncountSymbolSaveData(class UAriseScriptSaveData** EncountSymbolSaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetEncountSymbolSaveData");

	ABP_AriseScriptSaveDataManager_C_GetEncountSymbolSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EncountSymbolSaveData != nullptr)
		*EncountSymbolSaveData = params.EncountSymbolSaveData;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetCampPointSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseScriptSaveData*    CampPointSaveData              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseScriptSaveDataManager_C::GetCampPointSaveData(class UAriseScriptSaveData** CampPointSaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetCampPointSaveData");

	ABP_AriseScriptSaveDataManager_C_GetCampPointSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CampPointSaveData != nullptr)
		*CampPointSaveData = params.CampPointSaveData;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetQuestEnemyCountSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseScriptSaveData*    QuestEnemyCountSaveData        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseScriptSaveDataManager_C::GetQuestEnemyCountSaveData(class UAriseScriptSaveData** QuestEnemyCountSaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetQuestEnemyCountSaveData");

	ABP_AriseScriptSaveDataManager_C_GetQuestEnemyCountSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestEnemyCountSaveData != nullptr)
		*QuestEnemyCountSaveData = params.QuestEnemyCountSaveData;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetQuestGuideSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestSaveData*          QuestGuideSaveData             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseScriptSaveDataManager_C::GetQuestGuideSaveData(class UQuestSaveData** QuestGuideSaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetQuestGuideSaveData");

	ABP_AriseScriptSaveDataManager_C_GetQuestGuideSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestGuideSaveData != nullptr)
		*QuestGuideSaveData = params.QuestGuideSaveData;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetOneTopSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseScriptSaveData*    OneTopSaveData                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseScriptSaveDataManager_C::GetOneTopSaveData(class UAriseScriptSaveData** OneTopSaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetOneTopSaveData");

	ABP_AriseScriptSaveDataManager_C_GetOneTopSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OneTopSaveData != nullptr)
		*OneTopSaveData = params.OneTopSaveData;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetMapGimmickSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseScriptSaveData*    MapGimmickSaveData             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseScriptSaveDataManager_C::GetMapGimmickSaveData(class UAriseScriptSaveData** MapGimmickSaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetMapGimmickSaveData");

	ABP_AriseScriptSaveDataManager_C_GetMapGimmickSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapGimmickSaveData != nullptr)
		*MapGimmickSaveData = params.MapGimmickSaveData;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetBreakPointSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseScriptSaveData*    BreakPointSaveData             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseScriptSaveDataManager_C::GetBreakPointSaveData(class UAriseScriptSaveData** BreakPointSaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetBreakPointSaveData");

	ABP_AriseScriptSaveDataManager_C_GetBreakPointSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BreakPointSaveData != nullptr)
		*BreakPointSaveData = params.BreakPointSaveData;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetSearchOwlSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseScriptSaveData*    SearchOwlSaveData              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseScriptSaveDataManager_C::GetSearchOwlSaveData(class UAriseScriptSaveData** SearchOwlSaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetSearchOwlSaveData");

	ABP_AriseScriptSaveDataManager_C_GetSearchOwlSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SearchOwlSaveData != nullptr)
		*SearchOwlSaveData = params.SearchOwlSaveData;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetTreasurePointSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseScriptSaveData*    TreasurePointSaveData          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseScriptSaveDataManager_C::GetTreasurePointSaveData(class UAriseScriptSaveData** TreasurePointSaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetTreasurePointSaveData");

	ABP_AriseScriptSaveDataManager_C_GetTreasurePointSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TreasurePointSaveData != nullptr)
		*TreasurePointSaveData = params.TreasurePointSaveData;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetFishingSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseScriptSaveData*    FishingSaveData                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseScriptSaveDataManager_C::GetFishingSaveData(class UAriseScriptSaveData** FishingSaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.GetFishingSaveData");

	ABP_AriseScriptSaveDataManager_C_GetFishingSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FishingSaveData != nullptr)
		*FishingSaveData = params.FishingSaveData;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.ÞV©_Ý0¤0ó0È0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::ÞV©_Ý0¤0ó0È0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.ÞV©_Ý0¤0ó0È0");

	ABP_AriseScriptSaveDataManager_C_ÞV©_Ý0¤0ó0È0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.¨0ó0«0¦0ó0È0·0ó0Ü0ë0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::¨0ó0«0¦0ó0È0·0ó0Ü0ë0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.¨0ó0«0¦0ó0È0·0ó0Ü0ë0");

	ABP_AriseScriptSaveDataManager_C_¨0ó0«0¦0ó0È0·0ó0Ü0ë0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.Î‘¶UÝ0¤0ó0È0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::Î‘¶UÝ0¤0ó0È0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.Î‘¶UÝ0¤0ó0È0");

	ABP_AriseScriptSaveDataManager_C_Î‘¶UÝ0¤0ó0È0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.ã‘Š0Å`1X
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::ã‘Š0Å`1X()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.ã‘Š0Å`1X");

	ABP_AriseScriptSaveDataManager_C_ã‘Š0Å`1X_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.¯0¨0¹0È0¬0¤0É0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::¯0¨0¹0È0¬0¤0É0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.¯0¨0¹0È0¬0¤0É0");

	ABP_AriseScriptSaveDataManager_C_¯0¨0¹0È0¬0¤0É0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.¯0¨0¹0È0¨0Í0ß0ü0ŠO«0¦0ó0È0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::¯0¨0¹0È0¨0Í0ß0ü0ŠO«0¦0ó0È0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.¯0¨0¹0È0¨0Í0ß0ü0ŠO«0¦0ó0È0");

	ABP_AriseScriptSaveDataManager_C_¯0¨0¹0È0¨0Í0ß0ü0ŠO«0¦0ó0È0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.ï0ó0È0Ã0×0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::ï0ó0È0Ã0×0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.ï0ó0È0Ã0×0");

	ABP_AriseScriptSaveDataManager_C_ï0ó0È0Ã0×0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.Þ0Ã0×0®0ß0Ã0¯0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::Þ0Ã0×0®0ß0Ã0¯0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.Þ0Ã0×0®0ß0Ã0¯0");

	ABP_AriseScriptSaveDataManager_C_Þ0Ã0×0®0ß0Ã0¯0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.¡c˜cÝ0¤0ó0È0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::¡c˜cÝ0¤0ó0È0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.¡c˜cÝ0¤0ó0È0");

	ABP_AriseScriptSaveDataManager_C_¡c˜cÝ0¤0ó0È0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.¡cÖSÝ0¤0ó0È0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::¡cÖSÝ0¤0ó0È0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.¡cÖSÝ0¤0ó0È0");

	ABP_AriseScriptSaveDataManager_C_¡cÖSÝ0¤0ó0È0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.È0ì0¸0ã0ü0Ý0¤0ó0È0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::È0ì0¸0ã0ü0Ý0¤0ó0È0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.È0ì0¸0ã0ü0Ý0¤0ó0È0");

	ABP_AriseScriptSaveDataManager_C_È0ì0¸0ã0ü0Ý0¤0ó0È0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.Õ0¯0í0¦0¢cW0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::Õ0¯0í0¦0¢cW0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.Õ0¯0í0¦0¢cW0");

	ABP_AriseScriptSaveDataManager_C_Õ0¯0í0¦0¢cW0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.PreMapChangeCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseScriptSaveDataManager_C::PreMapChangeCallback(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.PreMapChangeCallback");

	ABP_AriseScriptSaveDataManager_C_PreMapChangeCallback_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.Update_Implement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InDeltaSeconds                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseScriptSaveDataManager_C::Update_Implement(float InDeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.Update_Implement");

	ABP_AriseScriptSaveDataManager_C_Update_Implement_Params params;
	params.InDeltaSeconds = InDeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.Initialize_Implement
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::Initialize_Implement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.Initialize_Implement");

	ABP_AriseScriptSaveDataManager_C_Initialize_Implement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.UserConstructionScript");

	ABP_AriseScriptSaveDataManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.ReceiveBeginPlay");

	ABP_AriseScriptSaveDataManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseScriptSaveDataManager_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.Initialize");

	ABP_AriseScriptSaveDataManager_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InDeltaSeconds                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseScriptSaveDataManager_C::Update(float InDeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.Update");

	ABP_AriseScriptSaveDataManager_C_Update_Params params;
	params.InDeltaSeconds = InDeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.ExecuteUbergraph_BP_AriseScriptSaveDataManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseScriptSaveDataManager_C::ExecuteUbergraph_BP_AriseScriptSaveDataManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C.ExecuteUbergraph_BP_AriseScriptSaveDataManager");

	ABP_AriseScriptSaveDataManager_C_ExecuteUbergraph_BP_AriseScriptSaveDataManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
