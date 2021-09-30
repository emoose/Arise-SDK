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

// BlueprintGeneratedClass BP_PF_ScriptCamera.BP_PF_ScriptCamera_C
// 0x0010 (0x1040 - 0x1030)
class ABP_PF_ScriptCamera_C : public ACameraActor
{
public:
	class UPostProcessComponent*                       PostProcess;                                              // 0x1030(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_PF_ScriptCameraComponent_C*              ScriptCameraComponent;                                    // 0x1038(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_ScriptCamera.BP_PF_ScriptCamera_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
