
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

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.Close");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.Open
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.Open");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.CustomEvent_Refresh
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MainQuestID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MainStepIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SubQuestIDs                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    SubStepIndices                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::CustomEvent_Refresh(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString> SubQuestIDs, TArray<int> SubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.CustomEvent_Refresh");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_CustomEvent_Refresh_Params params;
	params.MainQuestID = MainQuestID;
	params.MainStepIndex = MainStepIndex;
	params.SubQuestIDs = SubQuestIDs;
	params.SubStepIndices = SubStepIndices;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewOpenFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::OnViewOpenFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewOpenFinished");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewOpenFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewClose");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewCloseFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::OnViewCloseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewCloseFinished");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewCloseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.Construct");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_QUE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_QUE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_QUE");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_QUE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewCloseFinishedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::OnViewCloseFinishedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewCloseFinishedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewCloseFinishedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewCloseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::OnViewCloseEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewCloseEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewCloseEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewOpenFinishedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::OnViewOpenFinishedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewOpenFinishedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewOpenFinishedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewOpenEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::OnViewOpenEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewOpenEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewOpenEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnRefreshSubQuestEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::OnRefreshSubQuestEvent__DelegateSignature(const struct FString& QuestID, int StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnRefreshSubQuestEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnRefreshSubQuestEvent__DelegateSignature_Params params;
	params.QuestID = QuestID;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnRefreshMainQuestEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_QUE_C::OnRefreshMainQuestEvent__DelegateSignature(const struct FString& QuestID, int StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnRefreshMainQuestEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnRefreshMainQuestEvent__DelegateSignature_Params params;
	params.QuestID = QuestID;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
