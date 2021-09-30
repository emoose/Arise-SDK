
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

// Function BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C.IsRunningGroupJump
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bRunning                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Interface_C::IsRunningGroupJump(bool* bRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C.IsRunningGroupJump");

	UBP_MNU_FREE_CURSOR_Interface_C_IsRunningGroupJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRunning != nullptr)
		*bRunning = params.bRunning;
}


// Function BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C.ForceRunGroupJump
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Interface_C::ForceRunGroupJump(int Group, class UWidget* To, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C.ForceRunGroupJump");

	UBP_MNU_FREE_CURSOR_Interface_C_ForceRunGroupJump_Params params;
	params.Group = Group;
	params.To = To;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C.MouseUnhoverAll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Interface_C::MouseUnhoverAll(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C.MouseUnhoverAll");

	UBP_MNU_FREE_CURSOR_Interface_C_MouseUnhoverAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C.MouseUnhover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Interface_C::MouseUnhover(class UWidget* Widget, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C.MouseUnhover");

	UBP_MNU_FREE_CURSOR_Interface_C_MouseUnhover_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C.MouseHover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_FREE_CURSOR_Interface_C::MouseHover(class UWidget* Widget, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C.MouseHover");

	UBP_MNU_FREE_CURSOR_Interface_C_MouseHover_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
