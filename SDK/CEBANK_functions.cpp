
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

// Function CEBANK.NetMessage.ToJson
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UNetMessage::ToJson()
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetMessage.ToJson");

	UNetMessage_ToJson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetMessage.Set
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UNetMessage*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNetMessage* UNetMessage::Set(int ID, TArray<unsigned char> Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetMessage.Set");

	UNetMessage_Set_Params params;
	params.ID = ID;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetMessage.DumpHttpHeader
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 prefix                         (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UNetMessage::DumpHttpHeader(const struct FString& prefix)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetMessage.DumpHttpHeader");

	UNetMessage_DumpHttpHeader_Params params;
	params.prefix = prefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetMessage.DumpHttp
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 prefix                         (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UNetMessage::DumpHttp(const struct FString& prefix)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetMessage.DumpHttp");

	UNetMessage_DumpHttp_Params params;
	params.prefix = prefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetMessage.Dump
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 prefix                         (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UNetMessage::Dump(const struct FString& prefix)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetMessage.Dump");

	UNetMessage_Dump_Params params;
	params.prefix = prefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetMessage.Create
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UNetMessage*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNetMessage* UNetMessage::STATIC_Create(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetMessage.Create");

	UNetMessage_Create_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetHttp.SetHeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 titleCd                        (Parm, ZeroConstructor)
// struct FString                 userId                         (Parm, ZeroConstructor)
// struct FString                 session                        (Parm, ZeroConstructor)
// int                            Platform                       (Parm, ZeroConstructor, IsPlainOldData)
// class UNetHttp*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNetHttp* UNetHttp::SetHeader(class UObject* WorldContextObject, const struct FString& titleCd, const struct FString& userId, const struct FString& session, int Platform)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetHttp.SetHeader");

	UNetHttp_SetHeader_Params params;
	params.WorldContextObject = WorldContextObject;
	params.titleCd = titleCd;
	params.userId = userId;
	params.session = session;
	params.Platform = Platform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetHttp.PostKpiRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 URL                            (Parm, ZeroConstructor)
// class UNetMessage*             Data                           (Parm, ZeroConstructor, IsPlainOldData)
// class UNetHttp*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNetHttp* UNetHttp::PostKpiRequest(class UObject* WorldContextObject, const struct FString& URL, class UNetMessage* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetHttp.PostKpiRequest");

	UNetHttp_PostKpiRequest_Params params;
	params.WorldContextObject = WorldContextObject;
	params.URL = URL;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetHttp.Create
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UNetHttp*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNetHttp* UNetHttp::STATIC_Create(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetHttp.Create");

	UNetHttp_Create_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetSocket.SetUseTickReceive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           use                            (Parm, ZeroConstructor, IsPlainOldData)
// class UNetSocket*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNetSocket* UNetSocket::SetUseTickReceive(bool use)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetSocket.SetUseTickReceive");

	UNetSocket_SetUseTickReceive_Params params;
	params.use = use;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetSocket.SetHeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 marker                         (Parm, ZeroConstructor)
// struct FString                 version                        (Parm, ZeroConstructor)
// int                            Platform                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 userId                         (Parm, ZeroConstructor)
// class UNetSocket*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNetSocket* UNetSocket::SetHeader(class UObject* WorldContextObject, const struct FString& marker, const struct FString& version, int Platform, const struct FString& userId)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetSocket.SetHeader");

	UNetSocket_SetHeader_Params params;
	params.WorldContextObject = WorldContextObject;
	params.marker = marker;
	params.version = version;
	params.Platform = Platform;
	params.userId = userId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetSocket.SetCipherMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ENetSocketCipherMode           Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)
// class UNetSocket*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNetSocket* UNetSocket::SetCipherMode(ENetSocketCipherMode Mode, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetSocket.SetCipherMode");

	UNetSocket_SetCipherMode_Params params;
	params.Mode = Mode;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetSocket.Send
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UNetMessage*             Data                           (Parm, ZeroConstructor, IsPlainOldData)

void UNetSocket::Send(class UObject* WorldContextObject, class UNetMessage* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetSocket.Send");

	UNetSocket_Send_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CEBANK.NetSocket.ReceiveSocket
// (Final, Native, Public, BlueprintCallable)

void UNetSocket::ReceiveSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetSocket.ReceiveSocket");

	UNetSocket_ReceiveSocket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CEBANK.NetSocket.IsConnected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNetSocket::IsConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetSocket.IsConnected");

	UNetSocket_IsConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetSocket.GetCipherMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ENetSocketCipherMode           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ENetSocketCipherMode UNetSocket::GetCipherMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetSocket.GetCipherMode");

	UNetSocket_GetCipherMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetSocket.GetCipherKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UNetSocket::GetCipherKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetSocket.GetCipherKey");

	UNetSocket_GetCipherKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetSocket.Disconnect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UNetSocket::Disconnect(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetSocket.Disconnect");

	UNetSocket_Disconnect_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CEBANK.NetSocket.Create
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UNetSocket*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNetSocket* UNetSocket::STATIC_Create(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetSocket.Create");

	UNetSocket_Create_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetSocket.Connect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ip                             (Parm, ZeroConstructor)
// struct FString                 Port                           (Parm, ZeroConstructor)
// float                          limitSec                       (Parm, ZeroConstructor, IsPlainOldData)

void UNetSocket::Connect(class UObject* WorldContextObject, const struct FString& ip, const struct FString& Port, float limitSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetSocket.Connect");

	UNetSocket_Connect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ip = ip;
	params.Port = Port;
	params.limitSec = limitSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CEBANK.NetSocketEvent.GetEventID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ENetSocketEventID              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ENetSocketEventID UNetSocketEvent::GetEventID()
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetSocketEvent.GetEventID");

	UNetSocketEvent_GetEventID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetSocketEvent.GetData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNetMessage*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNetMessage* UNetSocketEvent::GetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetSocketEvent.GetData");

	UNetSocketEvent_GetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CEBANK.NetSocketEvent.Create
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UNetSocketEvent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNetSocketEvent* UNetSocketEvent::STATIC_Create(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function CEBANK.NetSocketEvent.Create");

	UNetSocketEvent_Create_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
