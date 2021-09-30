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

// BlueprintGeneratedClass UMG_GameDebugHUD_Interface.UMG_GameDebugHUD_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UUMG_GameDebugHUD_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UMG_GameDebugHUD_Interface.UMG_GameDebugHUD_Interface_C");
		return ptr;
	}


	void BindDebugParameterCallback();
	void Hide();
	void ToggleVisible();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
