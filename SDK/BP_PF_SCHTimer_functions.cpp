
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

// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.K2_FinalCheck
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShortChatConditionData Condition                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_PF_SCHTimer_C::K2_FinalCheck(const struct FShortChatConditionData& Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.K2_FinalCheck");

	UBP_PF_SCHTimer_C_K2_FinalCheck_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.CollectConditionList
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PF_SCHTimer_C::CollectConditionList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.CollectConditionList");

	UBP_PF_SCHTimer_C_CollectConditionList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.Bind
// (BlueprintCallable, BlueprintEvent)

void UBP_PF_SCHTimer_C::Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.Bind");

	UBP_PF_SCHTimer_C_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.Unbind
// (BlueprintCallable, BlueprintEvent)

void UBP_PF_SCHTimer_C::Unbind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.Unbind");

	UBP_PF_SCHTimer_C_Unbind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.OnMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_PF_SCHTimer_C::OnMapChange(const struct FString& OldMapName, const struct FString& NewMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.OnMapChange");

	UBP_PF_SCHTimer_C_OnMapChange_Params params;
	params.OldMapName = OldMapName;
	params.NewMapName = NewMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.OnEndBattleScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlResultInfo          ResultInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PF_SCHTimer_C::OnEndBattleScene(const struct FBtlResultInfo& ResultInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.OnEndBattleScene");

	UBP_PF_SCHTimer_C_OnEndBattleScene_Params params;
	params.ResultInfo = ResultInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.K2_Initialize
// (Event, Public, BlueprintEvent)

void UBP_PF_SCHTimer_C::K2_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.K2_Initialize");

	UBP_PF_SCHTimer_C_K2_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.K2_Terminate
// (Event, Public, BlueprintEvent)

void UBP_PF_SCHTimer_C::K2_Terminate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.K2_Terminate");

	UBP_PF_SCHTimer_C_K2_Terminate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.ExecuteUbergraph_BP_PF_SCHTimer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_SCHTimer_C::ExecuteUbergraph_BP_PF_SCHTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.ExecuteUbergraph_BP_PF_SCHTimer");

	UBP_PF_SCHTimer_C_ExecuteUbergraph_BP_PF_SCHTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
