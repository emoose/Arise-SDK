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

// BlueprintGeneratedClass BP_GP_PlayEventActor.BP_GP_PlayEventActor_C
// 0x0061 (0x0389 - 0x0328)
class ABP_GP_PlayEventActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UEventComponent*                             EventComponent;                                           // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEventNo                                    EventName;                                                // 0x0340(0x0010) (Edit, BlueprintVisible)
	EEventAssetType                                    AssetType;                                                // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             LevelSequencePath;                                        // 0x0358(0x0018) (Edit, BlueprintVisible)
	bool                                               bPlayEventFinalized;                                      // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	struct FLongchatName                               LongchatName;                                             // 0x0378(0x0010) (Edit, BlueprintVisible)
	bool                                               bPlayLongChat;                                            // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GP_PlayEventActor.BP_GP_PlayEventActor_C");
		return ptr;
	}


	void OnChageGameState(EAriseGameState ChangedState, bool bNewState);
	void DoPlayEvent(bool* bValid);
	void OnPlayEventFinalize(const struct FString& EventName, const struct FString& OptionName);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_GP_PlayEventActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
