
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

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.Despawn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcCharacterWalk_C::Despawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.Despawn");

	ABP_PF_NpcCharacterWalk_C_Despawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.RemoveSystem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcCharacterWalk_C::RemoveSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.RemoveSystem");

	ABP_PF_NpcCharacterWalk_C_RemoveSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetOverrideFacialData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFNpcDefineFacialData  OverrideFacialData             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PF_NpcCharacterWalk_C::SetOverrideFacialData(const struct FPFNpcDefineFacialData& OverrideFacialData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetOverrideFacialData");

	ABP_PF_NpcCharacterWalk_C_SetOverrideFacialData_Params params;
	params.OverrideFacialData = OverrideFacialData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialEye_LookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterWalk_C::SetFacialEye_LookAt(float Angle, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialEye_LookAt");

	ABP_PF_NpcCharacterWalk_C_SetFacialEye_LookAt_Params params;
	params.Angle = Angle;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialEye_Highlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            No                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterWalk_C::SetFacialEye_Highlight(int No, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialEye_Highlight");

	ABP_PF_NpcCharacterWalk_C_SetFacialEye_Highlight_Params params;
	params.No = No;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialAutoBlink
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterWalk_C::SetFacialAutoBlink(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialAutoBlink");

	ABP_PF_NpcCharacterWalk_C_SetFacialAutoBlink_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialEye
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EyeNo                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterWalk_C::SetFacialEye(int EyeNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialEye");

	ABP_PF_NpcCharacterWalk_C_SetFacialEye_Params params;
	params.EyeNo = EyeNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialIris
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            No                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterWalk_C::SetFacialIris(int No, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialIris");

	ABP_PF_NpcCharacterWalk_C_SetFacialIris_Params params;
	params.No = No;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PresetNo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterWalk_C::SetFacialPreset(int PresetNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialPreset");

	ABP_PF_NpcCharacterWalk_C_SetFacialPreset_Params params;
	params.PresetNo = PresetNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFNpcDefineFacialData  NewFacialData                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PF_NpcCharacterWalk_C::SetFacialData(const struct FPFNpcDefineFacialData& NewFacialData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialData");

	ABP_PF_NpcCharacterWalk_C_SetFacialData_Params params;
	params.NewFacialData = NewFacialData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetDefaultFacialData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcCharacterWalk_C::SetDefaultFacialData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetDefaultFacialData");

	ABP_PF_NpcCharacterWalk_C_SetDefaultFacialData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.BuildCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFNpWalkSpawnData      SpawnData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bLoadImmediate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterWalk_C::BuildCharacter(const struct FPFNpWalkSpawnData& SpawnData, bool bLoadImmediate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.BuildCharacter");

	ABP_PF_NpcCharacterWalk_C_BuildCharacter_Params params;
	params.SpawnData = SpawnData;
	params.bLoadImmediate = bLoadImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetCollide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcCharacterWalk_C::SetCollide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetCollide");

	ABP_PF_NpcCharacterWalk_C_SetCollide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcCharacterWalk_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.UserConstructionScript");

	ABP_PF_NpcCharacterWalk_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_NpcCharacterWalk_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.ReceiveBeginPlay");

	ABP_PF_NpcCharacterWalk_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.OnBuildCharacter
// (Event, Protected, BlueprintEvent)

void ABP_PF_NpcCharacterWalk_C::OnBuildCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.OnBuildCharacter");

	ABP_PF_NpcCharacterWalk_C_OnBuildCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.ReceiveBuildCharacterInitAnim
// (Event, Public, BlueprintEvent)

void ABP_PF_NpcCharacterWalk_C::ReceiveBuildCharacterInitAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.ReceiveBuildCharacterInitAnim");

	ABP_PF_NpcCharacterWalk_C_ReceiveBuildCharacterInitAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.ExecuteUbergraph_BP_PF_NpcCharacterWalk
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterWalk_C::ExecuteUbergraph_BP_PF_NpcCharacterWalk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.ExecuteUbergraph_BP_PF_NpcCharacterWalk");

	ABP_PF_NpcCharacterWalk_C_ExecuteUbergraph_BP_PF_NpcCharacterWalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
