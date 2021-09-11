
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

// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFullscreenMoviePlayerActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.UserConstructionScript");

	AFullscreenMoviePlayerActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFullscreenMoviePlayerActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.ReceiveBeginPlay");

	AFullscreenMoviePlayerActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.AttachWidget
// (Public, BlueprintCallable, BlueprintEvent)

void AFullscreenMoviePlayerActor_C::AttachWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.AttachWidget");

	AFullscreenMoviePlayerActor_C_AttachWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.DetachWidget
// (Public, BlueprintCallable, BlueprintEvent)

void AFullscreenMoviePlayerActor_C::DetachWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.DetachWidget");

	AFullscreenMoviePlayerActor_C_DetachWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.DisplaySubtitleWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GroupID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 StringID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AFullscreenMoviePlayerActor_C::DisplaySubtitleWidget(bool Visible, const struct FString& GroupID, const struct FString& StringID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.DisplaySubtitleWidget");

	AFullscreenMoviePlayerActor_C_DisplaySubtitleWidget_Params params;
	params.Visible = Visible;
	params.GroupID = GroupID;
	params.StringID = StringID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.ResetWidgetMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void AFullscreenMoviePlayerActor_C::ResetWidgetMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.ResetWidgetMaterial");

	AFullscreenMoviePlayerActor_C_ResetWidgetMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.SetupWidgetMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UManaTexture*            Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFullscreenMoviePlayerActor_C::SetupWidgetMaterial(class UMaterialInstance* Material, class UManaTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.SetupWidgetMaterial");

	AFullscreenMoviePlayerActor_C_SetupWidgetMaterial_Params params;
	params.Material = Material;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.ExecuteUbergraph_FullscreenMoviePlayerActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFullscreenMoviePlayerActor_C::ExecuteUbergraph_FullscreenMoviePlayerActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C.ExecuteUbergraph_FullscreenMoviePlayerActor");

	AFullscreenMoviePlayerActor_C_ExecuteUbergraph_FullscreenMoviePlayerActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
