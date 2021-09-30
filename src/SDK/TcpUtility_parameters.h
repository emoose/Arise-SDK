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

// Function TcpUtility.TcpListenerActor.Disconnect
struct ATcpListenerActor_Disconnect_Params
{
};

// Function TcpUtility.TcpListenerActor.Connect
struct ATcpListenerActor_Connect_Params
{
};

// Function TcpUtility.TcpListenerActor.BPE_OnReciveStrings
struct ATcpListenerActor_BPE_OnReciveStrings_Params
{
	struct FString                                     Strings;                                                  // (Parm, ZeroConstructor)
};

// Function TcpUtility.TcpListenerActor.BPE_OnReciveCommand
struct ATcpListenerActor_BPE_OnReciveCommand_Params
{
	struct FString                                     headder;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
	TArray<struct FString>                             Params;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TcpUtility.TcpListener.Get
struct UTcpListener_Get_Params
{
	class UTcpListener*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TcpUtility.TcpListener.Disconnect
struct UTcpListener_Disconnect_Params
{
};

// Function TcpUtility.TcpListener.DecodeReciveCommand
struct UTcpListener_DecodeReciveCommand_Params
{
	struct FString                                     packedCommand;                                            // (Parm, ZeroConstructor)
	struct FString                                     headder;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Command;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FString>                             Params;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function TcpUtility.TcpListener.Connect
struct UTcpListener_Connect_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
