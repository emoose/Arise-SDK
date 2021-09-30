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

// Function UMGMovieActor.UMGMovieActor_C.IsPlay
struct AUMGMovieActor_C_IsPlay_Params
{
	bool                                               IsPlay;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMGMovieActor.UMGMovieActor_C.ActorRemove
struct AUMGMovieActor_C_ActorRemove_Params
{
};

// Function UMGMovieActor.UMGMovieActor_C.GetMovieMaterial
struct AUMGMovieActor_C_GetMovieMaterial_Params
{
	class UMaterialInstance*                           MaterialInstance;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMGMovieActor.UMGMovieActor_C.Reset
struct AUMGMovieActor_C_Reset_Params
{
};

// Function UMGMovieActor.UMGMovieActor_C.UserConstructionScript
struct AUMGMovieActor_C_UserConstructionScript_Params
{
};

// Function UMGMovieActor.UMGMovieActor_C.ReceiveBeginPlay
struct AUMGMovieActor_C_ReceiveBeginPlay_Params
{
};

// Function UMGMovieActor.UMGMovieActor_C.ReceiveTick
struct AUMGMovieActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMGMovieActor.UMGMovieActor_C.UpdateManaStatus
struct AUMGMovieActor_C_UpdateManaStatus_Params
{
	EManaComponentStatus                               Status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMGMovieActor.UMGMovieActor_C.SetupWidgetMaterial
struct AUMGMovieActor_C_SetupWidgetMaterial_Params
{
	class UMaterialInstance*                           Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UManaTexture*                                Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMGMovieActor.UMGMovieActor_C.ResetWidgetMaterial
struct AUMGMovieActor_C_ResetWidgetMaterial_Params
{
};

// Function UMGMovieActor.UMGMovieActor_C.ExecuteUbergraph_UMGMovieActor
struct AUMGMovieActor_C_ExecuteUbergraph_UMGMovieActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMGMovieActor.UMGMovieActor_C.OnMovieStatusChanged__DelegateSignature
struct AUMGMovieActor_C_OnMovieStatusChanged__DelegateSignature_Params
{
	EManaComponentStatus                               Status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
