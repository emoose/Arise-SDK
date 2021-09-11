
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

// Function BP_SysWin_PartsBase.BP_SysWin_PartsBase_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SysWin_PartsBase_C::PadWork(class AMenuPadProcess* PadProcess, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SysWin_PartsBase.BP_SysWin_PartsBase_C.PadWork");

	UBP_SysWin_PartsBase_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function BP_SysWin_PartsBase.BP_SysWin_PartsBase_C.Cancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_SysWin_PartsBase_C::Cancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SysWin_PartsBase.BP_SysWin_PartsBase_C.Cancel__DelegateSignature");

	UBP_SysWin_PartsBase_C_Cancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SysWin_PartsBase.BP_SysWin_PartsBase_C.Decide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SysWin_PartsBase_C::Decide__DelegateSignature(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SysWin_PartsBase.BP_SysWin_PartsBase_C.Decide__DelegateSignature");

	UBP_SysWin_PartsBase_C_Decide__DelegateSignature_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
