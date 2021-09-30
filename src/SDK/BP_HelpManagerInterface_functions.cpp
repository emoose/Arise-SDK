
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

// Function BP_HelpManagerInterface.BP_HelpManagerInterface_C.CloseKeyHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EKeyHelpMode>      Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HelpManagerInterface_C::CloseKeyHelp(TEnumAsByte<EKeyHelpMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpManagerInterface.BP_HelpManagerInterface_C.CloseKeyHelp");

	UBP_HelpManagerInterface_C_CloseKeyHelp_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HelpManagerInterface.BP_HelpManagerInterface_C.ClosePlayableHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HelpLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_HelpManagerInterface_C::ClosePlayableHelp(const struct FString& HelpLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpManagerInterface.BP_HelpManagerInterface_C.ClosePlayableHelp");

	UBP_HelpManagerInterface_C_ClosePlayableHelp_Params params;
	params.HelpLabel = HelpLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HelpManagerInterface.BP_HelpManagerInterface_C.OpenKeyHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EKeyHelpMode>      Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HelpManagerInterface_C::OpenKeyHelp(TEnumAsByte<EKeyHelpMode> Mode, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpManagerInterface.BP_HelpManagerInterface_C.OpenKeyHelp");

	UBP_HelpManagerInterface_C_OpenKeyHelp_Params params;
	params.Mode = Mode;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HelpManagerInterface.BP_HelpManagerInterface_C.OpenPlayableHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HelpLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HelpManagerInterface_C::OpenPlayableHelp(const struct FString& HelpLabel, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpManagerInterface.BP_HelpManagerInterface_C.OpenPlayableHelp");

	UBP_HelpManagerInterface_C_OpenPlayableHelp_Params params;
	params.HelpLabel = HelpLabel;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HelpManagerInterface.BP_HelpManagerInterface_C.OpenTextHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HelpLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_HelpManagerInterface_C::OpenTextHelp(const struct FString& HelpLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpManagerInterface.BP_HelpManagerInterface_C.OpenTextHelp");

	UBP_HelpManagerInterface_C_OpenTextHelp_Params params;
	params.HelpLabel = HelpLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
