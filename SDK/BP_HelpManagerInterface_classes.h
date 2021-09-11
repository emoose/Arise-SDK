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

// BlueprintGeneratedClass BP_HelpManagerInterface.BP_HelpManagerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_HelpManagerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HelpManagerInterface.BP_HelpManagerInterface_C");
		return ptr;
	}


	void CloseKeyHelp(TEnumAsByte<EKeyHelpMode> Mode);
	void ClosePlayableHelp(const struct FString& HelpLabel);
	void OpenKeyHelp(TEnumAsByte<EKeyHelpMode> Mode, float Duration);
	void OpenPlayableHelp(const struct FString& HelpLabel, float Duration);
	void OpenTextHelp(const struct FString& HelpLabel);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
