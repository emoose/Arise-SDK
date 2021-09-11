
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

// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Abort
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C::Abort()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Abort");

	UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_Abort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Swap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TextIndexA                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TextIndexB                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C::Swap(int TextIndexA, int TextIndexB)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Swap");

	UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_Swap_Params params;
	params.TextIndexA = TextIndexA;
	params.TextIndexB = TextIndexB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Init");

	UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Clear");

	UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Close");

	UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.PlayShortChat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseCharaIconID              CharaIconID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OverrideIconLabel              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C::PlayShortChat(EAriseCharaIconID CharaIconID, const struct FName& OverrideIconLabel, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.PlayShortChat");

	UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_PlayShortChat_Params params;
	params.CharaIconID = CharaIconID;
	params.OverrideIconLabel = OverrideIconLabel;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.PlayShortChat_MessageData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMessageData*            MessageData                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OverrideIconLabel              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C::PlayShortChat_MessageData(class UMessageData* MessageData, const struct FName& OverrideIconLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.PlayShortChat_MessageData");

	UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_PlayShortChat_MessageData_Params params;
	params.MessageData = MessageData;
	params.OverrideIconLabel = OverrideIconLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Construct");

	UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT_ROOT_BASE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT_ROOT_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT_ROOT_BASE");

	UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
