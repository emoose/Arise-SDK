
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

// Function BP_PF_QuestLocation.BP_PF_QuestLocation_C.GetLocationTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void ABP_PF_QuestLocation_C::GetLocationTransform(int ID, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestLocation.BP_PF_QuestLocation_C.GetLocationTransform");

	ABP_PF_QuestLocation_C_GetLocationTransform_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function BP_PF_QuestLocation.BP_PF_QuestLocation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestLocation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestLocation.BP_PF_QuestLocation_C.UserConstructionScript");

	ABP_PF_QuestLocation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestLocation.BP_PF_QuestLocation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_QuestLocation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestLocation.BP_PF_QuestLocation_C.ReceiveBeginPlay");

	ABP_PF_QuestLocation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestLocation.BP_PF_QuestLocation_C.InitializeLocation
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  NewLocationActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestLocation_C::InitializeLocation(class AActor* NewLocationActor, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestLocation.BP_PF_QuestLocation_C.InitializeLocation");

	ABP_PF_QuestLocation_C_InitializeLocation_Params params;
	params.NewLocationActor = NewLocationActor;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestLocation.BP_PF_QuestLocation_C.ExecuteUbergraph_BP_PF_QuestLocation
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestLocation_C::ExecuteUbergraph_BP_PF_QuestLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestLocation.BP_PF_QuestLocation_C.ExecuteUbergraph_BP_PF_QuestLocation");

	ABP_PF_QuestLocation_C_ExecuteUbergraph_BP_PF_QuestLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
