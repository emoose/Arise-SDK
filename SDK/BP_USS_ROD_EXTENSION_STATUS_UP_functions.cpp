
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

// Function BP_USS_ROD_EXTENSION_STATUS_UP.BP_USS_ROD_EXTENSION_STATUS_UP_C.OnInitialized
// (Event, Protected, BlueprintEvent)

void UBP_USS_ROD_EXTENSION_STATUS_UP_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ROD_EXTENSION_STATUS_UP.BP_USS_ROD_EXTENSION_STATUS_UP_C.OnInitialized");

	UBP_USS_ROD_EXTENSION_STATUS_UP_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_ROD_EXTENSION_STATUS_UP.BP_USS_ROD_EXTENSION_STATUS_UP_C.ExecuteUbergraph_BP_USS_ROD_EXTENSION_STATUS_UP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_ROD_EXTENSION_STATUS_UP_C::ExecuteUbergraph_BP_USS_ROD_EXTENSION_STATUS_UP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ROD_EXTENSION_STATUS_UP.BP_USS_ROD_EXTENSION_STATUS_UP_C.ExecuteUbergraph_BP_USS_ROD_EXTENSION_STATUS_UP");

	UBP_USS_ROD_EXTENSION_STATUS_UP_C_ExecuteUbergraph_BP_USS_ROD_EXTENSION_STATUS_UP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
