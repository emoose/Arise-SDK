
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

// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.CreateDecal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAttachLocation>   LocationType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TSK_CreateDecal_V2_C::CreateDecal(TEnumAsByte<EAttachLocation> LocationType, const struct FVector& Location, float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.CreateDecal");

	UBP_MGC_TSK_CreateDecal_V2_C_CreateDecal_Params params;
	params.LocationType = LocationType;
	params.Location = Location;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.Received_DebugRender
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          FrameDeltaTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TSK_CreateDecal_V2_C::Received_DebugRender(float FrameDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.Received_DebugRender");

	UBP_MGC_TSK_CreateDecal_V2_C_Received_DebugRender_Params params;
	params.FrameDeltaTime = FrameDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.Received_GetNotesInfomation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_MGC_TSK_CreateDecal_V2_C::Received_GetNotesInfomation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.Received_GetNotesInfomation");

	UBP_MGC_TSK_CreateDecal_V2_C_Received_GetNotesInfomation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.Received_GetTaskName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_MGC_TSK_CreateDecal_V2_C::Received_GetTaskName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.Received_GetTaskName");

	UBP_MGC_TSK_CreateDecal_V2_C_Received_GetTaskName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.RangeVector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Range                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void UBP_MGC_TSK_CreateDecal_V2_C::RangeVector(const struct FVector& Value, const struct FVector& Range, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.RangeVector");

	UBP_MGC_TSK_CreateDecal_V2_C_RangeVector_Params params;
	params.Value = Value;
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.RangeFloat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TSK_CreateDecal_V2_C::RangeFloat(float Value, float Range, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.RangeFloat");

	UBP_MGC_TSK_CreateDecal_V2_C_RangeFloat_Params params;
	params.Value = Value;
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.Received_End
// (Event, Public, BlueprintEvent)

void UBP_MGC_TSK_CreateDecal_V2_C::Received_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.Received_End");

	UBP_MGC_TSK_CreateDecal_V2_C_Received_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.Received_Begin
// (Event, Public, BlueprintEvent)

void UBP_MGC_TSK_CreateDecal_V2_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.Received_Begin");

	UBP_MGC_TSK_CreateDecal_V2_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.ExecuteUbergraph_BP_MGC_TSK_CreateDecal_V2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TSK_CreateDecal_V2_C::ExecuteUbergraph_BP_MGC_TSK_CreateDecal_V2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.ExecuteUbergraph_BP_MGC_TSK_CreateDecal_V2");

	UBP_MGC_TSK_CreateDecal_V2_C_ExecuteUbergraph_BP_MGC_TSK_CreateDecal_V2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
