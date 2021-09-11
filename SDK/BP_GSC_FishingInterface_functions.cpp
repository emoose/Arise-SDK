
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

// Function BP_GSC_FishingInterface.BP_GSC_FishingInterface_C.GetFishingSceneController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBP_FishingSceneControllerInterface_C> Object                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_FishingInterface_C::GetFishingSceneController(TScriptInterface<class UBP_FishingSceneControllerInterface_C>* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_FishingInterface.BP_GSC_FishingInterface_C.GetFishingSceneController");

	UBP_GSC_FishingInterface_C_GetFishingSceneController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Object != nullptr)
		*Object = params.Object;
}


// Function BP_GSC_FishingInterface.BP_GSC_FishingInterface_C.InitializeByFishingPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBP_FishingPointInterface_C> FishingPoint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_FishingInterface_C::InitializeByFishingPoint(const TScriptInterface<class UBP_FishingPointInterface_C>& FishingPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_FishingInterface.BP_GSC_FishingInterface_C.InitializeByFishingPoint");

	UBP_GSC_FishingInterface_C_InitializeByFishingPoint_Params params;
	params.FishingPoint = FishingPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
