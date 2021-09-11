
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

// Function BP_BtlDestructManager.BP_BtlDestructManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlDestructManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlDestructManager.BP_BtlDestructManager_C.UserConstructionScript");

	ABP_BtlDestructManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlDestructManager.BP_BtlDestructManager_C.OnDispersionDestruct
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FBtlDestructCache       Cache                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BtlDestructManager_C::OnDispersionDestruct(const struct FBtlDestructCache& Cache)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlDestructManager.BP_BtlDestructManager_C.OnDispersionDestruct");

	ABP_BtlDestructManager_C_OnDispersionDestruct_Params params;
	params.Cache = Cache;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlDestructManager.BP_BtlDestructManager_C.ExecuteUbergraph_BP_BtlDestructManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlDestructManager_C::ExecuteUbergraph_BP_BtlDestructManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlDestructManager.BP_BtlDestructManager_C.ExecuteUbergraph_BP_BtlDestructManager");

	ABP_BtlDestructManager_C_ExecuteUbergraph_BP_BtlDestructManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
