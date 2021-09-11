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

// Function MovieWidget.MovieWidget_C.SetupMovieWidget
struct UMovieWidget_C_SetupMovieWidget_Params
{
	class UMaterialInstance*                           Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UManaTexture*                                Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieWidget.MovieWidget_C.IsMoviePlay
struct UMovieWidget_C_IsMoviePlay_Params
{
	bool                                               IsPlay;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MovieWidget.MovieWidget_C.MovieUnload
struct UMovieWidget_C_MovieUnload_Params
{
};

// Function MovieWidget.MovieWidget_C.MovieLoad
struct UMovieWidget_C_MovieLoad_Params
{
	struct FString                                     movieName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Loop;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieWidget.MovieWidget_C.SetMovieTexture
struct UMovieWidget_C_SetMovieTexture_Params
{
	struct FString                                     movieName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MovieWidget.MovieWidget_C.DestroyMovieActor
struct UMovieWidget_C_DestroyMovieActor_Params
{
};

// Function MovieWidget.MovieWidget_C.IsMovieEnd
struct UMovieWidget_C_IsMovieEnd_Params
{
	bool                                               IsEnd;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MovieWidget.MovieWidget_C.MovieStop
struct UMovieWidget_C_MovieStop_Params
{
};

// Function MovieWidget.MovieWidget_C.MoviePause
struct UMovieWidget_C_MoviePause_Params
{
};

// Function MovieWidget.MovieWidget_C.MoviePlay
struct UMovieWidget_C_MoviePlay_Params
{
};

// Function MovieWidget.MovieWidget_C.SetMovieID
struct UMovieWidget_C_SetMovieID_Params
{
	struct FString                                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MovieWidget.MovieWidget_C.SetupMovieMaterial
struct UMovieWidget_C_SetupMovieMaterial_Params
{
	class UMaterialInstance*                           MaterialInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieWidget.MovieWidget_C.Destruct
struct UMovieWidget_C_Destruct_Params
{
};

// Function MovieWidget.MovieWidget_C.Tick
struct UMovieWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieWidget.MovieWidget_C.Construct
struct UMovieWidget_C_Construct_Params
{
};

// Function MovieWidget.MovieWidget_C.ExecuteUbergraph_MovieWidget
struct UMovieWidget_C_ExecuteUbergraph_MovieWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
