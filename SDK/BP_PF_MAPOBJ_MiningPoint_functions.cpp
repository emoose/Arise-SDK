
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

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.ReceiveSerializeBreakPointParameter
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPFPlacementBreakPointDatabaseRow DestinationParameter           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PF_MAPOBJ_MiningPoint_C::ReceiveSerializeBreakPointParameter(struct FPFPlacementBreakPointDatabaseRow* DestinationParameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.ReceiveSerializeBreakPointParameter");

	ABP_PF_MAPOBJ_MiningPoint_C_ReceiveSerializeBreakPointParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DestinationParameter != nullptr)
		*DestinationParameter = params.DestinationParameter;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_PF_MAPOBJ_MiningPoint_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.GetOutlinerFolderPath");

	ABP_PF_MAPOBJ_MiningPoint_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PF_MAPOBJ_MiningPoint_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.GetOutlinerLabelName");

	ABP_PF_MAPOBJ_MiningPoint_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.InitializePlacementData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_MiningPoint_C::InitializePlacementData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.InitializePlacementData");

	ABP_PF_MAPOBJ_MiningPoint_C_InitializePlacementData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.CollectGetItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_MiningPoint_C::CollectGetItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.CollectGetItems");

	ABP_PF_MAPOBJ_MiningPoint_C_CollectGetItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.PopGetItemLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_MiningPoint_C::PopGetItemLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.PopGetItemLog");

	ABP_PF_MAPOBJ_MiningPoint_C_PopGetItemLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.PushGetItemLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOption                        LogOption                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_MiningPoint_C::PushGetItemLog(const struct FString& ItemID, int Num, EOption LogOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.PushGetItemLog");

	ABP_PF_MAPOBJ_MiningPoint_C_PushGetItemLog_Params params;
	params.ItemID = ItemID;
	params.Num = Num;
	params.LogOption = LogOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.GetItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    AbilityID                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           GetIt                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ShowDialog                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_MiningPoint_C::GetItem(int ItemID, TArray<int> AbilityID, bool* GetIt, bool* ShowDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.GetItem");

	ABP_PF_MAPOBJ_MiningPoint_C_GetItem_Params params;
	params.ItemID = ItemID;
	params.AbilityID = AbilityID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetIt != nullptr)
		*GetIt = params.GetIt;
	if (ShowDialog != nullptr)
		*ShowDialog = params.ShowDialog;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.StopEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_MiningPoint_C::StopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.StopEffect");

	ABP_PF_MAPOBJ_MiningPoint_C_StopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.PlayEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_MiningPoint_C::PlayEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.PlayEffect");

	ABP_PF_MAPOBJ_MiningPoint_C_PlayEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.AcquiredMiningData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_MiningPoint_C::AcquiredMiningData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.AcquiredMiningData");

	ABP_PF_MAPOBJ_MiningPoint_C_AcquiredMiningData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.CreateMiningData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_MiningPoint_C::CreateMiningData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.CreateMiningData");

	ABP_PF_MAPOBJ_MiningPoint_C_CreateMiningData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.ApplyStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_MiningPoint_C::ApplyStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.ApplyStatus");

	ABP_PF_MAPOBJ_MiningPoint_C_ApplyStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_MiningPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.UserConstructionScript");

	ABP_PF_MAPOBJ_MiningPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_MAPOBJ_MiningPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.ReceiveBeginPlay");

	ABP_PF_MAPOBJ_MiningPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.Break
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_MiningPoint_C::Break()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.Break");

	ABP_PF_MAPOBJ_MiningPoint_C_Break_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.OnSetBaseModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisibility                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_MiningPoint_C::OnSetBaseModel(bool bVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.OnSetBaseModel");

	ABP_PF_MAPOBJ_MiningPoint_C_OnSetBaseModel_Params params;
	params.bVisibility = bVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.OnSetGatheredModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisibility                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_MiningPoint_C::OnSetGatheredModel(bool bVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.OnSetGatheredModel");

	ABP_PF_MAPOBJ_MiningPoint_C_OnSetGatheredModel_Params params;
	params.bVisibility = bVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_MiningPoint_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.ReceiveEndPlay");

	ABP_PF_MAPOBJ_MiningPoint_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.OnSetHideModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisibility                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_MiningPoint_C::OnSetHideModel(bool bVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.OnSetHideModel");

	ABP_PF_MAPOBJ_MiningPoint_C_OnSetHideModel_Params params;
	params.bVisibility = bVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.Event Get Mining Items
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAriseMiningItemSaveInfo> Items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PF_MAPOBJ_MiningPoint_C::Event_Get_Mining_Items(TArray<struct FAriseMiningItemSaveInfo> Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.Event Get Mining Items");

	ABP_PF_MAPOBJ_MiningPoint_C_Event_Get_Mining_Items_Params params;
	params.Items = Items;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_MiningPoint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_MiningPoint_C::ExecuteUbergraph_BP_PF_MAPOBJ_MiningPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_MiningPoint");

	ABP_PF_MAPOBJ_MiningPoint_C_ExecuteUbergraph_BP_PF_MAPOBJ_MiningPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
