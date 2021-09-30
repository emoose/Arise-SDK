
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

// Function LandscapeWall.LandscapeWallBase.Unbuild
// (Final, Native, Public, BlueprintCallable)

void ALandscapeWallBase::Unbuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeWall.LandscapeWallBase.Unbuild");

	ALandscapeWallBase_Unbuild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeWall.LandscapeWallBase.SetHalfThickness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InHalfThickness                (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeWallBase::SetHalfThickness(float InHalfThickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeWall.LandscapeWallBase.SetHalfThickness");

	ALandscapeWallBase_SetHalfThickness_Params params;
	params.InHalfThickness = InHalfThickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeWall.LandscapeWallBase.Rebuild
// (Final, Native, Public, BlueprintCallable)

void ALandscapeWallBase::Rebuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeWall.LandscapeWallBase.Rebuild");

	ALandscapeWallBase_Rebuild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeWall.LandscapeWallBase.PostRebuild
// (Event, Public, BlueprintEvent)

void ALandscapeWallBase::PostRebuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeWall.LandscapeWallBase.PostRebuild");

	ALandscapeWallBase_PostRebuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeWall.LandscapeWallBase.GetWallComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULandscapeWallComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class ULandscapeWallComponent* ALandscapeWallBase::GetWallComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeWall.LandscapeWallBase.GetWallComponent");

	ALandscapeWallBase_GetWallComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LandscapeWall.LandscapeWallBase.GetHalfThickness
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeWallBase::GetHalfThickness()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeWall.LandscapeWallBase.GetHalfThickness");

	ALandscapeWallBase_GetHalfThickness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LandscapeWall.LandscapeWallBase.GetHalfHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeWallBase::GetHalfHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeWall.LandscapeWallBase.GetHalfHeight");

	ALandscapeWallBase_GetHalfHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LandscapeWall.LandscapeWallBase.GetDecalClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ALandscapeWallBase::GetDecalClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeWall.LandscapeWallBase.GetDecalClass");

	ALandscapeWallBase_GetDecalClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LandscapeWall.LandscapeWallNavAreaBox.SetMobility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EComponentMobility> NewMobility                    (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeWallNavAreaBox::SetMobility(TEnumAsByte<EComponentMobility> NewMobility)
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeWall.LandscapeWallNavAreaBox.SetMobility");

	ALandscapeWallNavAreaBox_SetMobility_Params params;
	params.NewMobility = NewMobility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeWall.LandscapeWallNavAreaBox.SetBoxExtent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ANavModifierVolume*      Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeWallNavAreaBox::SetBoxExtent(class ANavModifierVolume* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeWall.LandscapeWallNavAreaBox.SetBoxExtent");

	ALandscapeWallNavAreaBox_SetBoxExtent_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeWall.LandscapeWallNavAreaBox.SetAreaClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InAreaClass                    (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeWallNavAreaBox::SetAreaClass(class UClass* InAreaClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeWall.LandscapeWallNavAreaBox.SetAreaClass");

	ALandscapeWallNavAreaBox_SetAreaClass_Params params;
	params.InAreaClass = InAreaClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeWall.LandscapeWallSpline.GetSplineComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULandscapeWallSplineComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class ULandscapeWallSplineComponent* ALandscapeWallSpline::GetSplineComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeWall.LandscapeWallSpline.GetSplineComponent");

	ALandscapeWallSpline_GetSplineComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
