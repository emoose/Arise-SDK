
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

// Function TO14_BPI_GUI_SYS_SUBTITLE.TO14_BPI_GUI_SYS_SUBTITLE_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_SUBTITLE_C::SetVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SUBTITLE.TO14_BPI_GUI_SYS_SUBTITLE_C.SetVisible");

	UTO14_BPI_GUI_SYS_SUBTITLE_C_SetVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SUBTITLE.TO14_BPI_GUI_SYS_SUBTITLE_C.ClearString
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_SUBTITLE_C::ClearString()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SUBTITLE.TO14_BPI_GUI_SYS_SUBTITLE_C.ClearString");

	UTO14_BPI_GUI_SYS_SUBTITLE_C_ClearString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SUBTITLE.TO14_BPI_GUI_SYS_SUBTITLE_C.SetStringID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_SUBTITLE_C::SetStringID(const struct FString& Group, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SUBTITLE.TO14_BPI_GUI_SYS_SUBTITLE_C.SetStringID");

	UTO14_BPI_GUI_SYS_SUBTITLE_C_SetStringID_Params params;
	params.Group = Group;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SUBTITLE.TO14_BPI_GUI_SYS_SUBTITLE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_SUBTITLE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SUBTITLE.TO14_BPI_GUI_SYS_SUBTITLE_C.Construct");

	UTO14_BPI_GUI_SYS_SUBTITLE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SUBTITLE.TO14_BPI_GUI_SYS_SUBTITLE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_SUBTITLE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_SUBTITLE_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_SUBTITLE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SUBTITLE.TO14_BPI_GUI_SYS_SUBTITLE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_SUBTITLE");

	UTO14_BPI_GUI_SYS_SUBTITLE_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_SUBTITLE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
