
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

// Function BP_PF_MAPOBJ_MainQuestPoint.BP_PF_MAPOBJ_MainQuestPoint_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_PF_MAPOBJ_MainQuestPoint_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MainQuestPoint.BP_PF_MAPOBJ_MainQuestPoint_C.GetOutlinerFolderPath");

	ABP_PF_MAPOBJ_MainQuestPoint_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_MainQuestPoint.BP_PF_MAPOBJ_MainQuestPoint_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PF_MAPOBJ_MainQuestPoint_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MainQuestPoint.BP_PF_MAPOBJ_MainQuestPoint_C.GetOutlinerLabelName");

	ABP_PF_MAPOBJ_MainQuestPoint_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_MainQuestPoint.BP_PF_MAPOBJ_MainQuestPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_MainQuestPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MainQuestPoint.BP_PF_MAPOBJ_MainQuestPoint_C.UserConstructionScript");

	ABP_PF_MAPOBJ_MainQuestPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MainQuestPoint.BP_PF_MAPOBJ_MainQuestPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_MAPOBJ_MainQuestPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MainQuestPoint.BP_PF_MAPOBJ_MainQuestPoint_C.ReceiveBeginPlay");

	ABP_PF_MAPOBJ_MainQuestPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_MainQuestPoint.BP_PF_MAPOBJ_MainQuestPoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_MainQuestPoint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_MainQuestPoint_C::ExecuteUbergraph_BP_PF_MAPOBJ_MainQuestPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_MainQuestPoint.BP_PF_MAPOBJ_MainQuestPoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_MainQuestPoint");

	ABP_PF_MAPOBJ_MainQuestPoint_C_ExecuteUbergraph_BP_PF_MAPOBJ_MainQuestPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
