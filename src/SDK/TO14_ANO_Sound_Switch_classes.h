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

// BlueprintGeneratedClass TO14_ANO_Sound_Switch.TO14_ANO_Sound_Switch_C
// 0x0030 (0x0068 - 0x0038)
class UTO14_ANO_Sound_Switch_C : public UAnimNotify
{
public:
	struct FString                                     SwitchGroup;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SwitchState;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     AttachName;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_ANO_Sound_Switch.TO14_ANO_Sound_Switch_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
