
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

// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.GetDebShowInfoMessage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutMessage                     (Parm, OutParm, ZeroConstructor)
// struct FLinearColor            OutColor                       (Parm, OutParm, IsPlainOldData)

void ABP_PF_MAPOBJ_SwitchModel_C::GetDebShowInfoMessage(bool* bValid, struct FString* OutMessage, struct FLinearColor* OutColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.GetDebShowInfoMessage");

	ABP_PF_MAPOBJ_SwitchModel_C_GetDebShowInfoMessage_Params params;

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


// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.SetModelCollisionProfile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InCollisionProfileName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_SwitchModel_C::SetModelCollisionProfile(const struct FName& InCollisionProfileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.SetModelCollisionProfile");

	ABP_PF_MAPOBJ_SwitchModel_C_SetModelCollisionProfile_Params params;
	params.InCollisionProfileName = InCollisionProfileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.PlayGatheringEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_SwitchModel_C::PlayGatheringEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.PlayGatheringEffect");

	ABP_PF_MAPOBJ_SwitchModel_C_PlayGatheringEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.CollectionFadeObjects
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_SwitchModel_C::CollectionFadeObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.CollectionFadeObjects");

	ABP_PF_MAPOBJ_SwitchModel_C_CollectionFadeObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.SetHideModel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_SwitchModel_C::SetHideModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.SetHideModel");

	ABP_PF_MAPOBJ_SwitchModel_C_SetHideModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.SetShowModel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_SwitchModel_C::SetShowModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.SetShowModel");

	ABP_PF_MAPOBJ_SwitchModel_C_SetShowModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.BuildModel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_SwitchModel_C::BuildModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.BuildModel");

	ABP_PF_MAPOBJ_SwitchModel_C_BuildModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_SwitchModel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.UserConstructionScript");

	ABP_PF_MAPOBJ_SwitchModel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.ReceiveUpdateActive
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_SwitchModel_C::ReceiveUpdateActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.ReceiveUpdateActive");

	ABP_PF_MAPOBJ_SwitchModel_C_ReceiveUpdateActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_MAPOBJ_SwitchModel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.ReceiveBeginPlay");

	ABP_PF_MAPOBJ_SwitchModel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.On Build Completed
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_SwitchModel_C::On_Build_Completed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.On Build Completed");

	ABP_PF_MAPOBJ_SwitchModel_C_On_Build_Completed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_SwitchModel_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.ReceiveEndPlay");

	ABP_PF_MAPOBJ_SwitchModel_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.ReceiveOnConstruction
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PF_MAPOBJ_SwitchModel_C::ReceiveOnConstruction(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.ReceiveOnConstruction");

	ABP_PF_MAPOBJ_SwitchModel_C_ReceiveOnConstruction_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.ExecuteUbergraph_BP_PF_MAPOBJ_SwitchModel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_SwitchModel_C::ExecuteUbergraph_BP_PF_MAPOBJ_SwitchModel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_SwitchModel.BP_PF_MAPOBJ_SwitchModel_C.ExecuteUbergraph_BP_PF_MAPOBJ_SwitchModel");

	ABP_PF_MAPOBJ_SwitchModel_C_ExecuteUbergraph_BP_PF_MAPOBJ_SwitchModel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
