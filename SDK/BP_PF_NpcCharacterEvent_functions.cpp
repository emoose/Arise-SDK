
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

// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.TermLookAtAim
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcCharacterEvent_C::TermLookAtAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.TermLookAtAim");

	ABP_PF_NpcCharacterEvent_C_TermLookAtAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.SetAutoLookAtAimFromLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ABP_PF_NpcCharacterEvent_C::SetAutoLookAtAimFromLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.SetAutoLookAtAimFromLocation");

	ABP_PF_NpcCharacterEvent_C_SetAutoLookAtAimFromLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.GetAutoLookAtAim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ABP_PF_NpcCharacterEvent_C::GetAutoLookAtAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.GetAutoLookAtAim");

	ABP_PF_NpcCharacterEvent_C_GetAutoLookAtAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.GetLookAtAimNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_PF_NpcCharacterEvent_C::GetLookAtAimNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.GetLookAtAimNum");

	ABP_PF_NpcCharacterEvent_C_GetLookAtAimNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.GetLookAtAimTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ABP_PF_NpcCharacterEvent_C::GetLookAtAimTarget(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.GetLookAtAimTarget");

	ABP_PF_NpcCharacterEvent_C_GetLookAtAimTarget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.InitLookAtAim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcCharacterEvent_C::InitLookAtAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.InitLookAtAim");

	ABP_PF_NpcCharacterEvent_C_InitLookAtAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.SetAutoLookAtAimFromYawPitch
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ABP_PF_NpcCharacterEvent_C::SetAutoLookAtAimFromYawPitch(float Yaw, float Pitch, float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.SetAutoLookAtAimFromYawPitch");

	ABP_PF_NpcCharacterEvent_C_SetAutoLookAtAimFromYawPitch_Params params;
	params.Yaw = Yaw;
	params.Pitch = Pitch;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcCharacterEvent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.UserConstructionScript");

	ABP_PF_NpcCharacterEvent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.ReceiveBuildCharacterInitAnim
// (Event, Public, BlueprintEvent)

void ABP_PF_NpcCharacterEvent_C::ReceiveBuildCharacterInitAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.ReceiveBuildCharacterInitAnim");

	ABP_PF_NpcCharacterEvent_C_ReceiveBuildCharacterInitAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_PF_NpcCharacterEvent_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.ReceiveDestroyed");

	ABP_PF_NpcCharacterEvent_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.ExecuteUbergraph_BP_PF_NpcCharacterEvent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterEvent_C::ExecuteUbergraph_BP_PF_NpcCharacterEvent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.ExecuteUbergraph_BP_PF_NpcCharacterEvent");

	ABP_PF_NpcCharacterEvent_C_ExecuteUbergraph_BP_PF_NpcCharacterEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
