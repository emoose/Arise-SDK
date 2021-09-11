
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

// Function BPAC_SCH_UI.BPAC_SCH_UI_C.Abort
// (Public, BlueprintCallable, BlueprintEvent)

void UBPAC_SCH_UI_C::Abort()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAC_SCH_UI.BPAC_SCH_UI_C.Abort");

	UBPAC_SCH_UI_C_Abort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAC_SCH_UI.BPAC_SCH_UI_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UBPAC_SCH_UI_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAC_SCH_UI.BPAC_SCH_UI_C.Clear");

	UBPAC_SCH_UI_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAC_SCH_UI.BPAC_SCH_UI_C.FindCharaIconID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 Speaker                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EAriseCharaIconID              IconId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPAC_SCH_UI_C::FindCharaIconID(const struct FString& Speaker, EAriseCharaIconID* IconId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAC_SCH_UI.BPAC_SCH_UI_C.FindCharaIconID");

	UBPAC_SCH_UI_C_FindCharaIconID_Params params;
	params.Speaker = Speaker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconId != nullptr)
		*IconId = params.IconId;
}


// Function BPAC_SCH_UI.BPAC_SCH_UI_C.DestoryWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UBPAC_SCH_UI_C::DestoryWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAC_SCH_UI.BPAC_SCH_UI_C.DestoryWidget");

	UBPAC_SCH_UI_C_DestoryWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAC_SCH_UI.BPAC_SCH_UI_C.CreateWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FaceIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Speaker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPAC_SCH_UI_C::CreateWidget(const struct FString& FaceIcon, const struct FString& Speaker, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAC_SCH_UI.BPAC_SCH_UI_C.CreateWidget");

	UBPAC_SCH_UI_C_CreateWidget_Params params;
	params.FaceIcon = FaceIcon;
	params.Speaker = Speaker;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAC_SCH_UI.BPAC_SCH_UI_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPAC_SCH_UI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAC_SCH_UI.BPAC_SCH_UI_C.ReceiveBeginPlay");

	UBPAC_SCH_UI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAC_SCH_UI.BPAC_SCH_UI_C.ExecuteUbergraph_BPAC_SCH_UI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAC_SCH_UI_C::ExecuteUbergraph_BPAC_SCH_UI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAC_SCH_UI.BPAC_SCH_UI_C.ExecuteUbergraph_BPAC_SCH_UI");

	UBPAC_SCH_UI_C_ExecuteUbergraph_BPAC_SCH_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
