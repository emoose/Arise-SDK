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

// BlueprintGeneratedClass BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MenuFreeCursorClickableAreaInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C");
		return ptr;
	}


	void CanAdsorb(bool* Can);
	void IsOnFreeCursorReaction(bool* IsReaction);
	void OnFreeCursorDecided(bool* Success);
	void OnFreeCursorUnhovered(bool* Success);
	void OnFreeCusrorHovered(bool* Success);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
