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

// BlueprintGeneratedClass BP_AriseAmbientSoundMapActor.BP_AriseAmbientSoundMapActor_C
// 0x0008 (0x0370 - 0x0368)
class ABP_AriseAmbientSoundMapActor_C : public AAriseAmbientSoundMapActorBase
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AriseAmbientSoundMapActor.BP_AriseAmbientSoundMapActor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
