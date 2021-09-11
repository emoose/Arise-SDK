
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

// Function BPF_MenuSaveSupport.BPF_MenuSaveSupport_C.GetLatestSlot
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ExcludeAutoSave                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MenuSaveSupport_C::STATIC_GetLatestSlot(bool ExcludeAutoSave, class UObject* __WorldContext, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MenuSaveSupport.BPF_MenuSaveSupport_C.GetLatestSlot");

	UBPF_MenuSaveSupport_C_GetLatestSlot_Params params;
	params.ExcludeAutoSave = ExcludeAutoSave;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BPF_MenuSaveSupport.BPF_MenuSaveSupport_C.GetSaveHeaderData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMenuSaveHeaderData     NewParam                       (Parm, OutParm)

void UBPF_MenuSaveSupport_C::STATIC_GetSaveHeaderData(int Slot, class UObject* __WorldContext, struct FMenuSaveHeaderData* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MenuSaveSupport.BPF_MenuSaveSupport_C.GetSaveHeaderData");

	UBPF_MenuSaveSupport_C_GetSaveHeaderData_Params params;
	params.Slot = Slot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BPF_MenuSaveSupport.BPF_MenuSaveSupport_C.GetSaveDataNum
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MenuSaveSupport_C::STATIC_GetSaveDataNum(class UObject* __WorldContext, int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MenuSaveSupport.BPF_MenuSaveSupport_C.GetSaveDataNum");

	UBPF_MenuSaveSupport_C_GetSaveDataNum_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
