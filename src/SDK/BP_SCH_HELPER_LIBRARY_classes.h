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

// BlueprintGeneratedClass BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SCH_HELPER_LIBRARY_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C");
		return ptr;
	}


	void STATIC_PFSC_InteractReleaseLock(class UObject* __WorldContext);
	void STATIC_PFSC_NPCTalkLockPause(class UObject* __WorldContext);
	void STATIC_PFSC_TreasureLockPause(class UObject* __WorldContext);
	void STATIC_PFSC_DisableWaitOwl(class UObject* __WorldContext);
	void STATIC_ConvertPartyID2CharaIconID(EArisePartyID PartyId, class UObject* __WorldContext, EAriseCharaIconID* IconId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
