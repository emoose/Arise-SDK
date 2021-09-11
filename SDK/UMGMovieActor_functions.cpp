
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

// Function UMGMovieActor.UMGMovieActor_C.IsPlay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AUMGMovieActor_C::IsPlay(bool* IsPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGMovieActor.UMGMovieActor_C.IsPlay");

	AUMGMovieActor_C_IsPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlay != nullptr)
		*IsPlay = params.IsPlay;
}


// Function UMGMovieActor.UMGMovieActor_C.ActorRemove
// (Public, BlueprintCallable, BlueprintEvent)

void AUMGMovieActor_C::ActorRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGMovieActor.UMGMovieActor_C.ActorRemove");

	AUMGMovieActor_C_ActorRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMGMovieActor.UMGMovieActor_C.GetMovieMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       MaterialInstance               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AUMGMovieActor_C::GetMovieMaterial(class UMaterialInstance** MaterialInstance, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGMovieActor.UMGMovieActor_C.GetMovieMaterial");

	AUMGMovieActor_C_GetMovieMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialInstance != nullptr)
		*MaterialInstance = params.MaterialInstance;
	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function UMGMovieActor.UMGMovieActor_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void AUMGMovieActor_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGMovieActor.UMGMovieActor_C.Reset");

	AUMGMovieActor_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMGMovieActor.UMGMovieActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AUMGMovieActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGMovieActor.UMGMovieActor_C.UserConstructionScript");

	AUMGMovieActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMGMovieActor.UMGMovieActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AUMGMovieActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGMovieActor.UMGMovieActor_C.ReceiveBeginPlay");

	AUMGMovieActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMGMovieActor.UMGMovieActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUMGMovieActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGMovieActor.UMGMovieActor_C.ReceiveTick");

	AUMGMovieActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMGMovieActor.UMGMovieActor_C.UpdateManaStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// EManaComponentStatus           Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUMGMovieActor_C::UpdateManaStatus(EManaComponentStatus Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGMovieActor.UMGMovieActor_C.UpdateManaStatus");

	AUMGMovieActor_C_UpdateManaStatus_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMGMovieActor.UMGMovieActor_C.SetupWidgetMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UManaTexture*            Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUMGMovieActor_C::SetupWidgetMaterial(class UMaterialInstance* Material, class UManaTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGMovieActor.UMGMovieActor_C.SetupWidgetMaterial");

	AUMGMovieActor_C_SetupWidgetMaterial_Params params;
	params.Material = Material;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMGMovieActor.UMGMovieActor_C.ResetWidgetMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void AUMGMovieActor_C::ResetWidgetMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGMovieActor.UMGMovieActor_C.ResetWidgetMaterial");

	AUMGMovieActor_C_ResetWidgetMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMGMovieActor.UMGMovieActor_C.ExecuteUbergraph_UMGMovieActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUMGMovieActor_C::ExecuteUbergraph_UMGMovieActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGMovieActor.UMGMovieActor_C.ExecuteUbergraph_UMGMovieActor");

	AUMGMovieActor_C_ExecuteUbergraph_UMGMovieActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMGMovieActor.UMGMovieActor_C.OnMovieStatusChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EManaComponentStatus           Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUMGMovieActor_C::OnMovieStatusChanged__DelegateSignature(EManaComponentStatus Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGMovieActor.UMGMovieActor_C.OnMovieStatusChanged__DelegateSignature");

	AUMGMovieActor_C_OnMovieStatusChanged__DelegateSignature_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
