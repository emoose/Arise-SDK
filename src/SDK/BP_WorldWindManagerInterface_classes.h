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

// BlueprintGeneratedClass BP_WorldWindManagerInterface.BP_WorldWindManagerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_WorldWindManagerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WorldWindManagerInterface.BP_WorldWindManagerInterface_C");
		return ptr;
	}


	void SetWindController(class AActor* WindController);
	void GetWindController(class AActor** WindController);
	void AddWindEmitter(class UParticleSystemComponent* Particle, float Rate);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
