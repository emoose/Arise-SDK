
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

// Function MoviePlayerActor.MoviePlayerActor_C.SetupWidgetMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UManaTexture*            Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMoviePlayerActor_C::SetupWidgetMaterial(class UMaterialInstance* Material, class UManaTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.SetupWidgetMaterial");

	AMoviePlayerActor_C_SetupWidgetMaterial_Params params;
	params.Material = Material;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.ResetWidgetMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void AMoviePlayerActor_C::ResetWidgetMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.ResetWidgetMaterial");

	AMoviePlayerActor_C_ResetWidgetMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.GetMovieMaterialInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseMovieMaterialType        MaterialType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasAlphaMovie                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMoviePlayerActor_C::GetMovieMaterialInterface(EAriseMovieMaterialType MaterialType, bool HasAlphaMovie, class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.GetMovieMaterialInterface");

	AMoviePlayerActor_C_GetMovieMaterialInterface_Params params;
	params.MaterialType = MaterialType;
	params.HasAlphaMovie = HasAlphaMovie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
}


// Function MoviePlayerActor.MoviePlayerActor_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)

void AMoviePlayerActor_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.Stop");

	AMoviePlayerActor_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.DisplaySubtitleWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GroupID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 StringID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AMoviePlayerActor_C::DisplaySubtitleWidget(bool Visible, const struct FString& GroupID, const struct FString& StringID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.DisplaySubtitleWidget");

	AMoviePlayerActor_C_DisplaySubtitleWidget_Params params;
	params.Visible = Visible;
	params.GroupID = GroupID;
	params.StringID = StringID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.Load(Name)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 movieName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMoviePlayerActor_C::Load_Name_(const struct FString& movieName, bool Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.Load(Name)");

	AMoviePlayerActor_C_Load_Name__Params params;
	params.movieName = movieName;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.Unload
// (Public, BlueprintCallable, BlueprintEvent)

void AMoviePlayerActor_C::Unload()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.Unload");

	AMoviePlayerActor_C_Unload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.DetachWidget
// (Public, BlueprintCallable, BlueprintEvent)

void AMoviePlayerActor_C::DetachWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.DetachWidget");

	AMoviePlayerActor_C_DetachWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.AttachWidget
// (Public, BlueprintCallable, BlueprintEvent)

void AMoviePlayerActor_C::AttachWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.AttachWidget");

	AMoviePlayerActor_C_AttachWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.Skip
// (Public, BlueprintCallable, BlueprintEvent)

void AMoviePlayerActor_C::Skip()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.Skip");

	AMoviePlayerActor_C_Skip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.Pause
// (Public, BlueprintCallable, BlueprintEvent)

void AMoviePlayerActor_C::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.Pause");

	AMoviePlayerActor_C_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.Play
// (Public, BlueprintCallable, BlueprintEvent)

void AMoviePlayerActor_C::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.Play");

	AMoviePlayerActor_C_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMoviePlayerActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.UserConstructionScript");

	AMoviePlayerActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.SetupMaterial
// (Event, Public, BlueprintEvent)
// Parameters:
// EAriseMovieMaterialType        MaterialType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMoviePlayerActor_C::SetupMaterial(EAriseMovieMaterialType MaterialType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.SetupMaterial");

	AMoviePlayerActor_C_SetupMaterial_Params params;
	params.MaterialType = MaterialType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.ResetMaterial
// (Event, Public, BlueprintEvent)

void AMoviePlayerActor_C::ResetMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.ResetMaterial");

	AMoviePlayerActor_C_ResetMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.UpdateSubtitle
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GroupID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 StringID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AMoviePlayerActor_C::UpdateSubtitle(bool Visibility, const struct FString& GroupID, const struct FString& StringID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.UpdateSubtitle");

	AMoviePlayerActor_C_UpdateSubtitle_Params params;
	params.Visibility = Visibility;
	params.GroupID = GroupID;
	params.StringID = StringID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMoviePlayerActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.ReceiveBeginPlay");

	AMoviePlayerActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMoviePlayerActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.ReceiveEndPlay");

	AMoviePlayerActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerActor.MoviePlayerActor_C.ExecuteUbergraph_MoviePlayerActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMoviePlayerActor_C::ExecuteUbergraph_MoviePlayerActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerActor.MoviePlayerActor_C.ExecuteUbergraph_MoviePlayerActor");

	AMoviePlayerActor_C_ExecuteUbergraph_MoviePlayerActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
