#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function LV_MenuModelView2.LV_MenuModelView2_C.ApplyPostProcessSettings
struct ALV_MenuModelView2_C_ApplyPostProcessSettings_Params
{
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.GetModelPostProcessSettings
struct ALV_MenuModelView2_C_GetModelPostProcessSettings_Params
{
	struct FPostProcessSettings                        Settings;                                                 // (Parm, OutParm)
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.GetDefaultPostProcessSettings
struct ALV_MenuModelView2_C_GetDefaultPostProcessSettings_Params
{
	struct FPostProcessSettings                        Settings;                                                 // (Parm, OutParm)
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.GetPostProcessSettings
struct ALV_MenuModelView2_C_GetPostProcessSettings_Params
{
	struct FPostProcessSettings                        Settings;                                                 // (Parm, OutParm)
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.SpawnEmitter
struct ALV_MenuModelView2_C_SpawnEmitter_Params
{
	class UObject*                                     Template;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.ActivateEmitter
struct ALV_MenuModelView2_C_ActivateEmitter_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.ReceiveBeginPlay
struct ALV_MenuModelView2_C_ReceiveBeginPlay_Params
{
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.ReceiveTick
struct ALV_MenuModelView2_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.CheckActorEnabled
struct ALV_MenuModelView2_C_CheckActorEnabled_Params
{
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.ShowCaptureBG
struct ALV_MenuModelView2_C_ShowCaptureBG_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.ShowHeader3D
struct ALV_MenuModelView2_C_ShowHeader3D_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.ShowTopBG
struct ALV_MenuModelView2_C_ShowTopBG_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMenuTopCharaType                                  ShowCharaType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BackDarkness;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.ChangeTopBG
struct ALV_MenuModelView2_C_ChangeTopBG_Params
{
	bool                                               bNext;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OldShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMenuTopCharaType                                  OldCharaType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMenuTopCharaType                                  NewCharaType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BackDarkness;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.ShowTopParticle
struct ALV_MenuModelView2_C_ShowTopParticle_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.OnLevelActivate
struct ALV_MenuModelView2_C_OnLevelActivate_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePostProcess;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.OnMenuCloseStart
struct ALV_MenuModelView2_C_OnMenuCloseStart_Params
{
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.ShowLight
struct ALV_MenuModelView2_C_ShowLight_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.OnAnimCaptureBlack
struct ALV_MenuModelView2_C_OnAnimCaptureBlack_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LV_MenuModelView2.LV_MenuModelView2_C.ExecuteUbergraph_LV_MenuModelView2
struct ALV_MenuModelView2_C_ExecuteUbergraph_LV_MenuModelView2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
