
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

// Function MovieWidget.MovieWidget_C.SetupMovieWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UManaTexture*            Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMovieWidget_C::SetupMovieWidget(class UMaterialInstance* Material, class UManaTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.SetupMovieWidget");

	UMovieWidget_C_SetupMovieWidget_Params params;
	params.Material = Material;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.IsMoviePlay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMovieWidget_C::IsMoviePlay(bool* IsPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.IsMoviePlay");

	UMovieWidget_C_IsMoviePlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlay != nullptr)
		*IsPlay = params.IsPlay;
}


// Function MovieWidget.MovieWidget_C.MovieUnload
// (Public, BlueprintCallable, BlueprintEvent)

void UMovieWidget_C::MovieUnload()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.MovieUnload");

	UMovieWidget_C_MovieUnload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.MovieLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 movieName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMovieWidget_C::MovieLoad(const struct FString& movieName, bool Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.MovieLoad");

	UMovieWidget_C_MovieLoad_Params params;
	params.movieName = movieName;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.SetMovieTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 movieName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMovieWidget_C::SetMovieTexture(const struct FString& movieName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.SetMovieTexture");

	UMovieWidget_C_SetMovieTexture_Params params;
	params.movieName = movieName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.DestroyMovieActor
// (Public, BlueprintCallable, BlueprintEvent)

void UMovieWidget_C::DestroyMovieActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.DestroyMovieActor");

	UMovieWidget_C_DestroyMovieActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.IsMovieEnd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnd                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMovieWidget_C::IsMovieEnd(bool* IsEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.IsMovieEnd");

	UMovieWidget_C_IsMovieEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnd != nullptr)
		*IsEnd = params.IsEnd;
}


// Function MovieWidget.MovieWidget_C.MovieStop
// (Public, BlueprintCallable, BlueprintEvent)

void UMovieWidget_C::MovieStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.MovieStop");

	UMovieWidget_C_MovieStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.MoviePause
// (Public, BlueprintCallable, BlueprintEvent)

void UMovieWidget_C::MoviePause()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.MoviePause");

	UMovieWidget_C_MoviePause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.MoviePlay
// (Public, BlueprintCallable, BlueprintEvent)

void UMovieWidget_C::MoviePlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.MoviePlay");

	UMovieWidget_C_MoviePlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.SetMovieID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMovieWidget_C::SetMovieID(const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.SetMovieID");

	UMovieWidget_C_SetMovieID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.SetupMovieMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       MaterialInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMovieWidget_C::SetupMovieMaterial(class UMaterialInstance* MaterialInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.SetupMovieMaterial");

	UMovieWidget_C_SetupMovieMaterial_Params params;
	params.MaterialInstance = MaterialInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMovieWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.Destruct");

	UMovieWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMovieWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.Tick");

	UMovieWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMovieWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.Construct");

	UMovieWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.ExecuteUbergraph_MovieWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMovieWidget_C::ExecuteUbergraph_MovieWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.ExecuteUbergraph_MovieWidget");

	UMovieWidget_C_ExecuteUbergraph_MovieWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
