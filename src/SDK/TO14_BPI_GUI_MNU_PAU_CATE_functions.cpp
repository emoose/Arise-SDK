
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

// Function TO14_BPI_GUI_MNU_PAU_CATE.TO14_BPI_GUI_MNU_PAU_CATE_C.CB_MouseRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CATE_C::CB_MouseRequest(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE.TO14_BPI_GUI_MNU_PAU_CATE_C.CB_MouseRequest");

	UTO14_BPI_GUI_MNU_PAU_CATE_C_CB_MouseRequest_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE.TO14_BPI_GUI_MNU_PAU_CATE_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckOnly                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChanged                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CATE_C::PadWork(class AMenuPadProcess* PadProcess, bool CheckOnly, bool* IsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE.TO14_BPI_GUI_MNU_PAU_CATE_C.PadWork");

	UTO14_BPI_GUI_MNU_PAU_CATE_C_PadWork_Params params;
	params.PadProcess = PadProcess;
	params.CheckOnly = CheckOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsChanged != nullptr)
		*IsChanged = params.IsChanged;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE.TO14_BPI_GUI_MNU_PAU_CATE_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_CATE_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE.TO14_BPI_GUI_MNU_PAU_CATE_C.Initialize");

	UTO14_BPI_GUI_MNU_PAU_CATE_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE.TO14_BPI_GUI_MNU_PAU_CATE_C.SetActiveIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CATE_C::SetActiveIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE.TO14_BPI_GUI_MNU_PAU_CATE_C.SetActiveIndex");

	UTO14_BPI_GUI_MNU_PAU_CATE_C_SetActiveIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE.TO14_BPI_GUI_MNU_PAU_CATE_C.SetTextData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           LeftText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           RightText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 LeftButtonLabel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 RightButtonLabel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_PAU_CATE_C::SetTextData(const struct FModifiedText& LeftText, const struct FModifiedText& RightText, const struct FString& LeftButtonLabel, const struct FString& RightButtonLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE.TO14_BPI_GUI_MNU_PAU_CATE_C.SetTextData");

	UTO14_BPI_GUI_MNU_PAU_CATE_C_SetTextData_Params params;
	params.LeftText = LeftText;
	params.RightText = RightText;
	params.LeftButtonLabel = LeftButtonLabel;
	params.RightButtonLabel = RightButtonLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
