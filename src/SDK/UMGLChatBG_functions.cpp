
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

// Function UMGLChatBG.UMGLChatBG_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMGLChatBG_C::SetVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGLChatBG.UMGLChatBG_C.SetVisible");

	UUMGLChatBG_C_SetVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMGLChatBG.UMGLChatBG_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMGLChatBG_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGLChatBG.UMGLChatBG_C.Construct");

	UUMGLChatBG_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMGLChatBG.UMGLChatBG_C.ExecuteUbergraph_UMGLChatBG
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMGLChatBG_C::ExecuteUbergraph_UMGLChatBG(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGLChatBG.UMGLChatBG_C.ExecuteUbergraph_UMGLChatBG");

	UUMGLChatBG_C_ExecuteUbergraph_UMGLChatBG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
