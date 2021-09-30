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

// BlueprintGeneratedClass BP_ENV_MenuPostProcessSettingsBase.BP_ENV_MenuPostProcessSettingsBase_C
// 0x0CD8 (0x0D00 - 0x0028)
class UBP_ENV_MenuPostProcessSettingsBase_C : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FPostProcessSettings                        Settings;                                                 // 0x0030(0x0CD0) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ENV_MenuPostProcessSettingsBase.BP_ENV_MenuPostProcessSettingsBase_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
