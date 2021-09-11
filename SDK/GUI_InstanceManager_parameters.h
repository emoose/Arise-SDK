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

// Function GUI_InstanceManager.GUI_InstanceManager_C.GetNewstInfoManager
struct UGUI_InstanceManager_C_GetNewstInfoManager_Params
{
	class UNewsInfoManager*                            NewstInfoManager;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.GetSystemWindow_Reserved
struct UGUI_InstanceManager_C_GetSystemWindow_Reserved_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.GetFishingToolSelect
struct UGUI_InstanceManager_C_GetFishingToolSelect_Params
{
	class UUserWidget*                                 FishingToolSelect;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.GetMessageWindow
struct UGUI_InstanceManager_C_GetMessageWindow_Params
{
	class UUserWidget*                                 MessageWindow;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.GetSystemWindow
struct UGUI_InstanceManager_C_GetSystemWindow_Params
{
	class UUserWidget*                                 SystemWindow;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.GetPopupInfoManager
struct UGUI_InstanceManager_C_GetPopupInfoManager_Params
{
	class UPopupInfoManager*                           PopupInfoManager;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.GetNavimapFootprintManager
struct UGUI_InstanceManager_C_GetNavimapFootprintManager_Params
{
	class UNavimapFootprintManager*                    NavimapFootprint;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.GetNeedShowTP
struct UGUI_InstanceManager_C_GetNeedShowTP_Params
{
	bool                                               NeedShowTP;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.GetTPRecent
struct UGUI_InstanceManager_C_GetTPRecent_Params
{
	float                                              TPRecent;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.GetTPCurrent
struct UGUI_InstanceManager_C_GetTPCurrent_Params
{
	float                                              TPCurrent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.GetAliasGetWindow
struct UGUI_InstanceManager_C_GetAliasGetWindow_Params
{
	class UUserWidget*                                 AliasGetWindow;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.GetFishingResult
struct UGUI_InstanceManager_C_GetFishingResult_Params
{
	class UUserWidget*                                 FishingResult;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.GetPauseWindow
struct UGUI_InstanceManager_C_GetPauseWindow_Params
{
	class UUserWidget*                                 PauseWindow;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.SetPauseWindow
struct UGUI_InstanceManager_C_SetPauseWindow_Params
{
	class UUserWidget*                                 PauseWindow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.SetFishingResult
struct UGUI_InstanceManager_C_SetFishingResult_Params
{
	class UUserWidget*                                 FishingResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.SetAliasGetWindow
struct UGUI_InstanceManager_C_SetAliasGetWindow_Params
{
	class UUserWidget*                                 AliasGetWindow;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.SetTPCurrent
struct UGUI_InstanceManager_C_SetTPCurrent_Params
{
	float                                              TPCurrent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.SetTPRecent
struct UGUI_InstanceManager_C_SetTPRecent_Params
{
	float                                              TPRecent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.SetNeedShowTP
struct UGUI_InstanceManager_C_SetNeedShowTP_Params
{
	bool                                               NeedShowTP;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.SetNavimapFootprintManager
struct UGUI_InstanceManager_C_SetNavimapFootprintManager_Params
{
	class UNavimapFootprintManager*                    NavimapFootprint;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.SetPopupInfoManager
struct UGUI_InstanceManager_C_SetPopupInfoManager_Params
{
	class UPopupInfoManager*                           PopupInfoManager;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.SetSystemWindow
struct UGUI_InstanceManager_C_SetSystemWindow_Params
{
	class UUserWidget*                                 SystemWindow;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.SetMessageWindow
struct UGUI_InstanceManager_C_SetMessageWindow_Params
{
	class UUserWidget*                                 MessageWindow;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.SetFishingToolSelect
struct UGUI_InstanceManager_C_SetFishingToolSelect_Params
{
	class UUserWidget*                                 FishingToolSelect;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.SetSystemWindow_Reserved
struct UGUI_InstanceManager_C_SetSystemWindow_Reserved_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.SeNewstInfoManager
struct UGUI_InstanceManager_C_SeNewstInfoManager_Params
{
	class UNewsInfoManager*                            NewstInfoManager;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.Terminate
struct UGUI_InstanceManager_C_Terminate_Params
{
};

// Function GUI_InstanceManager.GUI_InstanceManager_C.ExecuteUbergraph_GUI_InstanceManager
struct UGUI_InstanceManager_C_ExecuteUbergraph_GUI_InstanceManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
