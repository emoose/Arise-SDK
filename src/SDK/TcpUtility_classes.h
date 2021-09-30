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

// Class TcpUtility.TcpListenerActor
// 0x0040 (0x0368 - 0x0328)
class ATcpListenerActor : public AActor
{
public:
	struct FString                                     IPAddress;                                                // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	int                                                PortNo;                                                   // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x033C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TcpUtility.TcpListenerActor");
		return ptr;
	}


	void Disconnect();
	void Connect();
	void BPE_OnReciveStrings(const struct FString& Strings);
	void BPE_OnReciveCommand(const struct FString& headder, const struct FString& Command, TArray<struct FString>* Params);
};


// Class TcpUtility.TcpListener
// 0x0058 (0x0080 - 0x0028)
class UTcpListener : public UObject
{
public:
	struct FString                                     IPAddress;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	int                                                PortNo;                                                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnReceiveCommand;                                         // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0050(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TcpUtility.TcpListener");
		return ptr;
	}


	class UTcpListener* STATIC_Get();
	void Disconnect();
	void DecodeReciveCommand(const struct FString& packedCommand, struct FString* headder, struct FString* Command, TArray<struct FString>* Params);
	void Connect();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
