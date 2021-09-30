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

// Function BPDebWid_InstLog.BPDebWid_InstLog_C.SetScale
struct UBPDebWid_InstLog_C_SetScale_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPDebWid_InstLog.BPDebWid_InstLog_C.PrintString
struct UBPDebWid_InstLog_C_PrintString_Params
{
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPDebWid_InstLog.BPDebWid_InstLog_C.RenderInstantLog
struct UBPDebWid_InstLog_C_RenderInstantLog_Params
{
	class AHUD*                                        MasterHUD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPDebWid_InstLog.BPDebWid_InstLog_C.Render
struct UBPDebWid_InstLog_C_Render_Params
{
	class AHUD*                                        MasterHUD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPDebWid_InstLog.BPDebWid_InstLog_C.ExecuteUbergraph_BPDebWid_InstLog
struct UBPDebWid_InstLog_C_ExecuteUbergraph_BPDebWid_InstLog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
