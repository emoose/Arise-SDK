
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

// Function BP_PF_InteractEvent_LadderDown.BP_PF_InteractEvent_LadderDown_C.GetBeginLadderStepNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_PF_LadderActorBase_C* InLadderActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutStepNum                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_InteractEvent_LadderDown_C::GetBeginLadderStepNum(class ABP_PF_LadderActorBase_C* InLadderActor, int* OutStepNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_LadderDown.BP_PF_InteractEvent_LadderDown_C.GetBeginLadderStepNum");

	ABP_PF_InteractEvent_LadderDown_C_GetBeginLadderStepNum_Params params;
	params.InLadderActor = InLadderActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStepNum != nullptr)
		*OutStepNum = params.OutStepNum;
}


// Function BP_PF_InteractEvent_LadderDown.BP_PF_InteractEvent_LadderDown_C.GetBeginPointLocationAndRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_PF_LadderActorBase_C* InLadderActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, IsPlainOldData)

void ABP_PF_InteractEvent_LadderDown_C::GetBeginPointLocationAndRotation(class ABP_PF_LadderActorBase_C* InLadderActor, struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_LadderDown.BP_PF_InteractEvent_LadderDown_C.GetBeginPointLocationAndRotation");

	ABP_PF_InteractEvent_LadderDown_C_GetBeginPointLocationAndRotation_Params params;
	params.InLadderActor = InLadderActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function BP_PF_InteractEvent_LadderDown.BP_PF_InteractEvent_LadderDown_C.GetBeginAnimCommand
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 OutCommand                     (Parm, OutParm, ZeroConstructor)

void ABP_PF_InteractEvent_LadderDown_C::GetBeginAnimCommand(struct FString* OutCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_LadderDown.BP_PF_InteractEvent_LadderDown_C.GetBeginAnimCommand");

	ABP_PF_InteractEvent_LadderDown_C_GetBeginAnimCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCommand != nullptr)
		*OutCommand = params.OutCommand;
}


// Function BP_PF_InteractEvent_LadderDown.BP_PF_InteractEvent_LadderDown_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_InteractEvent_LadderDown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_LadderDown.BP_PF_InteractEvent_LadderDown_C.UserConstructionScript");

	ABP_PF_InteractEvent_LadderDown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
