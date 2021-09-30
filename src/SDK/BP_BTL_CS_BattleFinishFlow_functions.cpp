
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

// Function BP_BTL_CS_BattleFinishFlow.BP_BTL_CS_BattleFinishFlow_C.GetEventNotifyName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_BTL_CS_BattleFinishFlow_C::GetEventNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_CS_BattleFinishFlow.BP_BTL_CS_BattleFinishFlow_C.GetEventNotifyName");

	UBP_BTL_CS_BattleFinishFlow_C_GetEventNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_CS_BattleFinishFlow.BP_BTL_CS_BattleFinishFlow_C.Received_BeginEvent
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_CS_BattleFinishFlow_C::Received_BeginEvent(class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_CS_BattleFinishFlow.BP_BTL_CS_BattleFinishFlow_C.Received_BeginEvent");

	UBP_BTL_CS_BattleFinishFlow_C_Received_BeginEvent_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
