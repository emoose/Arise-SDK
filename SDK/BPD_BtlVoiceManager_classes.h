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

// BlueprintGeneratedClass BPD_BtlVoiceManager.BPD_BtlVoiceManager_C
// 0x001D (0x04E4 - 0x04C7)
class ABPD_BtlVoiceManager_C : public ABP_BtlVoiceManager_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x04C7(0x0001) MISSED OFFSET
	struct FBtlUnitID                                  @AttackerID;                                              // 0x04C8(0x0008) (Edit, BlueprintVisible)
	struct FBtlUnitID                                  @ReceiverID;                                              // 0x04D0(0x0008) (Edit, BlueprintVisible)
	struct FBtlArts_XmlDatatableLabel                  @ArtsLabel;                                               // 0x04D8(0x0008) (Edit, BlueprintVisible)
	int                                                @CombNum;                                                 // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPD_BtlVoiceManager.BPD_BtlVoiceManager_C");
		return ptr;
	}


	void OnCombEvent();
	void OnDeadEvent();
	void OnDamageEvent();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
