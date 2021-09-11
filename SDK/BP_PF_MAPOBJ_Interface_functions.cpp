
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

// Function BP_PF_MAPOBJ_Interface.BP_PF_MAPOBJ_Interface_C.RequestUpdateActive
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PF_MAPOBJ_Interface_C::RequestUpdateActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_Interface.BP_PF_MAPOBJ_Interface_C.RequestUpdateActive");

	UBP_PF_MAPOBJ_Interface_C_RequestUpdateActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
