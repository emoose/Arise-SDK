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

// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.BPGeneralFunctionBool
struct ABP_StreamLevelLoader_C_BPGeneralFunctionBool_Params
{
	struct FName                                       OpertionName;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TMap<struct FName, struct FString>                 Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.DumpCurrentLoadRequest
struct ABP_StreamLevelLoader_C_DumpCurrentLoadRequest_Params
{
};

// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.UserConstructionScript
struct ABP_StreamLevelLoader_C_UserConstructionScript_Params
{
};

// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.ReceiveBeginPlay
struct ABP_StreamLevelLoader_C_ReceiveBeginPlay_Params
{
};

// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.OnChangeDebugValue
struct ABP_StreamLevelLoader_C_OnChangeDebugValue_Params
{
};

// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.BPE_DoLoadStreamLevel
struct ABP_StreamLevelLoader_C_BPE_DoLoadStreamLevel_Params
{
};

// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.BPE_DoUnloadStreamLevel
struct ABP_StreamLevelLoader_C_BPE_DoUnloadStreamLevel_Params
{
};

// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.BPE_DoUnloadAll
struct ABP_StreamLevelLoader_C_BPE_DoUnloadAll_Params
{
};

// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.UnloadExtraEvent
struct ABP_StreamLevelLoader_C_UnloadExtraEvent_Params
{
	TArray<struct FName>                               Levels;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.ReceiveTick
struct ABP_StreamLevelLoader_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.ExecuteUbergraph_BP_StreamLevelLoader
struct ABP_StreamLevelLoader_C_ExecuteUbergraph_BP_StreamLevelLoader_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.EventFinishedCleanup__DelegateSignature
struct ABP_StreamLevelLoader_C_EventFinishedCleanup__DelegateSignature_Params
{
};

// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.EventFinishedLoad__DelegateSignature
struct ABP_StreamLevelLoader_C_EventFinishedLoad__DelegateSignature_Params
{
};

// Function BP_StreamLevelLoader.BP_StreamLevelLoader_C.EventFinishedUnload__DelegateSignature
struct ABP_StreamLevelLoader_C_EventFinishedUnload__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
