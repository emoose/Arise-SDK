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

// Function CEBANK.NetMessage.ToJson
struct UNetMessage_ToJson_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CEBANK.NetMessage.Set
struct UNetMessage_Set_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UNetMessage*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CEBANK.NetMessage.DumpHttpHeader
struct UNetMessage_DumpHttpHeader_Params
{
	struct FString                                     prefix;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CEBANK.NetMessage.DumpHttp
struct UNetMessage_DumpHttp_Params
{
	struct FString                                     prefix;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CEBANK.NetMessage.Dump
struct UNetMessage_Dump_Params
{
	struct FString                                     prefix;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CEBANK.NetMessage.Create
struct UNetMessage_Create_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UNetMessage*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CEBANK.NetHttp.SetHeader
struct UNetHttp_SetHeader_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     titleCd;                                                  // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
	struct FString                                     session;                                                  // (Parm, ZeroConstructor)
	int                                                Platform;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UNetHttp*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CEBANK.NetHttp.PostKpiRequest
struct UNetHttp_PostKpiRequest_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	class UNetMessage*                                 Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UNetHttp*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CEBANK.NetHttp.Create
struct UNetHttp_Create_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UNetHttp*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CEBANK.NetSocket.SetUseTickReceive
struct UNetSocket_SetUseTickReceive_Params
{
	bool                                               use;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UNetSocket*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CEBANK.NetSocket.SetHeader
struct UNetSocket_SetHeader_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     marker;                                                   // (Parm, ZeroConstructor)
	struct FString                                     version;                                                  // (Parm, ZeroConstructor)
	int                                                Platform;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
	class UNetSocket*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CEBANK.NetSocket.SetCipherMode
struct UNetSocket_SetCipherMode_Params
{
	ENetSocketCipherMode                               Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	class UNetSocket*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CEBANK.NetSocket.Send
struct UNetSocket_Send_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UNetMessage*                                 Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CEBANK.NetSocket.ReceiveSocket
struct UNetSocket_ReceiveSocket_Params
{
};

// Function CEBANK.NetSocket.IsConnected
struct UNetSocket_IsConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CEBANK.NetSocket.GetCipherMode
struct UNetSocket_GetCipherMode_Params
{
	ENetSocketCipherMode                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CEBANK.NetSocket.GetCipherKey
struct UNetSocket_GetCipherKey_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CEBANK.NetSocket.Disconnect
struct UNetSocket_Disconnect_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CEBANK.NetSocket.Create
struct UNetSocket_Create_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UNetSocket*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CEBANK.NetSocket.Connect
struct UNetSocket_Connect_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ip;                                                       // (Parm, ZeroConstructor)
	struct FString                                     Port;                                                     // (Parm, ZeroConstructor)
	float                                              limitSec;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CEBANK.NetSocketEvent.GetEventID
struct UNetSocketEvent_GetEventID_Params
{
	ENetSocketEventID                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CEBANK.NetSocketEvent.GetData
struct UNetSocketEvent_GetData_Params
{
	class UNetMessage*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CEBANK.NetSocketEvent.Create
struct UNetSocketEvent_Create_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UNetSocketEvent*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
