#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class CEBANK.NetMessage
// 0x0010 (0x0038 - 0x0028)
class UNetMessage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.NetMessage");
		return ptr;
	}


	struct FString ToJson();
	class UNetMessage* Set(int ID, TArray<unsigned char> Data);
	struct FString DumpHttpHeader(const struct FString& prefix);
	struct FString DumpHttp(const struct FString& prefix);
	struct FString Dump(const struct FString& prefix);
	class UNetMessage* STATIC_Create(class UObject* WorldContextObject);
};


// Class CEBANK.AProtocolMessage
// 0x0000 (0x0038 - 0x0038)
class UAProtocolMessage : public UNetMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.AProtocolMessage");
		return ptr;
	}

};


// Class CEBANK.AgreeKPI
// 0x0000 (0x0038 - 0x0038)
class UAgreeKPI : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.AgreeKPI");
		return ptr;
	}

};


// Class CEBANK.GetEnv
// 0x0000 (0x0038 - 0x0038)
class UGetEnv : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.GetEnv");
		return ptr;
	}

};


// Class CEBANK.KPI
// 0x0000 (0x0038 - 0x0038)
class UKPI : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.KPI");
		return ptr;
	}

};


// Class CEBANK.LobbyEntry
// 0x0000 (0x0038 - 0x0038)
class ULobbyEntry : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.LobbyEntry");
		return ptr;
	}

};


// Class CEBANK.LobbyExit
// 0x0000 (0x0038 - 0x0038)
class ULobbyExit : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.LobbyExit");
		return ptr;
	}

};


// Class CEBANK.LobbyStatusChange
// 0x0000 (0x0038 - 0x0038)
class ULobbyStatusChange : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.LobbyStatusChange");
		return ptr;
	}

};


// Class CEBANK.LobbyUserList
// 0x0000 (0x0038 - 0x0038)
class ULobbyUserList : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.LobbyUserList");
		return ptr;
	}

};


// Class CEBANK.MatchingStart
// 0x0000 (0x0038 - 0x0038)
class UMatchingStart : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.MatchingStart");
		return ptr;
	}

};


// Class CEBANK.NetHttp
// 0x00C0 (0x00E8 - 0x0028)
class UNetHttp : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnReceive;                                                // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnError;                                                  // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.NetHttp");
		return ptr;
	}


	class UNetHttp* SetHeader(class UObject* WorldContextObject, const struct FString& titleCd, const struct FString& userId, const struct FString& session, int Platform);
	class UNetHttp* PostKpiRequest(class UObject* WorldContextObject, const struct FString& URL, class UNetMessage* Data);
	class UNetHttp* STATIC_Create(class UObject* WorldContextObject);
};


// Class CEBANK.NetSocket
// 0x00C0 (0x00E8 - 0x0028)
class UNetSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEvent;                                                  // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.NetSocket");
		return ptr;
	}


	class UNetSocket* SetUseTickReceive(bool use);
	class UNetSocket* SetHeader(class UObject* WorldContextObject, const struct FString& marker, const struct FString& version, int Platform, const struct FString& userId);
	class UNetSocket* SetCipherMode(ENetSocketCipherMode Mode, const struct FString& Key);
	void Send(class UObject* WorldContextObject, class UNetMessage* Data);
	void ReceiveSocket();
	bool IsConnected();
	ENetSocketCipherMode GetCipherMode();
	struct FString GetCipherKey();
	void Disconnect(class UObject* WorldContextObject);
	class UNetSocket* STATIC_Create(class UObject* WorldContextObject);
	void Connect(class UObject* WorldContextObject, const struct FString& ip, const struct FString& Port, float limitSec);
};


// Class CEBANK.NetSocketEvent
// 0x0010 (0x0038 - 0x0028)
class UNetSocketEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.NetSocketEvent");
		return ptr;
	}


	ENetSocketEventID GetEventID();
	class UNetMessage* GetData();
	class UNetSocketEvent* STATIC_Create(class UObject* WorldContextObject);
};


// Class CEBANK.NotifyLobbyStatusChange
// 0x0000 (0x0038 - 0x0038)
class UNotifyLobbyStatusChange : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.NotifyLobbyStatusChange");
		return ptr;
	}

};


// Class CEBANK.NotifyRoomMessageSend
// 0x0000 (0x0038 - 0x0038)
class UNotifyRoomMessageSend : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.NotifyRoomMessageSend");
		return ptr;
	}

};


// Class CEBANK.NotifyRoomStatusChange
// 0x0000 (0x0038 - 0x0038)
class UNotifyRoomStatusChange : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.NotifyRoomStatusChange");
		return ptr;
	}

};


// Class CEBANK.OfflineKPI
// 0x0000 (0x0038 - 0x0038)
class UOfflineKPI : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.OfflineKPI");
		return ptr;
	}

};


// Class CEBANK.RoomCreate
// 0x0000 (0x0038 - 0x0038)
class URoomCreate : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.RoomCreate");
		return ptr;
	}

};


// Class CEBANK.RoomMessageSend
// 0x0000 (0x0038 - 0x0038)
class URoomMessageSend : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.RoomMessageSend");
		return ptr;
	}

};


// Class CEBANK.RoomSearch
// 0x0000 (0x0038 - 0x0038)
class URoomSearch : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.RoomSearch");
		return ptr;
	}

};


// Class CEBANK.TssReadList
// 0x0000 (0x0038 - 0x0038)
class UTssReadList : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.TssReadList");
		return ptr;
	}

};


// Class CEBANK.TssReadSlot
// 0x0000 (0x0038 - 0x0038)
class UTssReadSlot : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.TssReadSlot");
		return ptr;
	}

};


// Class CEBANK.UserCreate
// 0x0000 (0x0038 - 0x0038)
class UUserCreate : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.UserCreate");
		return ptr;
	}

};


// Class CEBANK.UserLogin
// 0x0000 (0x0038 - 0x0038)
class UUserLogin : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.UserLogin");
		return ptr;
	}

};


// Class CEBANK.TssRead
// 0x0000 (0x0038 - 0x0038)
class UTssRead : public UAProtocolMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CEBANK.TssRead");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
