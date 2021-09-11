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

// BlueprintGeneratedClass BP_PF_InteractEvent_LadderUp.BP_PF_InteractEvent_LadderUp_C
// 0x0000 (0x0338 - 0x0338)
class ABP_PF_InteractEvent_LadderUp_C : public ABP_PF_InteractEvent_Ladder_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InteractEvent_LadderUp.BP_PF_InteractEvent_LadderUp_C");
		return ptr;
	}


	void GetBeginPointLocationAndRotation(class ABP_PF_LadderActorBase_C* InLadderActor, struct FVector* OutLocation, struct FRotator* OutRotation);
	void GetBeginAnimCommand(struct FString* OutCommand);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
