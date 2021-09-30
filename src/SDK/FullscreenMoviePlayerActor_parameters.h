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

// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.UserConstructionScript
struct AFullscreenMoviePlayerActor_C_UserConstructionScript_Params
{
};

// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.ReceiveBeginPlay
struct AFullscreenMoviePlayerActor_C_ReceiveBeginPlay_Params
{
};

// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.AttachWidget
struct AFullscreenMoviePlayerActor_C_AttachWidget_Params
{
};

// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.DetachWidget
struct AFullscreenMoviePlayerActor_C_DetachWidget_Params
{
};

// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.DisplaySubtitleWidget
struct AFullscreenMoviePlayerActor_C_DisplaySubtitleWidget_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GroupID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     StringID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.ResetWidgetMaterial
struct AFullscreenMoviePlayerActor_C_ResetWidgetMaterial_Params
{
};

// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.SetupWidgetMaterial
struct AFullscreenMoviePlayerActor_C_SetupWidgetMaterial_Params
{
	class UMaterialInstance*                           Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UManaTexture*                                Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.ExecuteUbergraph_FullscreenMoviePlayerActor
struct AFullscreenMoviePlayerActor_C_ExecuteUbergraph_FullscreenMoviePlayerActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
