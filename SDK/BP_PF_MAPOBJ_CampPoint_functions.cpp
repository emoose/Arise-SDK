
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

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_PF_MAPOBJ_CampPoint_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.GetOutlinerFolderPath");

	ABP_PF_MAPOBJ_CampPoint_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PF_MAPOBJ_CampPoint_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.GetOutlinerLabelName");

	ABP_PF_MAPOBJ_CampPoint_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.Received_OnChangeState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PF_MAPOBJ_CampPoint_C::Received_OnChangeState(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.Received_OnChangeState");

	ABP_PF_MAPOBJ_CampPoint_C_Received_OnChangeState_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.SetDiscover
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_CampPoint_C::SetDiscover()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.SetDiscover");

	ABP_PF_MAPOBJ_CampPoint_C_SetDiscover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.IsDiscover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCleared                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_CampPoint_C::IsDiscover(bool* bCleared)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.IsDiscover");

	ABP_PF_MAPOBJ_CampPoint_C_IsDiscover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCleared != nullptr)
		*bCleared = params.bCleared;
}


// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.Unload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAtActorFinalize               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_CampPoint_C::Unload(bool bAtActorFinalize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.Unload");

	ABP_PF_MAPOBJ_CampPoint_C_Unload_Params params;
	params.bAtActorFinalize = bAtActorFinalize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.Preload
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_CampPoint_C::Preload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.Preload");

	ABP_PF_MAPOBJ_CampPoint_C_Preload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_CampPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.UserConstructionScript");

	ABP_PF_MAPOBJ_CampPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_MAPOBJ_CampPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.ReceiveBeginPlay");

	ABP_PF_MAPOBJ_CampPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.Preload Begin Overlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PF_MAPOBJ_CampPoint_C::Preload_Begin_Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.Preload Begin Overlap");

	ABP_PF_MAPOBJ_CampPoint_C_Preload_Begin_Overlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.ReceiveOnConstruction
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PF_MAPOBJ_CampPoint_C::ReceiveOnConstruction(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.ReceiveOnConstruction");

	ABP_PF_MAPOBJ_CampPoint_C_ReceiveOnConstruction_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.Preload End Overlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_CampPoint_C::Preload_End_Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.Preload End Overlap");

	ABP_PF_MAPOBJ_CampPoint_C_Preload_End_Overlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.OnFoundTrapIn
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_CampPoint_C::OnFoundTrapIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.OnFoundTrapIn");

	ABP_PF_MAPOBJ_CampPoint_C_OnFoundTrapIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_CampPoint_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.ReceiveEndPlay");

	ABP_PF_MAPOBJ_CampPoint_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.OnLockCampPont
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_CampPoint_C::OnLockCampPont()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.OnLockCampPont");

	ABP_PF_MAPOBJ_CampPoint_C_OnLockCampPont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_CampPoint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_CampPoint_C::ExecuteUbergraph_BP_PF_MAPOBJ_CampPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_CampPoint");

	ABP_PF_MAPOBJ_CampPoint_C_ExecuteUbergraph_BP_PF_MAPOBJ_CampPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
