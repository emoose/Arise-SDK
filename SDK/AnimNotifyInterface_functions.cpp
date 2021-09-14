
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

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimExtraPartsEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimExtraPartsEnd(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimExtraPartsEnd");

	UAnimNotifyInterface_C_OnAnimExtraPartsEnd_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimExtraPartsBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimExtraPartsBegin(bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimExtraPartsBegin");

	UAnimNotifyInterface_C_OnAnimExtraPartsBegin_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimGroundCollisionEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimGroundCollisionEnd(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimGroundCollisionEnd");

	UAnimNotifyInterface_C_OnAnimGroundCollisionEnd_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimGroundCollisionBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimGroundCollisionBegin(bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimGroundCollisionBegin");

	UAnimNotifyInterface_C_OnAnimGroundCollisionBegin_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimHairPartsEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimHairPartsEnd(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimHairPartsEnd");

	UAnimNotifyInterface_C_OnAnimHairPartsEnd_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimHairPartsBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimHairPartsBegin(bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimHairPartsBegin");

	UAnimNotifyInterface_C_OnAnimHairPartsBegin_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimLowerPartsEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimLowerPartsEnd(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimLowerPartsEnd");

	UAnimNotifyInterface_C_OnAnimLowerPartsEnd_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimLowerPartsBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimLowerPartsBegin(bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimLowerPartsBegin");

	UAnimNotifyInterface_C_OnAnimLowerPartsBegin_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimUpperPartsEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimUpperPartsEnd(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimUpperPartsEnd");

	UAnimNotifyInterface_C_OnAnimUpperPartsEnd_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimUpperPartsBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimUpperPartsBegin(bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimUpperPartsBegin");

	UAnimNotifyInterface_C_OnAnimUpperPartsBegin_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimSimulationSpaceEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimSimulationSpaceEnd(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimSimulationSpaceEnd");

	UAnimNotifyInterface_C_OnAnimSimulationSpaceEnd_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimSimulationSpaceBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAnimPhysSimSpaceType          Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimSimulationSpaceBegin(EAnimPhysSimSpaceType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimSimulationSpaceBegin");

	UAnimNotifyInterface_C_OnAnimSimulationSpaceBegin_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDampingPowerEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimDampingPowerEnd(bool Reset, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDampingPowerEnd");

	UAnimNotifyInterface_C_OnAnimDampingPowerEnd_Params params;
	params.Reset = Reset;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDampingPowerBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimDampingPowerBegin(float Value, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDampingPowerBegin");

	UAnimNotifyInterface_C_OnAnimDampingPowerBegin_Params params;
	params.Value = Value;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimGravityPowerEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimGravityPowerEnd(bool Reset, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimGravityPowerEnd");

	UAnimNotifyInterface_C_OnAnimGravityPowerEnd_Params params;
	params.Reset = Reset;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimGravityPowerBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimGravityPowerBegin(float Value, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimGravityPowerBegin");

	UAnimNotifyInterface_C_OnAnimGravityPowerBegin_Params params;
	params.Value = Value;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDynamicsWeightEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimDynamicsWeightEnd(bool Reset, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDynamicsWeightEnd");

	UAnimNotifyInterface_C_OnAnimDynamicsWeightEnd_Params params;
	params.Reset = Reset;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDynamicsWeightBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimDynamicsWeightBegin(float Value, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDynamicsWeightBegin");

	UAnimNotifyInterface_C_OnAnimDynamicsWeightBegin_Params params;
	params.Value = Value;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimUseKeyFrameAnimEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimUseKeyFrameAnimEnd(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimUseKeyFrameAnimEnd");

	UAnimNotifyInterface_C_OnAnimUseKeyFrameAnimEnd_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimUseKeyFrameAnimBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimUseKeyFrameAnimBegin(bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimUseKeyFrameAnimBegin");

	UAnimNotifyInterface_C_OnAnimUseKeyFrameAnimBegin_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnCreateMagicAssetOverrideDeep
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlMagicAsset*          MagicAsset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtl_MagicSpawnLocationParam OverrideLocation               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBtl_MagicSpawnRotationParam OverrideRotation               (BlueprintVisible, BlueprintReadOnly, Parm)
// class ABtlMagicActor*          SpawnMagic                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnCreateMagicAssetOverrideDeep(class UBtlMagicAsset* MagicAsset, const struct FBtl_MagicSpawnLocationParam& OverrideLocation, const struct FBtl_MagicSpawnRotationParam& OverrideRotation, class ABtlMagicActor** SpawnMagic)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnCreateMagicAssetOverrideDeep");

	UAnimNotifyInterface_C_OnCreateMagicAssetOverrideDeep_Params params;
	params.MagicAsset = MagicAsset;
	params.OverrideLocation = OverrideLocation;
	params.OverrideRotation = OverrideRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnMagic != nullptr)
		*SpawnMagic = params.SpawnMagic;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimRadialBlurTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimRadialBlurTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimRadialBlurTick");

	UAnimNotifyInterface_C_OnAnimRadialBlurTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimRadialBlurEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimNotifyInterface_C::OnAnimRadialBlurEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimRadialBlurEnd");

	UAnimNotifyInterface_C_OnAnimRadialBlurEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimRadialBlurBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimRadialBlurBegin(const struct FName& SocketName, float Strength, float Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimRadialBlurBegin");

	UAnimNotifyInterface_C_OnAnimRadialBlurBegin_Params params;
	params.SocketName = SocketName;
	params.Strength = Strength;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnCreateMagicAssetOverride
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlMagicAsset*          MagicAsset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtl_MagicSpawnParam    SpawnParam                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class ABtlMagicActor*          SpawnMagic                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnCreateMagicAssetOverride(class UBtlMagicAsset* MagicAsset, const struct FBtl_MagicSpawnParam& SpawnParam, class ABtlMagicActor** SpawnMagic)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnCreateMagicAssetOverride");

	UAnimNotifyInterface_C_OnCreateMagicAssetOverride_Params params;
	params.MagicAsset = MagicAsset;
	params.SpawnParam = SpawnParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnMagic != nullptr)
		*SpawnMagic = params.SpawnMagic;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDangerNoticeEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimNotifyInterface_C::OnAnimDangerNoticeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDangerNoticeEnd");

	UAnimNotifyInterface_C_OnAnimDangerNoticeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDangerNoticeBegin
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimNotifyInterface_C::OnAnimDangerNoticeBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDangerNoticeBegin");

	UAnimNotifyInterface_C_OnAnimDangerNoticeBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimAimWeaponEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimNotifyInterface_C::OnAnimAimWeaponEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimAimWeaponEnd");

	UAnimNotifyInterface_C_OnAnimAimWeaponEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimAimWeaponBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AngleMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimAimWeaponBegin(float AngleMin, float AngleMax, float AngleSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimAimWeaponBegin");

	UAnimNotifyInterface_C_OnAnimAimWeaponBegin_Params params;
	params.AngleMin = AngleMin;
	params.AngleMax = AngleMax;
	params.AngleSpeed = AngleSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnSetRotationWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UAnimNotifyInterface_C::OnSetRotationWorld(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnSetRotationWorld");

	UAnimNotifyInterface_C_OnSetRotationWorld_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnSetLocationWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UAnimNotifyInterface_C::OnSetLocationWorld(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnSetLocationWorld");

	UAnimNotifyInterface_C_OnSetLocationWorld_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnSetLocationRelativeTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RelativeOnGroundHeight         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnSetLocationRelativeTarget(float Distance, float Height, bool RelativeOnGroundHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnSetLocationRelativeTarget");

	UAnimNotifyInterface_C_OnSetLocationRelativeTarget_Params params;
	params.Distance = Distance;
	params.Height = Height;
	params.RelativeOnGroundHeight = RelativeOnGroundHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeSuperArmorEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuperArmor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimChangeSuperArmorEnd(bool SuperArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeSuperArmorEnd");

	UAnimNotifyInterface_C_OnAnimChangeSuperArmorEnd_Params params;
	params.SuperArmor = SuperArmor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeSuperArmorBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuperArmor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimChangeSuperArmorBegin(bool SuperArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeSuperArmorBegin");

	UAnimNotifyInterface_C_OnAnimChangeSuperArmorBegin_Params params;
	params.SuperArmor = SuperArmor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeIsNotDieEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNotDie                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimChangeIsNotDieEnd(bool IsNotDie)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeIsNotDieEnd");

	UAnimNotifyInterface_C_OnAnimChangeIsNotDieEnd_Params params;
	params.IsNotDie = IsNotDie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeIsNotDieBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNotDie                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimChangeIsNotDieBegin(bool IsNotDie)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeIsNotDieBegin");

	UAnimNotifyInterface_C_OnAnimChangeIsNotDieBegin_Params params;
	params.IsNotDie = IsNotDie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeReceiveDamageEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReceiveDamage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimChangeReceiveDamageEnd(bool ReceiveDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeReceiveDamageEnd");

	UAnimNotifyInterface_C_OnAnimChangeReceiveDamageEnd_Params params;
	params.ReceiveDamage = ReceiveDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeReceiveDamageBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReceiveDamage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimChangeReceiveDamageBegin(bool ReceiveDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeReceiveDamageBegin");

	UAnimNotifyInterface_C_OnAnimChangeReceiveDamageBegin_Params params;
	params.ReceiveDamage = ReceiveDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeInvincibleEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Invincible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimChangeInvincibleEnd(bool Invincible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeInvincibleEnd");

	UAnimNotifyInterface_C_OnAnimChangeInvincibleEnd_Params params;
	params.Invincible = Invincible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeInvincibleBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Invincible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimChangeInvincibleBegin(bool Invincible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeInvincibleBegin");

	UAnimNotifyInterface_C_OnAnimChangeInvincibleBegin_Params params;
	params.Invincible = Invincible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeVisibilityEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimChangeVisibilityEnd(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeVisibilityEnd");

	UAnimNotifyInterface_C_OnAnimChangeVisibilityEnd_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeVisibilityBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimChangeVisibilityBegin(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeVisibilityBegin");

	UAnimNotifyInterface_C_OnAnimChangeVisibilityBegin_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnCreateMagicAsset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlMagicAsset*          MagicAsset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlMagicActor*          SpawnMagic                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnCreateMagicAsset(class UBtlMagicAsset* MagicAsset, class ABtlMagicActor** SpawnMagic)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnCreateMagicAsset");

	UAnimNotifyInterface_C_OnCreateMagicAsset_Params params;
	params.MagicAsset = MagicAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnMagic != nullptr)
		*SpawnMagic = params.SpawnMagic;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimRotationEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimNotifyInterface_C::OnAnimRotationEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimRotationEnd");

	UAnimNotifyInterface_C_OnAnimRotationEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimRotationBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimRotationBegin(float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimRotationBegin");

	UAnimNotifyInterface_C_OnAnimRotationBegin_Params params;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimMovingEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimNotifyInterface_C::OnAnimMovingEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimMovingEnd");

	UAnimNotifyInterface_C_OnAnimMovingEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimMovingBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimMovingBegin(float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimMovingBegin");

	UAnimNotifyInterface_C_OnAnimMovingBegin_Params params;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnIgnoreUnitPushEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimNotifyInterface_C::OnIgnoreUnitPushEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnIgnoreUnitPushEnd");

	UAnimNotifyInterface_C_OnIgnoreUnitPushEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnIgnoreUnitPushBegin
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimNotifyInterface_C::OnIgnoreUnitPushBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnIgnoreUnitPushBegin");

	UAnimNotifyInterface_C_OnIgnoreUnitPushBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnManualTurnEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimNotifyInterface_C::OnManualTurnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnManualTurnEnd");

	UAnimNotifyInterface_C_OnManualTurnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnManualTurnBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RotationRate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnManualTurnBegin(float RotationRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnManualTurnBegin");

	UAnimNotifyInterface_C_OnManualTurnBegin_Params params;
	params.RotationRate = RotationRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeGravityTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GravityScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimChangeGravityTick(float GravityScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeGravityTick");

	UAnimNotifyInterface_C_OnAnimChangeGravityTick_Params params;
	params.GravityScale = GravityScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimTurnTargetEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimNotifyInterface_C::OnAnimTurnTargetEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimTurnTargetEnd");

	UAnimNotifyInterface_C_OnAnimTurnTargetEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimTurnTargetBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleRange                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimTurnTargetBegin(float InterpSpeed, float AngleRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimTurnTargetBegin");

	UAnimNotifyInterface_C_OnAnimTurnTargetBegin_Params params;
	params.InterpSpeed = InterpSpeed;
	params.AngleRange = AngleRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeGravityEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimNotifyInterface_C::OnAnimChangeGravityEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeGravityEnd");

	UAnimNotifyInterface_C_OnAnimChangeGravityEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeGravityBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GravityScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyInterface_C::OnAnimChangeGravityBegin(float GravityScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeGravityBegin");

	UAnimNotifyInterface_C_OnAnimChangeGravityBegin_Params params;
	params.GravityScale = GravityScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
