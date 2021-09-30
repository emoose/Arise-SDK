
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

// Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_EnSym_FindedBox_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.GetOutlinerFolderPath");

	ABP_EnSym_FindedBox_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_EnSym_FindedBox_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.GetOutlinerLabelName");

	ABP_EnSym_FindedBox_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.GetBoxParameter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (Parm, OutParm, ZeroConstructor)
// struct FVector                 BoxSize                        (Parm, OutParm, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_EnSym_FindedBox_C::GetBoxParameter(struct FString* actorId, struct FVector* BoxSize, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.GetBoxParameter");

	ABP_EnSym_FindedBox_C_GetBoxParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (actorId != nullptr)
		*actorId = params.actorId;
	if (BoxSize != nullptr)
		*BoxSize = params.BoxSize;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EnSym_FindedBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.UserConstructionScript");

	ABP_EnSym_FindedBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EnSym_FindedBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.ReceiveBeginPlay");

	ABP_EnSym_FindedBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.ExecuteUbergraph_BP_EnSym_FindedBox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnSym_FindedBox_C::ExecuteUbergraph_BP_EnSym_FindedBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.ExecuteUbergraph_BP_EnSym_FindedBox");

	ABP_EnSym_FindedBox_C_ExecuteUbergraph_BP_EnSym_FindedBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
