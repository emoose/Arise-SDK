
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

// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_EnSymScenarioLayer_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.GetOutlinerFolderPath");

	ABP_EnSymScenarioLayer_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_EnSymScenarioLayer_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.GetOutlinerLabelName");

	ABP_EnSymScenarioLayer_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.OutputParameter
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FEncountSymbolLayerParamData Output                         (Parm, OutParm)

void ABP_EnSymScenarioLayer_C::OutputParameter(struct FEncountSymbolLayerParamData* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.OutputParameter");

	ABP_EnSymScenarioLayer_C_OutputParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.SetActivate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EnSymScenarioLayer_C::SetActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.SetActivate");

	ABP_EnSymScenarioLayer_C_SetActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.IsScenarioCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UseChangeFlag                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EnSymScenarioLayer_C::IsScenarioCondition(bool UseChangeFlag, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.IsScenarioCondition");

	ABP_EnSymScenarioLayer_C_IsScenarioCondition_Params params;
	params.UseChangeFlag = UseChangeFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EnSymScenarioLayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.UserConstructionScript");

	ABP_EnSymScenarioLayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.«0¹0¿0à0¤0Ù0ó0È0_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnSymScenarioLayer_C::«0¹0¿0à0¤0Ù0ó0È0_1(int counter, int Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.«0¹0¿0à0¤0Ù0ó0È0_1");

	ABP_EnSymScenarioLayer_C_«0¹0¿0à0¤0Ù0ó0È0_1_Params params;
	params.counter = counter;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.«0¹0¿0à0¤0Ù0ó0È0_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnSymScenarioLayer_C::«0¹0¿0à0¤0Ù0ó0È0_2(int Flag, bool bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.«0¹0¿0à0¤0Ù0ó0È0_2");

	ABP_EnSymScenarioLayer_C_«0¹0¿0à0¤0Ù0ó0È0_2_Params params;
	params.Flag = Flag;
	params.bValid = bValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.OnInitCallback
// (BlueprintCallable, BlueprintEvent)

void ABP_EnSymScenarioLayer_C::OnInitCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.OnInitCallback");

	ABP_EnSymScenarioLayer_C_OnInitCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.OnEndCallback
// (BlueprintCallable, BlueprintEvent)

void ABP_EnSymScenarioLayer_C::OnEndCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.OnEndCallback");

	ABP_EnSymScenarioLayer_C_OnEndCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EnSymScenarioLayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.ReceiveBeginPlay");

	ABP_EnSymScenarioLayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnSymScenarioLayer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.ReceiveEndPlay");

	ABP_EnSymScenarioLayer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.ExecuteUbergraph_BP_EnSymScenarioLayer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnSymScenarioLayer_C::ExecuteUbergraph_BP_EnSymScenarioLayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.ExecuteUbergraph_BP_EnSymScenarioLayer");

	ABP_EnSymScenarioLayer_C_ExecuteUbergraph_BP_EnSymScenarioLayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
