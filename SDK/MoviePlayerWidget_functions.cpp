
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

// Function MoviePlayerWidget.MoviePlayerWidget_C.SetFadeOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMoviePlayerWidget_C::SetFadeOpacity(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerWidget.MoviePlayerWidget_C.SetFadeOpacity");

	UMoviePlayerWidget_C_SetFadeOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerWidget.MoviePlayerWidget_C.SetFadeColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMoviePlayerWidget_C::SetFadeColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerWidget.MoviePlayerWidget_C.SetFadeColor");

	UMoviePlayerWidget_C_SetFadeColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerWidget.MoviePlayerWidget_C.DisplaySubtitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GroupID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 StringID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMoviePlayerWidget_C::DisplaySubtitle(bool Visibility, const struct FString& GroupID, const struct FString& StringID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerWidget.MoviePlayerWidget_C.DisplaySubtitle");

	UMoviePlayerWidget_C_DisplaySubtitle_Params params;
	params.Visibility = Visibility;
	params.GroupID = GroupID;
	params.StringID = StringID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoviePlayerWidget.MoviePlayerWidget_C.SetupMovie
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UManaTexture*            Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMoviePlayerWidget_C::SetupMovie(class UMaterialInstance* Material, class UManaTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoviePlayerWidget.MoviePlayerWidget_C.SetupMovie");

	UMoviePlayerWidget_C_SetupMovie_Params params;
	params.Material = Material;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
