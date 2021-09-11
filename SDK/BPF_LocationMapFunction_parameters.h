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

// Function BPF_LocationMapFunction.BPF_LocationMapFunction_C.ChangedQuestGuidFlag
struct UBPF_LocationMapFunction_C_ChangedQuestGuidFlag_Params
{
	struct FString                                     FlagName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_LocationMapFunction.BPF_LocationMapFunction_C.RemoveLocator
struct UBPF_LocationMapFunction_C_RemoveLocator_Params
{
	struct FString                                     LocatorName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_LocationMapFunction.BPF_LocationMapFunction_C.AddLocator
struct UBPF_LocationMapFunction_C_AddLocator_Params
{
	struct FString                                     LocatorName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EMapIconType                                       IconType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_LocationMapFunction.BPF_LocationMapFunction_C.GetLocationMapManager
struct UBPF_LocationMapFunction_C_GetLocationMapManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_LocationMapManager_C*                    LocationMapManager;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
