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

// BlueprintGeneratedClass BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C
// 0x000C (0x0050 - 0x0044)
class UBP_BMS_EGR_000_BOSS_BASE_C : public UBP_BtlMetaScript_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C");
		return ptr;
	}


	void IsPartyMember(bool ARI, bool SIO, bool NNA, bool ZGU, bool MNK, bool YRA, bool* Enable);
	void Received_OnFlexibleNotify(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject);
	void OnPrevMainProduction();
	void OnEndArtsSpecialStrike(const struct FBtlSpecialStrikeEndParam& Param);
	void ExecuteUbergraph_BP_BMS_EGR_000_BOSS_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
