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

// BlueprintGeneratedClass BP_DebugHUDLibrary.BP_DebugHUDLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_DebugHUDLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DebugHUDLibrary.BP_DebugHUDLibrary_C");
		return ptr;
	}


	void STATIC_GetUMGDebugHudInterface(class UObject* __WorldContext, TScriptInterface<class UUMG_GameDebugHUD_Interface_C>* DebugHUD);
	void STATIC_GetDebugHUD(class UObject* __WorldContext, class ADebugHUD_C** DebugHUD);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
