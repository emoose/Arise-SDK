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

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.GetUMGDebugHudInterface
struct ABP_AriseGamemodeDevelop_C_GetUMGDebugHudInterface_Params
{
	TScriptInterface<class UUMG_GameDebugHUD_Interface_C> DebugHUD;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.GetDebugHudInstance
struct ABP_AriseGamemodeDevelop_C_GetDebugHudInstance_Params
{
	class ADebugHUD_C*                                 DebugHUD;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.IsWaitSymbolLoaded
struct ABP_AriseGamemodeDevelop_C_IsWaitSymbolLoaded_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bOut;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.IsOpenDebugMenuButtonPressed
struct ABP_AriseGamemodeDevelop_C_IsOpenDebugMenuButtonPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.IsDebugInputEnable
struct ABP_AriseGamemodeDevelop_C_IsDebugInputEnable_Params
{
	bool                                               bOut;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.IsDevelopEnabled
struct ABP_AriseGamemodeDevelop_C_IsDevelopEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.UserConstructionScript
struct ABP_AriseGamemodeDevelop_C_UserConstructionScript_Params
{
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.ReceiveBeginPlay
struct ABP_AriseGamemodeDevelop_C_ReceiveBeginPlay_Params
{
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.ReceiveTick
struct ABP_AriseGamemodeDevelop_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.CustomEvent
struct ABP_AriseGamemodeDevelop_C_CustomEvent_Params
{
	int                                                Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.AddLevelDebugMenu
struct ABP_AriseGamemodeDevelop_C_AddLevelDebugMenu_Params
{
	TArray<struct FString>                             LevelNames;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnStartSection
struct ABP_AriseGamemodeDevelop_C_OnStartSection_Params
{
	unsigned char                                      StartedSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.SetDebugInputEnable
struct ABP_AriseGamemodeDevelop_C_SetDebugInputEnable_Params
{
	bool                                               bNew;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.򹘞򬿾󘍈􉞆�0n0鬴癳
struct ABP_AriseGamemodeDevelop_C_򹘞򬿾󘍈􉞆�0n0鬴癳_Params
{
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDispMapObjInfo
struct ABP_AriseGamemodeDevelop_C_OnToggleDispMapObjInfo_Params
{
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDispCameraCollision
struct ABP_AriseGamemodeDevelop_C_OnToggleDispCameraCollision_Params
{
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDispCharacterCollision
struct ABP_AriseGamemodeDevelop_C_OnToggleDispCharacterCollision_Params
{
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDispInteractArea
struct ABP_AriseGamemodeDevelop_C_OnToggleDispInteractArea_Params
{
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnChangeDispUELog
struct ABP_AriseGamemodeDevelop_C_OnChangeDispUELog_Params
{
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnChangeDispCustomLog
struct ABP_AriseGamemodeDevelop_C_OnChangeDispCustomLog_Params
{
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDispEncountArea
struct ABP_AriseGamemodeDevelop_C_OnToggleDispEncountArea_Params
{
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleMemoryCulc
struct ABP_AriseGamemodeDevelop_C_OnToggleMemoryCulc_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnDecideWaitSymbolLoaded
struct ABP_AriseGamemodeDevelop_C_OnDecideWaitSymbolLoaded_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnSetWaitSymbolLoaded
struct ABP_AriseGamemodeDevelop_C_OnSetWaitSymbolLoaded_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnMemoryRefresh
struct ABP_AriseGamemodeDevelop_C_OnMemoryRefresh_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.CustomEvent_4
struct ABP_AriseGamemodeDevelop_C_CustomEvent_4_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnOpenCommandAssetExt
struct ABP_AriseGamemodeDevelop_C_OnOpenCommandAssetExt_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.MakeSendExecuteCommandButton
struct ABP_AriseGamemodeDevelop_C_MakeSendExecuteCommandButton_Params
{
	TArray<struct FString>                             TitleLists;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             CommandLists;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.SendConsoleCommand
struct ABP_AriseGamemodeDevelop_C_SendConsoleCommand_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.CustomEvent_3
struct ABP_AriseGamemodeDevelop_C_CustomEvent_3_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.CustomEvent_2
struct ABP_AriseGamemodeDevelop_C_CustomEvent_2_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.On Toggle Show Navigation
struct ABP_AriseGamemodeDevelop_C_On_Toggle_Show_Navigation_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.On Toggle Show Collision
struct ABP_AriseGamemodeDevelop_C_On_Toggle_Show_Collision_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleMemoryHUD
struct ABP_AriseGamemodeDevelop_C_OnToggleMemoryHUD_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleLoadLog
struct ABP_AriseGamemodeDevelop_C_OnToggleLoadLog_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnToggleDebugHUD
struct ABP_AriseGamemodeDevelop_C_OnToggleDebugHUD_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnGoBackTitle
struct ABP_AriseGamemodeDevelop_C_OnGoBackTitle_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnSetScreenMaskAlpha
struct ABP_AriseGamemodeDevelop_C_OnSetScreenMaskAlpha_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnBugReport
struct ABP_AriseGamemodeDevelop_C_OnBugReport_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnLevels
struct ABP_AriseGamemodeDevelop_C_OnLevels_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnFps
struct ABP_AriseGamemodeDevelop_C_OnFps_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.ExecuteUbergraph_BP_AriseGamemodeDevelop
struct ABP_AriseGamemodeDevelop_C_ExecuteUbergraph_BP_AriseGamemodeDevelop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventOpenFastTravelPoint_0__DelegateSignature
struct ABP_AriseGamemodeDevelop_C_EventOpenFastTravelPoint_0__DelegateSignature_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventRestartFieldScene_0__DelegateSignature
struct ABP_AriseGamemodeDevelop_C_EventRestartFieldScene_0__DelegateSignature_Params
{
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventChangeLocation_0__DelegateSignature
struct ABP_AriseGamemodeDevelop_C_EventChangeLocation_0__DelegateSignature_Params
{
	struct FString                                     NewLocationName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventBattleStart_0__DelegateSignature
struct ABP_AriseGamemodeDevelop_C_EventBattleStart_0__DelegateSignature_Params
{
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventPreMapChange_0__DelegateSignature
struct ABP_AriseGamemodeDevelop_C_EventPreMapChange_0__DelegateSignature_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventFieldWakeup_0__DelegateSignature
struct ABP_AriseGamemodeDevelop_C_EventFieldWakeup_0__DelegateSignature_Params
{
	unsigned char                                      PrevScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.EventPostMapChange_0__DelegateSignature
struct ABP_AriseGamemodeDevelop_C_EventPostMapChange_0__DelegateSignature_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.OnChangeWorldTime_0__DelegateSignature
struct ABP_AriseGamemodeDevelop_C_OnChangeWorldTime_0__DelegateSignature_Params
{
	float                                              NewWorldTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.DoChangeMapEnvironment_0__DelegateSignature
struct ABP_AriseGamemodeDevelop_C_DoChangeMapEnvironment_0__DelegateSignature_Params
{
	struct FString                                     EnvName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C.DoCaptureScene_0__DelegateSignature
struct ABP_AriseGamemodeDevelop_C_DoCaptureScene_0__DelegateSignature_Params
{
	struct FTransform                                  CaptureTransform;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UCameraComponent*                            BaseCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
