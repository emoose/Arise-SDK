
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

// Function BP_BTL_USS_MAGIC_STOCK.BP_BTL_USS_MAGIC_STOCK_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_MAGIC_STOCK_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_MAGIC_STOCK.BP_BTL_USS_MAGIC_STOCK_C.OnDisabled");

	UBP_BTL_USS_MAGIC_STOCK_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_MAGIC_STOCK.BP_BTL_USS_MAGIC_STOCK_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_MAGIC_STOCK_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_MAGIC_STOCK.BP_BTL_USS_MAGIC_STOCK_C.OnEnabled");

	UBP_BTL_USS_MAGIC_STOCK_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_MAGIC_STOCK.BP_BTL_USS_MAGIC_STOCK_C.OnMagicStockChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_MAGIC_STOCK_C::OnMagicStockChanged(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_MAGIC_STOCK.BP_BTL_USS_MAGIC_STOCK_C.OnMagicStockChanged");

	UBP_BTL_USS_MAGIC_STOCK_C_OnMagicStockChanged_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_MAGIC_STOCK.BP_BTL_USS_MAGIC_STOCK_C.MagicStockChanged
// (BlueprintCallable, BlueprintEvent)

void UBP_BTL_USS_MAGIC_STOCK_C::MagicStockChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_MAGIC_STOCK.BP_BTL_USS_MAGIC_STOCK_C.MagicStockChanged");

	UBP_BTL_USS_MAGIC_STOCK_C_MagicStockChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_MAGIC_STOCK.BP_BTL_USS_MAGIC_STOCK_C.ExecuteUbergraph_BP_BTL_USS_MAGIC_STOCK
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_MAGIC_STOCK_C::ExecuteUbergraph_BP_BTL_USS_MAGIC_STOCK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_MAGIC_STOCK.BP_BTL_USS_MAGIC_STOCK_C.ExecuteUbergraph_BP_BTL_USS_MAGIC_STOCK");

	UBP_BTL_USS_MAGIC_STOCK_C_ExecuteUbergraph_BP_BTL_USS_MAGIC_STOCK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
