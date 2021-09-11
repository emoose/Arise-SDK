
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

// Function TcpUtility.TcpListenerActor.Disconnect
// (Final, Native, Public, BlueprintCallable)

void ATcpListenerActor::Disconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TcpUtility.TcpListenerActor.Disconnect");

	ATcpListenerActor_Disconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TcpUtility.TcpListenerActor.Connect
// (Final, Native, Public, BlueprintCallable)

void ATcpListenerActor::Connect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TcpUtility.TcpListenerActor.Connect");

	ATcpListenerActor_Connect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TcpUtility.TcpListenerActor.BPE_OnReciveStrings
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Strings                        (Parm, ZeroConstructor)

void ATcpListenerActor::BPE_OnReciveStrings(const struct FString& Strings)
{
	static auto fn = UObject::FindObject<UFunction>("Function TcpUtility.TcpListenerActor.BPE_OnReciveStrings");

	ATcpListenerActor_BPE_OnReciveStrings_Params params;
	params.Strings = Strings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TcpUtility.TcpListenerActor.BPE_OnReciveCommand
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 headder                        (Parm, ZeroConstructor)
// struct FString                 Command                        (Parm, ZeroConstructor)
// TArray<struct FString>         Params                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATcpListenerActor::BPE_OnReciveCommand(const struct FString& headder, const struct FString& Command, TArray<struct FString>* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function TcpUtility.TcpListenerActor.BPE_OnReciveCommand");

	ATcpListenerActor_BPE_OnReciveCommand_Params params;
	params.headder = headder;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;
}


// Function TcpUtility.TcpListener.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTcpListener*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTcpListener* UTcpListener::STATIC_Get()
{
	static auto fn = UObject::FindObject<UFunction>("Function TcpUtility.TcpListener.Get");

	UTcpListener_Get_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TcpUtility.TcpListener.Disconnect
// (Final, Native, Public, BlueprintCallable)

void UTcpListener::Disconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TcpUtility.TcpListener.Disconnect");

	UTcpListener_Disconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TcpUtility.TcpListener.DecodeReciveCommand
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 packedCommand                  (Parm, ZeroConstructor)
// struct FString                 headder                        (Parm, OutParm, ZeroConstructor)
// struct FString                 Command                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FString>         Params                         (Parm, OutParm, ZeroConstructor)

void UTcpListener::DecodeReciveCommand(const struct FString& packedCommand, struct FString* headder, struct FString* Command, TArray<struct FString>* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function TcpUtility.TcpListener.DecodeReciveCommand");

	UTcpListener_DecodeReciveCommand_Params params;
	params.packedCommand = packedCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (headder != nullptr)
		*headder = params.headder;
	if (Command != nullptr)
		*Command = params.Command;
	if (Params != nullptr)
		*Params = params.Params;
}


// Function TcpUtility.TcpListener.Connect
// (Final, Native, Public, BlueprintCallable)

void UTcpListener::Connect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TcpUtility.TcpListener.Connect");

	UTcpListener_Connect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
