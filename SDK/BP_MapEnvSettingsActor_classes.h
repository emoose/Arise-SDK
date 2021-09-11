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

// BlueprintGeneratedClass BP_MapEnvSettingsActor.BP_MapEnvSettingsActor_C
// 0x0008 (0x0418 - 0x0410)
class ABP_MapEnvSettingsActor_C : public AMapEnvSettingsActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapEnvSettingsActor.BP_MapEnvSettingsActor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
