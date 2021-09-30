
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

// Function BP_MapAnimalSpawnerInterface.BP_MapAnimalSpawnerInterface_C.OnAnimStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 PreviousStateName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 NextStateName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Turn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Move                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapAnimalSpawnerInterface_C::OnAnimStateChange(class USkeletalMeshComponent* SkeletalMeshComponent, const struct FString& PreviousStateName, const struct FString& NextStateName, float Turn, float Move)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawnerInterface.BP_MapAnimalSpawnerInterface_C.OnAnimStateChange");

	UBP_MapAnimalSpawnerInterface_C_OnAnimStateChange_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.PreviousStateName = PreviousStateName;
	params.NextStateName = NextStateName;
	params.Turn = Turn;
	params.Move = Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
