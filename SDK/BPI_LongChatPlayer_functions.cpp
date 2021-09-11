
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

// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_OnStop
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_LongChatPlayer_C::IF_OnStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_OnStop");

	UBPI_LongChatPlayer_C_IF_OnStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_OnResume
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_LongChatPlayer_C::IF_OnResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_OnResume");

	UBPI_LongChatPlayer_C_IF_OnResume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_OnPause
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_LongChatPlayer_C::IF_OnPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_OnPause");

	UBPI_LongChatPlayer_C_IF_OnPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_IsPlayerFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnd                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_LongChatPlayer_C::IF_IsPlayerFinalize(bool* bEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_IsPlayerFinalize");

	UBPI_LongChatPlayer_C_IF_IsPlayerFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnd != nullptr)
		*bEnd = params.bEnd;
}


// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_Finalize
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_LongChatPlayer_C::IF_Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_Finalize");

	UBPI_LongChatPlayer_C_IF_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_IsScriptEndEnd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnd                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_LongChatPlayer_C::IF_IsScriptEndEnd(bool* bEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_IsScriptEndEnd");

	UBPI_LongChatPlayer_C_IF_IsScriptEndEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnd != nullptr)
		*bEnd = params.bEnd;
}


// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              PlayTransform                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FString                 PrecaptureBG                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPI_LongChatPlayer_C::IF_Play(const struct FTransform& PlayTransform, const struct FString& PrecaptureBG)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_Play");

	UBPI_LongChatPlayer_C_IF_Play_Params params;
	params.PlayTransform = PlayTransform;
	params.PrecaptureBG = PrecaptureBG;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_ChangePlayerCameraView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bChange                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_LongChatPlayer_C::IF_ChangePlayerCameraView(bool bChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_ChangePlayerCameraView");

	UBPI_LongChatPlayer_C_IF_ChangePlayerCameraView_Params params;
	params.bChange = bChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_GetPlayOption
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_LongChatPlayer_C::IF_GetPlayOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_GetPlayOption");

	UBPI_LongChatPlayer_C_IF_GetPlayOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_SetPlayParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ScriptPath                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 StringParh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLongChatPlayArgs       Args                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPI_LongChatPlayer_C::IF_SetPlayParams(const struct FString& ScriptPath, const struct FString& StringParh, const struct FLongChatPlayArgs& Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_SetPlayParams");

	UBPI_LongChatPlayer_C_IF_SetPlayParams_Params params;
	params.ScriptPath = ScriptPath;
	params.StringParh = StringParh;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_SetTickableWhenPaused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TickAble                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_LongChatPlayer_C::IF_SetTickableWhenPaused(bool TickAble)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_SetTickableWhenPaused");

	UBPI_LongChatPlayer_C_IF_SetTickableWhenPaused_Params params;
	params.TickAble = TickAble;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_SetLChatBuilder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Builder                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_LongChatPlayer_C::IF_SetLChatBuilder(class AActor* Builder)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_SetLChatBuilder");

	UBPI_LongChatPlayer_C_IF_SetLChatBuilder_Params params;
	params.Builder = Builder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_SetPlayTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPI_LongChatPlayer_C::IF_SetPlayTransform(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_SetPlayTransform");

	UBPI_LongChatPlayer_C_IF_SetPlayTransform_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_GetWindowZOrder
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WinId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ZOrder                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_LongChatPlayer_C::IF_GetWindowZOrder(int WinId, int* ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_GetWindowZOrder");

	UBPI_LongChatPlayer_C_IF_GetWindowZOrder_Params params;
	params.WinId = WinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ZOrder != nullptr)
		*ZOrder = params.ZOrder;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
