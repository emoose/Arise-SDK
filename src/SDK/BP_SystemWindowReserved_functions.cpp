
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

// Function BP_SystemWindowReserved.BP_SystemWindowReserved_C.OpenSysMessage_System
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindowReserved_C::STATIC_OpenSysMessage_System(const struct FModifiedText& Title, const struct FModifiedText& Message, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindowReserved.BP_SystemWindowReserved_C.OpenSysMessage_System");

	UBP_SystemWindowReserved_C_OpenSysMessage_System_Params params;
	params.Title = Title;
	params.Message = Message;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindowReserved.BP_SystemWindowReserved_C.SysForceDecide_System
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindowReserved_C::STATIC_SysForceDecide_System(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindowReserved.BP_SystemWindowReserved_C.SysForceDecide_System");

	UBP_SystemWindowReserved_C_SysForceDecide_System_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindowReserved.BP_SystemWindowReserved_C.GetSysLastResultPure_System
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindowReserved_C::STATIC_GetSysLastResultPure_System(class UObject* __WorldContext, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindowReserved.BP_SystemWindowReserved_C.GetSysLastResultPure_System");

	UBP_SystemWindowReserved_C_GetSysLastResultPure_System_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SystemWindowReserved.BP_SystemWindowReserved_C.IsSysClose_System
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindowReserved_C::STATIC_IsSysClose_System(class UObject* __WorldContext, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindowReserved.BP_SystemWindowReserved_C.IsSysClose_System");

	UBP_SystemWindowReserved_C_IsSysClose_System_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_SystemWindowReserved.BP_SystemWindowReserved_C.OpenSysSelect_System
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FModifiedText>   Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            DefaultIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumPerPage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableCancel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindowReserved_C::STATIC_OpenSysSelect_System(const struct FModifiedText& Title, const struct FModifiedText& Message, int DefaultIndex, int NumPerPage, bool EnableCancel, class UObject* __WorldContext, TArray<struct FModifiedText>* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindowReserved.BP_SystemWindowReserved_C.OpenSysSelect_System");

	UBP_SystemWindowReserved_C_OpenSysSelect_System_Params params;
	params.Title = Title;
	params.Message = Message;
	params.DefaultIndex = DefaultIndex;
	params.NumPerPage = NumPerPage;
	params.EnableCancel = EnableCancel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selection != nullptr)
		*Selection = params.Selection;
}


// Function BP_SystemWindowReserved.BP_SystemWindowReserved_C.GetSysWidget_System
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SystemWindowReserved_C::STATIC_GetSysWidget_System(class UObject* __WorldContext, class UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindowReserved.BP_SystemWindowReserved_C.GetSysWidget_System");

	UBP_SystemWindowReserved_C_GetSysWidget_System_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
