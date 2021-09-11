
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

// Function BP_AliasManagerInterface.BP_AliasManagerInterface_C.AddDelegateTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFDelegateManager*      InDelegateManager              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InPriority                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AliasManagerInterface_C::AddDelegateTo(class APFDelegateManager* InDelegateManager, int InPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AliasManagerInterface.BP_AliasManagerInterface_C.AddDelegateTo");

	UBP_AliasManagerInterface_C_AddDelegateTo_Params params;
	params.InDelegateManager = InDelegateManager;
	params.InPriority = InPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
