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

// BlueprintGeneratedClass TO14_ANO_PostEvent_Character.TO14_ANO_PostEvent_Character_C
// 0x0010 (0x0088 - 0x0078)
class UTO14_ANO_PostEvent_Character_C : public UTO14_ANO_Sound_PosstEventBase_C
{
public:
	struct FString                                     DebugModelID;                                             // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_ANO_PostEvent_Character.TO14_ANO_PostEvent_Character_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	void SetSwitchGroup(class UAkComponent* AkComponent);
	void GetSwitchState(class UAkComponent* AkComponent, struct FString* State);
	void GetSwitchGroup(class UAkComponent* AkComponent, struct FString* Group);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
