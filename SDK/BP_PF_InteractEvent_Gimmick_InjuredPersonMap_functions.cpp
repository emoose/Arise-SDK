
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

// Function BP_PF_InteractEvent_Gimmick_InjuredPersonMap.BP_PF_InteractEvent_Gimmick_InjuredPersonMap_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_InteractEvent_Gimmick_InjuredPersonMap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPersonMap.BP_PF_InteractEvent_Gimmick_InjuredPersonMap_C.UserConstructionScript");

	ABP_PF_InteractEvent_Gimmick_InjuredPersonMap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEvent_Gimmick_InjuredPersonMap.BP_PF_InteractEvent_Gimmick_InjuredPersonMap_C.K2_Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_InteractEvent_Gimmick_InjuredPersonMap_C::K2_Execute(class AActor* Sender, class AActor* Receiver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPersonMap.BP_PF_InteractEvent_Gimmick_InjuredPersonMap_C.K2_Execute");

	ABP_PF_InteractEvent_Gimmick_InjuredPersonMap_C_K2_Execute_Params params;
	params.Sender = Sender;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEvent_Gimmick_InjuredPersonMap.BP_PF_InteractEvent_Gimmick_InjuredPersonMap_C.ExecuteUbergraph_BP_PF_InteractEvent_Gimmick_InjuredPersonMap
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_InteractEvent_Gimmick_InjuredPersonMap_C::ExecuteUbergraph_BP_PF_InteractEvent_Gimmick_InjuredPersonMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPersonMap.BP_PF_InteractEvent_Gimmick_InjuredPersonMap_C.ExecuteUbergraph_BP_PF_InteractEvent_Gimmick_InjuredPersonMap");

	ABP_PF_InteractEvent_Gimmick_InjuredPersonMap_C_ExecuteUbergraph_BP_PF_InteractEvent_Gimmick_InjuredPersonMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
