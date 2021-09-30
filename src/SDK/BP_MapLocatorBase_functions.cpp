
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

// Function BP_MapLocatorBase.BP_MapLocatorBase_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_MapLocatorBase_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLocatorBase.BP_MapLocatorBase_C.GetOutlinerFolderPath");

	ABP_MapLocatorBase_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MapLocatorBase.BP_MapLocatorBase_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_MapLocatorBase_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLocatorBase.BP_MapLocatorBase_C.GetOutlinerLabelName");

	ABP_MapLocatorBase_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MapLocatorBase.BP_MapLocatorBase_C.ChangeTextLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapLocatorBase_C::ChangeTextLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLocatorBase.BP_MapLocatorBase_C.ChangeTextLabel");

	ABP_MapLocatorBase_C_ChangeTextLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLocatorBase.BP_MapLocatorBase_C.DrawDebugInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapLocatorBase_C::DrawDebugInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLocatorBase.BP_MapLocatorBase_C.DrawDebugInfo");

	ABP_MapLocatorBase_C_DrawDebugInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLocatorBase.BP_MapLocatorBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapLocatorBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLocatorBase.BP_MapLocatorBase_C.UserConstructionScript");

	ABP_MapLocatorBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLocatorBase.BP_MapLocatorBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapLocatorBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLocatorBase.BP_MapLocatorBase_C.ReceiveBeginPlay");

	ABP_MapLocatorBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLocatorBase.BP_MapLocatorBase_C.ExecuteUbergraph_BP_MapLocatorBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapLocatorBase_C::ExecuteUbergraph_BP_MapLocatorBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLocatorBase.BP_MapLocatorBase_C.ExecuteUbergraph_BP_MapLocatorBase");

	ABP_MapLocatorBase_C_ExecuteUbergraph_BP_MapLocatorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
