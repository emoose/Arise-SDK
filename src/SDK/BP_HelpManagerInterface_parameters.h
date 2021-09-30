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

// Function BP_HelpManagerInterface.BP_HelpManagerInterface_C.CloseKeyHelp
struct UBP_HelpManagerInterface_C_CloseKeyHelp_Params
{
	TEnumAsByte<EKeyHelpMode>                          Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HelpManagerInterface.BP_HelpManagerInterface_C.ClosePlayableHelp
struct UBP_HelpManagerInterface_C_ClosePlayableHelp_Params
{
	struct FString                                     HelpLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_HelpManagerInterface.BP_HelpManagerInterface_C.OpenKeyHelp
struct UBP_HelpManagerInterface_C_OpenKeyHelp_Params
{
	TEnumAsByte<EKeyHelpMode>                          Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HelpManagerInterface.BP_HelpManagerInterface_C.OpenPlayableHelp
struct UBP_HelpManagerInterface_C_OpenPlayableHelp_Params
{
	struct FString                                     HelpLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HelpManagerInterface.BP_HelpManagerInterface_C.OpenTextHelp
struct UBP_HelpManagerInterface_C_OpenTextHelp_Params
{
	struct FString                                     HelpLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
