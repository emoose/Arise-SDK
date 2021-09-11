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

// BlueprintGeneratedClass BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MNU_FREE_CURSOR_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C");
		return ptr;
	}


	void IsRunningGroupJump(bool* bRunning);
	void ForceRunGroupJump(int Group, class UWidget* To, bool* bSuccess);
	void MouseUnhoverAll(bool* bSuccess);
	void MouseUnhover(class UWidget* Widget, bool* bSuccess);
	void MouseHover(class UWidget* Widget, bool* bSuccess);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
