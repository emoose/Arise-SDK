
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

// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEyelid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            No                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::SetFacialEyelid(int No, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEyelid");

	ABP_PF_NpcCharacterStand_C_SetFacialEyelid_Params params;
	params.No = No;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.GetFacialPresetSelection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PresetNo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPFNpcFacialPresetData  PresetData                     (Parm, OutParm)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::GetFacialPresetSelection(int PresetNo, struct FPFNpcFacialPresetData* PresetData, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.GetFacialPresetSelection");

	ABP_PF_NpcCharacterStand_C_GetFacialPresetSelection_Params params;
	params.PresetNo = PresetNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PresetData != nullptr)
		*PresetData = params.PresetData;
	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PresetNo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::SetFacialPreset(int PresetNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialPreset");

	ABP_PF_NpcCharacterStand_C_SetFacialPreset_Params params;
	params.PresetNo = PresetNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEye_LookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::SetFacialEye_LookAt(float Angle, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEye_LookAt");

	ABP_PF_NpcCharacterStand_C_SetFacialEye_LookAt_Params params;
	params.Angle = Angle;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetDefaultFacialData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcCharacterStand_C::SetDefaultFacialData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetDefaultFacialData");

	ABP_PF_NpcCharacterStand_C_SetDefaultFacialData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetOverrideFacialData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFNpcDefineFacialData  OverrideFacialData             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PF_NpcCharacterStand_C::SetOverrideFacialData(const struct FPFNpcDefineFacialData& OverrideFacialData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetOverrideFacialData");

	ABP_PF_NpcCharacterStand_C_SetOverrideFacialData_Params params;
	params.OverrideFacialData = OverrideFacialData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFNpcDefineFacialData  FacialData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PF_NpcCharacterStand_C::SetFacialData(const struct FPFNpcDefineFacialData& FacialData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialData");

	ABP_PF_NpcCharacterStand_C_SetFacialData_Params params;
	params.FacialData = FacialData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialIris
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            No                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::SetFacialIris(int No, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialIris");

	ABP_PF_NpcCharacterStand_C_SetFacialIris_Params params;
	params.No = No;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEye_Highlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            No                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::SetFacialEye_Highlight(int No, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEye_Highlight");

	ABP_PF_NpcCharacterStand_C_SetFacialEye_Highlight_Params params;
	params.No = No;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialWrinkle1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            No                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::SetFacialWrinkle1(int No, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialWrinkle1");

	ABP_PF_NpcCharacterStand_C_SetFacialWrinkle1_Params params;
	params.No = No;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialWrinkle0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            No                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::SetFacialWrinkle0(int No, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialWrinkle0");

	ABP_PF_NpcCharacterStand_C_SetFacialWrinkle0_Params params;
	params.No = No;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEmotion1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            No                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::SetFacialEmotion1(int No, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEmotion1");

	ABP_PF_NpcCharacterStand_C_SetFacialEmotion1_Params params;
	params.No = No;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEmotion0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            No                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::SetFacialEmotion0(int No, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEmotion0");

	ABP_PF_NpcCharacterStand_C_SetFacialEmotion0_Params params;
	params.No = No;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.BuildCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFNpcPlacementData     PlacementInfo                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bNoCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBlockBuild                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCameraFade                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNeedsFacePoseOnly             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Use_Render_Culling             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoadImmediate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEmpty                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::BuildCharacter(const struct FPFNpcPlacementData& PlacementInfo, bool bNoCollision, bool bBlockBuild, bool bCameraFade, bool bNeedsFacePoseOnly, bool Use_Render_Culling, bool bLoadImmediate, bool* bEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.BuildCharacter");

	ABP_PF_NpcCharacterStand_C_BuildCharacter_Params params;
	params.PlacementInfo = PlacementInfo;
	params.bNoCollision = bNoCollision;
	params.bBlockBuild = bBlockBuild;
	params.bCameraFade = bCameraFade;
	params.bNeedsFacePoseOnly = bNeedsFacePoseOnly;
	params.Use_Render_Culling = Use_Render_Culling;
	params.bLoadImmediate = bLoadImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEmpty != nullptr)
		*bEmpty = params.bEmpty;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetEnableFacialLip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::SetEnableFacialLip(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetEnableFacialLip");

	ABP_PF_NpcCharacterStand_C_SetEnableFacialLip_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialLip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LipNo                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::SetFacialLip(int LipNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialLip");

	ABP_PF_NpcCharacterStand_C_SetFacialLip_Params params;
	params.LipNo = LipNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialAutoLip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LimitTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::SetFacialAutoLip(bool bEnable, float LimitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialAutoLip");

	ABP_PF_NpcCharacterStand_C_SetFacialAutoLip_Params params;
	params.bEnable = bEnable;
	params.LimitTime = LimitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialPresetNo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FacialPresetNo                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::SetFacialPresetNo(int FacialPresetNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialPresetNo");

	ABP_PF_NpcCharacterStand_C_SetFacialPresetNo_Params params;
	params.FacialPresetNo = FacialPresetNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEye
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EyeNo                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::SetFacialEye(int EyeNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialEye");

	ABP_PF_NpcCharacterStand_C_SetFacialEye_Params params;
	params.EyeNo = EyeNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialAutoBlink
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::SetFacialAutoBlink(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.SetFacialAutoBlink");

	ABP_PF_NpcCharacterStand_C_SetFacialAutoBlink_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcCharacterStand_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.UserConstructionScript");

	ABP_PF_NpcCharacterStand_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_NpcCharacterStand_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.ReceiveBeginPlay");

	ABP_PF_NpcCharacterStand_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.BeginOneTop
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Listener                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::BeginOneTop(class AActor* Listener)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.BeginOneTop");

	ABP_PF_NpcCharacterStand_C_BeginOneTop_Params params;
	params.Listener = Listener;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.EndOneTop
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcCharacterStand_C::EndOneTop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.EndOneTop");

	ABP_PF_NpcCharacterStand_C_EndOneTop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.ReceiveEndPlay");

	ABP_PF_NpcCharacterStand_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.ReceiveBuildCharacterInitAnim
// (Event, Public, BlueprintEvent)

void ABP_PF_NpcCharacterStand_C::ReceiveBuildCharacterInitAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.ReceiveBuildCharacterInitAnim");

	ABP_PF_NpcCharacterStand_C_ReceiveBuildCharacterInitAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.OnBuildCharacter
// (Event, Protected, BlueprintEvent)

void ABP_PF_NpcCharacterStand_C::OnBuildCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.OnBuildCharacter");

	ABP_PF_NpcCharacterStand_C_OnBuildCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.ExecuteUbergraph_BP_PF_NpcCharacterStand
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcCharacterStand_C::ExecuteUbergraph_BP_PF_NpcCharacterStand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C.ExecuteUbergraph_BP_PF_NpcCharacterStand");

	ABP_PF_NpcCharacterStand_C_ExecuteUbergraph_BP_PF_NpcCharacterStand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
