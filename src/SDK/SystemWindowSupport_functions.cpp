
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

// Function SystemWindowSupport.SystemWindowSupport_C.GetLastResult
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USystemWindowSupport_C::STATIC_GetLastResult(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function SystemWindowSupport.SystemWindowSupport_C.GetLastResult");

	USystemWindowSupport_C_GetLastResult_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SystemWindowSupport.SystemWindowSupport_C.IsCloseSystemWindow
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsClosed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USystemWindowSupport_C::STATIC_IsCloseSystemWindow(class UObject* __WorldContext, bool* IsClosed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SystemWindowSupport.SystemWindowSupport_C.IsCloseSystemWindow");

	USystemWindowSupport_C_IsCloseSystemWindow_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClosed != nullptr)
		*IsClosed = params.IsClosed;
}


// Function SystemWindowSupport.SystemWindowSupport_C.OpenSelectWindow
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FModifiedText>   Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<ESystemWindowAutoPosition> Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USystemWindowSupport_C::STATIC_OpenSelectWindow(const struct FModifiedText& Title, const struct FModifiedText& Message, TEnumAsByte<ESystemWindowAutoPosition> Position, class UObject* __WorldContext, TArray<struct FModifiedText>* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function SystemWindowSupport.SystemWindowSupport_C.OpenSelectWindow");

	USystemWindowSupport_C_OpenSelectWindow_Params params;
	params.Title = Title;
	params.Message = Message;
	params.Position = Position;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selection != nullptr)
		*Selection = params.Selection;
}


// Function SystemWindowSupport.SystemWindowSupport_C.OpenMessageWindow
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ESystemWindowAutoPosition> Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USystemWindowSupport_C::STATIC_OpenMessageWindow(const struct FModifiedText& Title, const struct FModifiedText& Message, TEnumAsByte<ESystemWindowAutoPosition> Position, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function SystemWindowSupport.SystemWindowSupport_C.OpenMessageWindow");

	USystemWindowSupport_C_OpenMessageWindow_Params params;
	params.Title = Title;
	params.Message = Message;
	params.Position = Position;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
