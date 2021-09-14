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

// BlueprintGeneratedClass BP_BTL_CS_BattleFinishFlow.BP_BTL_CS_BattleFinishFlow_C
// 0x0000 (0x0038 - 0x0038)
class UBP_BTL_CS_BattleFinishFlow_C : public UMovieSceneRangeNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_CS_BattleFinishFlow.BP_BTL_CS_BattleFinishFlow_C");
		return ptr;
	}


	struct FString GetEventNotifyName();
	void Received_BeginEvent(class AActor* Owner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
