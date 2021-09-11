
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

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetCameraInteractDistance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_PF_MAPOBJ_OwlPoint_C::GetCameraInteractDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetCameraInteractDistance");

	ABP_PF_MAPOBJ_OwlPoint_C_GetCameraInteractDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetSpawnedActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ABP_PF_MAPOBJ_OwlPoint_C::GetSpawnedActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetSpawnedActor");

	ABP_PF_MAPOBJ_OwlPoint_C_GetSpawnedActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetPointLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_PF_MAPOBJ_OwlPoint_C::GetPointLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetPointLocation");

	ABP_PF_MAPOBJ_OwlPoint_C_GetPointLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_PF_MAPOBJ_OwlPoint_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetOutlinerFolderPath");

	ABP_PF_MAPOBJ_OwlPoint_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PF_MAPOBJ_OwlPoint_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetOutlinerLabelName");

	ABP_PF_MAPOBJ_OwlPoint_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.UpdateInteractParams
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_OwlPoint_C::UpdateInteractParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.UpdateInteractParams");

	ABP_PF_MAPOBJ_OwlPoint_C_UpdateInteractParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetLocationName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 OutLocationName                (Parm, OutParm, ZeroConstructor)

void ABP_PF_MAPOBJ_OwlPoint_C::GetLocationName(struct FString* OutLocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetLocationName");

	ABP_PF_MAPOBJ_OwlPoint_C_GetLocationName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocationName != nullptr)
		*OutLocationName = params.OutLocationName;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_OwlPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.UserConstructionScript");

	ABP_PF_MAPOBJ_OwlPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.DiscoverOwlPoint
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_OwlPoint_C::DiscoverOwlPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.DiscoverOwlPoint");

	ABP_PF_MAPOBJ_OwlPoint_C_DiscoverOwlPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.Event Post Map Chagne
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_MAPOBJ_OwlPoint_C::Event_Post_Map_Chagne(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.Event Post Map Chagne");

	ABP_PF_MAPOBJ_OwlPoint_C_Event_Post_Map_Chagne_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_MAPOBJ_OwlPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ReceiveBeginPlay");

	ABP_PF_MAPOBJ_OwlPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ChangeActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_OwlPoint_C::ChangeActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ChangeActive");

	ABP_PF_MAPOBJ_OwlPoint_C_ChangeActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ReceivePostEditChangeProperty
// (Event, Public, BlueprintEvent)

void ABP_PF_MAPOBJ_OwlPoint_C::ReceivePostEditChangeProperty()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ReceivePostEditChangeProperty");

	ABP_PF_MAPOBJ_OwlPoint_C_ReceivePostEditChangeProperty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.Event Change Location
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewLocationName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_MAPOBJ_OwlPoint_C::Event_Change_Location(const struct FString& NewLocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.Event Change Location");

	ABP_PF_MAPOBJ_OwlPoint_C_Event_Change_Location_Params params;
	params.NewLocationName = NewLocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ReceiveOnConstruction
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PF_MAPOBJ_OwlPoint_C::ReceiveOnConstruction(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ReceiveOnConstruction");

	ABP_PF_MAPOBJ_OwlPoint_C_ReceiveOnConstruction_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_OwlPoint_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ReceiveEndPlay");

	ABP_PF_MAPOBJ_OwlPoint_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_OwlPoint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_OwlPoint_C::ExecuteUbergraph_BP_PF_MAPOBJ_OwlPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_OwlPoint");

	ABP_PF_MAPOBJ_OwlPoint_C_ExecuteUbergraph_BP_PF_MAPOBJ_OwlPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
