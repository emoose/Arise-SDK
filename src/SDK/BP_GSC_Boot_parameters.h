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

// Function BP_GSC_Boot.BP_GSC_Boot_C.IsLoadedLogoTextures
struct UBP_GSC_Boot_C_IsLoadedLogoTextures_Params
{
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.StartLoadBootEvent
struct UBP_GSC_Boot_C_StartLoadBootEvent_Params
{
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.PreloadLogoTexture
struct UBP_GSC_Boot_C_PreloadLogoTexture_Params
{
	int                                                LoadPriority;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.RemoveAllMenuPad
struct UBP_GSC_Boot_C_RemoveAllMenuPad_Params
{
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.GotoLoginScene
struct UBP_GSC_Boot_C_GotoLoginScene_Params
{
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.IsTriggerMenuPadProcesses
struct UBP_GSC_Boot_C_IsTriggerMenuPadProcesses_Params
{
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControllerId;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.CreateAllMenuPad
struct UBP_GSC_Boot_C_CreateAllMenuPad_Params
{
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.OnBootScreenDisplayAllEnd
struct UBP_GSC_Boot_C_OnBootScreenDisplayAllEnd_Params
{
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.NextDisplay
struct UBP_GSC_Boot_C_NextDisplay_Params
{
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.NewDisplay
struct UBP_GSC_Boot_C_NewDisplay_Params
{
	int                                                DisplayId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.BPE_Initialize
struct UBP_GSC_Boot_C_BPE_Initialize_Params
{
	ESceneInitializeMode                               initMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.BPE_Tick
struct UBP_GSC_Boot_C_BPE_Tick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.BPE_Finalize
struct UBP_GSC_Boot_C_BPE_Finalize_Params
{
	ESceneFinalizeReason                               finalizeReason;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.StartLogo
struct UBP_GSC_Boot_C_StartLogo_Params
{
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.CreateScreenWidget
struct UBP_GSC_Boot_C_CreateScreenWidget_Params
{
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.OnScreenEnd
struct UBP_GSC_Boot_C_OnScreenEnd_Params
{
	TEnumAsByte<ENM_BootScreenState>                   State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.StartLogin
struct UBP_GSC_Boot_C_StartLogin_Params
{
};

// Function BP_GSC_Boot.BP_GSC_Boot_C.ExecuteUbergraph_BP_GSC_Boot
struct UBP_GSC_Boot_C_ExecuteUbergraph_BP_GSC_Boot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
