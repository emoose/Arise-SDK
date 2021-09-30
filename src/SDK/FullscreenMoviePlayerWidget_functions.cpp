
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

// Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFullscreenMoviePlayerWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.Construct");

	UFullscreenMoviePlayerWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullscreenMoviePlayerWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.Tick");

	UFullscreenMoviePlayerWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.SetupMovie
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UManaTexture*            Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullscreenMoviePlayerWidget_C::SetupMovie(class UMaterialInstance* Material, class UManaTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.SetupMovie");

	UFullscreenMoviePlayerWidget_C_SetupMovie_Params params;
	params.Material = Material;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.DisplaySubtitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GroupID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 StringID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UFullscreenMoviePlayerWidget_C::DisplaySubtitle(bool Visibility, const struct FString& GroupID, const struct FString& StringID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.DisplaySubtitle");

	UFullscreenMoviePlayerWidget_C_DisplaySubtitle_Params params;
	params.Visibility = Visibility;
	params.GroupID = GroupID;
	params.StringID = StringID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.SetFadeColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UFullscreenMoviePlayerWidget_C::SetFadeColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.SetFadeColor");

	UFullscreenMoviePlayerWidget_C_SetFadeColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.SetFadeOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullscreenMoviePlayerWidget_C::SetFadeOpacity(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.SetFadeOpacity");

	UFullscreenMoviePlayerWidget_C_SetFadeOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.ExecuteUbergraph_FullscreenMoviePlayerWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullscreenMoviePlayerWidget_C::ExecuteUbergraph_FullscreenMoviePlayerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullscreenMoviePlayerWidget.FullscreenMoviePlayerWidget_C.ExecuteUbergraph_FullscreenMoviePlayerWidget");

	UFullscreenMoviePlayerWidget_C_ExecuteUbergraph_FullscreenMoviePlayerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
