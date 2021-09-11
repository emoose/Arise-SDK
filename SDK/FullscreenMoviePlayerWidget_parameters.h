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

// Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.Construct
struct UFullscreenMoviePlayerWidget_C_Construct_Params
{
};

// Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.Tick
struct UFullscreenMoviePlayerWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.SetupMovie
struct UFullscreenMoviePlayerWidget_C_SetupMovie_Params
{
	class UMaterialInstance*                           Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UManaTexture*                                Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.DisplaySubtitle
struct UFullscreenMoviePlayerWidget_C_DisplaySubtitle_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GroupID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     StringID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.SetFadeColor
struct UFullscreenMoviePlayerWidget_C_SetFadeColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.SetFadeOpacity
struct UFullscreenMoviePlayerWidget_C_SetFadeOpacity_Params
{
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.ExecuteUbergraph_FullscreenMoviePlayerWidget
struct UFullscreenMoviePlayerWidget_C_ExecuteUbergraph_FullscreenMoviePlayerWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
