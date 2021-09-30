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

// Function MoviePlayerActor.MoviePlayerActor_C.SetupWidgetMaterial
struct AMoviePlayerActor_C_SetupWidgetMaterial_Params
{
	class UMaterialInstance*                           Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UManaTexture*                                Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoviePlayerActor.MoviePlayerActor_C.ResetWidgetMaterial
struct AMoviePlayerActor_C_ResetWidgetMaterial_Params
{
};

// Function MoviePlayerActor.MoviePlayerActor_C.GetMovieMaterialInterface
struct AMoviePlayerActor_C_GetMovieMaterialInterface_Params
{
	EAriseMovieMaterialType                            MaterialType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasAlphaMovie;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MoviePlayerActor.MoviePlayerActor_C.Stop
struct AMoviePlayerActor_C_Stop_Params
{
};

// Function MoviePlayerActor.MoviePlayerActor_C.DisplaySubtitleWidget
struct AMoviePlayerActor_C_DisplaySubtitleWidget_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GroupID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     StringID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MoviePlayerActor.MoviePlayerActor_C.Load(Name)
struct AMoviePlayerActor_C_Load_Name__Params
{
	struct FString                                     movieName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Loop;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoviePlayerActor.MoviePlayerActor_C.Unload
struct AMoviePlayerActor_C_Unload_Params
{
};

// Function MoviePlayerActor.MoviePlayerActor_C.DetachWidget
struct AMoviePlayerActor_C_DetachWidget_Params
{
};

// Function MoviePlayerActor.MoviePlayerActor_C.AttachWidget
struct AMoviePlayerActor_C_AttachWidget_Params
{
};

// Function MoviePlayerActor.MoviePlayerActor_C.Skip
struct AMoviePlayerActor_C_Skip_Params
{
};

// Function MoviePlayerActor.MoviePlayerActor_C.Pause
struct AMoviePlayerActor_C_Pause_Params
{
};

// Function MoviePlayerActor.MoviePlayerActor_C.Play
struct AMoviePlayerActor_C_Play_Params
{
};

// Function MoviePlayerActor.MoviePlayerActor_C.UserConstructionScript
struct AMoviePlayerActor_C_UserConstructionScript_Params
{
};

// Function MoviePlayerActor.MoviePlayerActor_C.SetupMaterial
struct AMoviePlayerActor_C_SetupMaterial_Params
{
	EAriseMovieMaterialType                            MaterialType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoviePlayerActor.MoviePlayerActor_C.ResetMaterial
struct AMoviePlayerActor_C_ResetMaterial_Params
{
};

// Function MoviePlayerActor.MoviePlayerActor_C.UpdateSubtitle
struct AMoviePlayerActor_C_UpdateSubtitle_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GroupID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     StringID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MoviePlayerActor.MoviePlayerActor_C.ReceiveBeginPlay
struct AMoviePlayerActor_C_ReceiveBeginPlay_Params
{
};

// Function MoviePlayerActor.MoviePlayerActor_C.ReceiveEndPlay
struct AMoviePlayerActor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoviePlayerActor.MoviePlayerActor_C.ExecuteUbergraph_MoviePlayerActor
struct AMoviePlayerActor_C_ExecuteUbergraph_MoviePlayerActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
