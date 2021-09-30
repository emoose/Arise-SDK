
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

// Function BP_GSC_LongChatInterface.BP_GSC_LongChatInterface_C.IF_SetDelayLongchatClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDelay                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChatInterface_C::IF_SetDelayLongchatClose(bool bDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChatInterface.BP_GSC_LongChatInterface_C.IF_SetDelayLongchatClose");

	UBP_GSC_LongChatInterface_C_IF_SetDelayLongchatClose_Params params;
	params.bDelay = bDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
