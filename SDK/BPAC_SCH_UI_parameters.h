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

// Function BPAC_SCH_UI.BPAC_SCH_UI_C.Abort
struct UBPAC_SCH_UI_C_Abort_Params
{
};

// Function BPAC_SCH_UI.BPAC_SCH_UI_C.Clear
struct UBPAC_SCH_UI_C_Clear_Params
{
};

// Function BPAC_SCH_UI.BPAC_SCH_UI_C.FindCharaIconID
struct UBPAC_SCH_UI_C_FindCharaIconID_Params
{
	struct FString                                     Speaker;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EAriseCharaIconID                                  IconId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPAC_SCH_UI.BPAC_SCH_UI_C.DestoryWidget
struct UBPAC_SCH_UI_C_DestoryWidget_Params
{
};

// Function BPAC_SCH_UI.BPAC_SCH_UI_C.CreateWidget
struct UBPAC_SCH_UI_C_CreateWidget_Params
{
	struct FString                                     FaceIcon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Speaker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPAC_SCH_UI.BPAC_SCH_UI_C.ReceiveBeginPlay
struct UBPAC_SCH_UI_C_ReceiveBeginPlay_Params
{
};

// Function BPAC_SCH_UI.BPAC_SCH_UI_C.ExecuteUbergraph_BPAC_SCH_UI
struct UBPAC_SCH_UI_C_ExecuteUbergraph_BPAC_SCH_UI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
