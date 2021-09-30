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

// BlueprintGeneratedClass BP_EventManager_Interface.BP_EventManager_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_EventManager_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EventManager_Interface.BP_EventManager_Interface_C");
		return ptr;
	}


	void GetEventLevelSequencePlayer(class ULevelSequencePlayer** Player);
	void EventAtPFRuning();
	void IsPostEventNpcRespawn(bool* bNpcRespawn);
	void DestroyObjects(bool* bAccept);
	void IsRunPostScript(bool* bRun);
	void RequestMapShowOutEvent();
	void GetCurrentFrameInfo(struct FString* Info);
	void IsNeedDisplayFrameInfo(bool* Need);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
