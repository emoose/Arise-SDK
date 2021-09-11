#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPF_MenuSaveSupport.BPF_MenuSaveSupport_C.GetLatestSlot
struct UBPF_MenuSaveSupport_C_GetLatestSlot_Params
{
	bool                                               ExcludeAutoSave;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_MenuSaveSupport.BPF_MenuSaveSupport_C.GetSaveHeaderData
struct UBPF_MenuSaveSupport_C_GetSaveHeaderData_Params
{
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMenuSaveHeaderData                         NewParam;                                                 // (Parm, OutParm)
};

// Function BPF_MenuSaveSupport.BPF_MenuSaveSupport_C.GetSaveDataNum
struct UBPF_MenuSaveSupport_C_GetSaveDataNum_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
