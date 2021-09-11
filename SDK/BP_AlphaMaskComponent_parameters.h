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

// Function BP_AlphaMaskComponent.BP_AlphaMaskComponent_C.OnFailed_EB66E0744302EDFB796495950350D143
struct UBP_AlphaMaskComponent_C_OnFailed_EB66E0744302EDFB796495950350D143_Params
{
	TEnumAsByte<EAlphaMask>                            Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AlphaMaskComponent.BP_AlphaMaskComponent_C.OnComplete_EB66E0744302EDFB796495950350D143
struct UBP_AlphaMaskComponent_C_OnComplete_EB66E0744302EDFB796495950350D143_Params
{
	TEnumAsByte<EAlphaMask>                            Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AlphaMaskComponent.BP_AlphaMaskComponent_C.OnFailed_0099894848E9A789DB9AB7996704CB6C
struct UBP_AlphaMaskComponent_C_OnFailed_0099894848E9A789DB9AB7996704CB6C_Params
{
	TEnumAsByte<EAlphaMask>                            Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AlphaMaskComponent.BP_AlphaMaskComponent_C.OnComplete_0099894848E9A789DB9AB7996704CB6C
struct UBP_AlphaMaskComponent_C_OnComplete_0099894848E9A789DB9AB7996704CB6C_Params
{
	TEnumAsByte<EAlphaMask>                            Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AlphaMaskComponent.BP_AlphaMaskComponent_C.FadeInMeshes
struct UBP_AlphaMaskComponent_C_FadeInMeshes_Params
{
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMeshComponent*>                      Meshes;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_AlphaMaskComponent.BP_AlphaMaskComponent_C.FadeOutMeshes
struct UBP_AlphaMaskComponent_C_FadeOutMeshes_Params
{
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMeshComponent*>                      Meshes;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_AlphaMaskComponent.BP_AlphaMaskComponent_C.ExecuteUbergraph_BP_AlphaMaskComponent
struct UBP_AlphaMaskComponent_C_ExecuteUbergraph_BP_AlphaMaskComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
