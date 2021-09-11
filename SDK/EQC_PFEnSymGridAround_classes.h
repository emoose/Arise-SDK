#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EQC_PFEnSymGridAround.EQC_PFEnSymGridAround_C
// 0x0000 (0x0030 - 0x0030)
class UEQC_PFEnSymGridAround_C : public UEnvQueryContext_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EQC_PFEnSymGridAround.EQC_PFEnSymGridAround_C");
		return ptr;
	}


	void GetGroundLocation(class ABP_EncountSymbolBase_C* InPawn, struct FVector* Result);
	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
