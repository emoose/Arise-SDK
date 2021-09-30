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

// BlueprintGeneratedClass DBP_DebugHudHostInterface.DBP_DebugHudHostInterface_C
// 0x0000 (0x0028 - 0x0028)
class UDBP_DebugHudHostInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DBP_DebugHudHostInterface.DBP_DebugHudHostInterface_C");
		return ptr;
	}


	void GetUMGDebugHudInterface(TScriptInterface<class UUMG_GameDebugHUD_Interface_C>* DebugHUD);
	void GetDebugHudInstance(class ADebugHUD_C** DebugHUD);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
