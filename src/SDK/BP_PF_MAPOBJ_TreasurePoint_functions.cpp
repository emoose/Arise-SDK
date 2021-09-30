
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

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.ReceiveSerializeTreasurePointParameter
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPFPlacementTreasurePointDatabaseRow DestinationParameter           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PF_MAPOBJ_TreasurePoint_C::ReceiveSerializeTreasurePointParameter(struct FPFPlacementTreasurePointDatabaseRow* DestinationParameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.ReceiveSerializeTreasurePointParameter");

	ABP_PF_MAPOBJ_TreasurePoint_C_ReceiveSerializeTreasurePointParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DestinationParameter != nullptr)
		*DestinationParameter = params.DestinationParameter;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_PF_MAPOBJ_TreasurePoint_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetOutlinerFolderPath");

	ABP_PF_MAPOBJ_TreasurePoint_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PF_MAPOBJ_TreasurePoint_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetOutlinerLabelName");

	ABP_PF_MAPOBJ_TreasurePoint_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.RequestSC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RequestID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsStrange                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_TreasurePoint_C::RequestSC(const struct FString& RequestID, bool IsStrange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.RequestSC");

	ABP_PF_MAPOBJ_TreasurePoint_C_RequestSC_Params params;
	params.RequestID = RequestID;
	params.IsStrange = IsStrange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetItemInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_TreasurePoint_C::GetItemInternal(int ItemID, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetItemInternal");

	ABP_PF_MAPOBJ_TreasurePoint_C_GetItemInternal_Params params;
	params.ItemID = ItemID;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetDebShowInfoMessage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutMessage                     (Parm, OutParm, ZeroConstructor)
// struct FLinearColor            OutColor                       (Parm, OutParm, IsPlainOldData)

void ABP_PF_MAPOBJ_TreasurePoint_C::GetDebShowInfoMessage(bool* bValid, struct FString* OutMessage, struct FLinearColor* OutColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetDebShowInfoMessage");

	ABP_PF_MAPOBJ_TreasurePoint_C_GetDebShowInfoMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (OutMessage != nullptr)
		*OutMessage = params.OutMessage;
	if (OutColor != nullptr)
		*OutColor = params.OutColor;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.CheckItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GetIt                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ItemLabel                      (Parm, OutParm, ZeroConstructor)
// int                            ItemNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            GetGald                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            LostGald                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_TreasurePoint_C::CheckItem(bool* GetIt, struct FString* ItemLabel, int* ItemNum, int* GetGald, int* LostGald)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.CheckItem");

	ABP_PF_MAPOBJ_TreasurePoint_C_CheckItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetIt != nullptr)
		*GetIt = params.GetIt;
	if (ItemLabel != nullptr)
		*ItemLabel = params.ItemLabel;
	if (ItemNum != nullptr)
		*ItemNum = params.ItemNum;
	if (GetGald != nullptr)
		*GetGald = params.GetGald;
	if (LostGald != nullptr)
		*LostGald = params.LostGald;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.OnSetHideModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisibility                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_TreasurePoint_C::OnSetHideModel(bool bVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.OnSetHideModel");

	ABP_PF_MAPOBJ_TreasurePoint_C_OnSetHideModel_Params params;
	params.bVisibility = bVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.SetDiscover
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_TreasurePoint_C::SetDiscover()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.SetDiscover");

	ABP_PF_MAPOBJ_TreasurePoint_C_SetDiscover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.IsDiscover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bCleared                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_TreasurePoint_C::IsDiscover(bool* bCleared)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.IsDiscover");

	ABP_PF_MAPOBJ_TreasurePoint_C_IsDiscover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCleared != nullptr)
		*bCleared = params.bCleared;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.ApplyItemGetFlags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_TreasurePoint_C::ApplyItemGetFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.ApplyItemGetFlags");

	ABP_PF_MAPOBJ_TreasurePoint_C_ApplyItemGetFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetIconAngle
// (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_PF_MAPOBJ_TreasurePoint_C::GetIconAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetIconAngle");

	ABP_PF_MAPOBJ_TreasurePoint_C_GetIconAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetIconImageDataName
// (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PF_MAPOBJ_TreasurePoint_C::GetIconImageDataName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetIconImageDataName");

	ABP_PF_MAPOBJ_TreasurePoint_C_GetIconImageDataName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetIconLocation
// (HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_PF_MAPOBJ_TreasurePoint_C::GetIconLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetIconLocation");

	ABP_PF_MAPOBJ_TreasurePoint_C_GetIconLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowDialog                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_TreasurePoint_C::GetItem(bool* bShowDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetItem");

	ABP_PF_MAPOBJ_TreasurePoint_C_GetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShowDialog != nullptr)
		*bShowDialog = params.bShowDialog;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.SetOpen
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_TreasurePoint_C::SetOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.SetOpen");

	ABP_PF_MAPOBJ_TreasurePoint_C_SetOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.IsOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bCleared                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_TreasurePoint_C::IsOpen(bool* bCleared)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.IsOpen");

	ABP_PF_MAPOBJ_TreasurePoint_C_IsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCleared != nullptr)
		*bCleared = params.bCleared;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.OnSetGatheredModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisibility                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_TreasurePoint_C::OnSetGatheredModel(bool bVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.OnSetGatheredModel");

	ABP_PF_MAPOBJ_TreasurePoint_C_OnSetGatheredModel_Params params;
	params.bVisibility = bVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.OnSetBaseModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisibility                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_TreasurePoint_C::OnSetBaseModel(bool bVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.OnSetBaseModel");

	ABP_PF_MAPOBJ_TreasurePoint_C_OnSetBaseModel_Params params;
	params.bVisibility = bVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_TreasurePoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.UserConstructionScript");

	ABP_PF_MAPOBJ_TreasurePoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.SetShowModel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_TreasurePoint_C::SetShowModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.SetShowModel");

	ABP_PF_MAPOBJ_TreasurePoint_C_SetShowModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.ReceiveOnConstruction
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PF_MAPOBJ_TreasurePoint_C::ReceiveOnConstruction(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.ReceiveOnConstruction");

	ABP_PF_MAPOBJ_TreasurePoint_C_ReceiveOnConstruction_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.OnFoundTrapIn
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_TreasurePoint_C::OnFoundTrapIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.OnFoundTrapIn");

	ABP_PF_MAPOBJ_TreasurePoint_C_OnFoundTrapIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_MAPOBJ_TreasurePoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.ReceiveBeginPlay");

	ABP_PF_MAPOBJ_TreasurePoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_TreasurePoint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_TreasurePoint_C::ExecuteUbergraph_BP_PF_MAPOBJ_TreasurePoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_TreasurePoint");

	ABP_PF_MAPOBJ_TreasurePoint_C_ExecuteUbergraph_BP_PF_MAPOBJ_TreasurePoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
