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

// BlueprintGeneratedClass BP_PF_TrainingPreEventPlayer.BP_PF_TrainingPreEventPlayer_C
// 0x0037 (0x03C0 - 0x0389)
class ABP_PF_TrainingPreEventPlayer_C : public ABP_GP_PlayEventActor_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	struct FEventExtendPostEventEncount                ExtendPostEventEncount;                                   // 0x0390(0x0030) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_TrainingPreEventPlayer.BP_PF_TrainingPreEventPlayer_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
