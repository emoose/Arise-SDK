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

// BlueprintGeneratedClass BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C
// 0x0018 (0x0370 - 0x0358)
class ABP_AriseGameProcessWithEvent_C : public AAriseGameProcess
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_GP_PlayEventActor_C*                     PlayEventActor;                                           // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C");
		return ptr;
	}


	void PlayEventLongchatByLongchatName(const struct FLongchatName& LongchatName, bool* bValid);
	void StopEvent();
	void IsPlayEventFinalized(bool* bFinalized);
	void PlayEventMovie(const struct FEventNo& EventName, bool* bValid);
	void PlayEventSequence(const struct FEventNo& EventName, bool* bValid);
	void PlayEventLongchat(const struct FEventNo& EventName, bool* bValid);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_AriseGameProcessWithEvent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
