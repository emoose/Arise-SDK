
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

// Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.FontOpenAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C::FontOpenAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.FontOpenAnim");

	UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C_FontOpenAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.ChangeDefaultVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C::ChangeDefaultVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.ChangeDefaultVisible");

	UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C_ChangeDefaultVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            StepNo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C::Refresh(const struct FString& QuestID, int StepNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.Refresh");

	UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C_Refresh_Params params;
	params.QuestID = QuestID;
	params.StepNo = StepNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.CustomEvent_Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            StepNo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C::CustomEvent_Refresh(const struct FString& QuestID, int StepNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.CustomEvent_Refresh");

	UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C_CustomEvent_Refresh_Params params;
	params.QuestID = QuestID;
	params.StepNo = StepNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_QUE_STR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_QUE_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_QUE_STR");

	UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_QUE_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
