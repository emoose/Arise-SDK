
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

// Function BP_USS_ROD_EXTENSION.BP_USS_ROD_EXTENSION_C.OnExtensionRankChanged
// (BlueprintCallable, BlueprintEvent)

void UBP_USS_ROD_EXTENSION_C::OnExtensionRankChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ROD_EXTENSION.BP_USS_ROD_EXTENSION_C.OnExtensionRankChanged");

	UBP_USS_ROD_EXTENSION_C_OnExtensionRankChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_ROD_EXTENSION.BP_USS_ROD_EXTENSION_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_ROD_EXTENSION_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ROD_EXTENSION.BP_USS_ROD_EXTENSION_C.OnEnabled");

	UBP_USS_ROD_EXTENSION_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_ROD_EXTENSION.BP_USS_ROD_EXTENSION_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_ROD_EXTENSION_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ROD_EXTENSION.BP_USS_ROD_EXTENSION_C.OnDisabled");

	UBP_USS_ROD_EXTENSION_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_ROD_EXTENSION.BP_USS_ROD_EXTENSION_C.ExecuteUbergraph_BP_USS_ROD_EXTENSION
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_ROD_EXTENSION_C::ExecuteUbergraph_BP_USS_ROD_EXTENSION(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ROD_EXTENSION.BP_USS_ROD_EXTENSION_C.ExecuteUbergraph_BP_USS_ROD_EXTENSION");

	UBP_USS_ROD_EXTENSION_C_ExecuteUbergraph_BP_USS_ROD_EXTENSION_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
