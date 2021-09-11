
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

// Function BP_MenuCamera.BP_MenuCamera_C.CalcLocations_New2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DistRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSafeZone                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Camera                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 BG                             (Parm, OutParm, IsPlainOldData)

void ABP_MenuCamera_C::CalcLocations_New2(float Height, float DistRate, bool bSafeZone, struct FVector* Camera, struct FVector* BG)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuCamera.BP_MenuCamera_C.CalcLocations_New2");

	ABP_MenuCamera_C_CalcLocations_New2_Params params;
	params.Height = Height;
	params.DistRate = DistRate;
	params.bSafeZone = bSafeZone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;
	if (BG != nullptr)
		*BG = params.BG;
}


// Function BP_MenuCamera.BP_MenuCamera_C.GetCharacterPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 OutCharaPosition               (Parm, OutParm, IsPlainOldData)

void ABP_MenuCamera_C::GetCharacterPosition(struct FVector* OutCharaPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuCamera.BP_MenuCamera_C.GetCharacterPosition");

	ABP_MenuCamera_C_GetCharacterPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCharaPosition != nullptr)
		*OutCharaPosition = params.OutCharaPosition;
}


// Function BP_MenuCamera.BP_MenuCamera_C.CalcLocations
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Camera                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 BG                             (Parm, OutParm, IsPlainOldData)

void ABP_MenuCamera_C::CalcLocations(float Height, struct FVector* Camera, struct FVector* BG)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuCamera.BP_MenuCamera_C.CalcLocations");

	ABP_MenuCamera_C_CalcLocations_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;
	if (BG != nullptr)
		*BG = params.BG;
}


// Function BP_MenuCamera.BP_MenuCamera_C.SetOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_MenuCamera_C::SetOffset(const struct FVector2D& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuCamera.BP_MenuCamera_C.SetOffset");

	ABP_MenuCamera_C_SetOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuCamera.BP_MenuCamera_C.CalcLocations_New
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Camera                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 BG                             (Parm, OutParm, IsPlainOldData)

void ABP_MenuCamera_C::CalcLocations_New(float Height, struct FVector* Camera, struct FVector* BG)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuCamera.BP_MenuCamera_C.CalcLocations_New");

	ABP_MenuCamera_C_CalcLocations_New_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;
	if (BG != nullptr)
		*BG = params.BG;
}


// Function BP_MenuCamera.BP_MenuCamera_C.GetRadiusOfInscribedCircle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Bottom                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MenuCamera_C::GetRadiusOfInscribedCircle(float Bottom, float Height, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuCamera.BP_MenuCamera_C.GetRadiusOfInscribedCircle");

	ABP_MenuCamera_C_GetRadiusOfInscribedCircle_Params params;
	params.Bottom = Bottom;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function BP_MenuCamera.BP_MenuCamera_C.GetDistanceFromFOV
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          BGWidth                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSafeZone                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_MenuCamera_C::GetDistanceFromFOV(float BGWidth, bool bSafeZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuCamera.BP_MenuCamera_C.GetDistanceFromFOV");

	ABP_MenuCamera_C_GetDistanceFromFOV_Params params;
	params.BGWidth = BGWidth;
	params.bSafeZone = bSafeZone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MenuCamera.BP_MenuCamera_C.SetPositionAuto
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_MenuCamera_C::SetPositionAuto(const struct FTransform& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuCamera.BP_MenuCamera_C.SetPositionAuto");

	ABP_MenuCamera_C_SetPositionAuto_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuCamera.BP_MenuCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MenuCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuCamera.BP_MenuCamera_C.UserConstructionScript");

	ABP_MenuCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuCamera.BP_MenuCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MenuCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuCamera.BP_MenuCamera_C.ReceiveBeginPlay");

	ABP_MenuCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuCamera.BP_MenuCamera_C.ExecuteUbergraph_BP_MenuCamera
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuCamera_C::ExecuteUbergraph_BP_MenuCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuCamera.BP_MenuCamera_C.ExecuteUbergraph_BP_MenuCamera");

	ABP_MenuCamera_C_ExecuteUbergraph_BP_MenuCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
