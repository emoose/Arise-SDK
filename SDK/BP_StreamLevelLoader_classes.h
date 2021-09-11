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

// BlueprintGeneratedClass BP_StreamLevelLoader.BP_StreamLevelLoader_C
// 0x0078 (0x03E8 - 0x0370)
class ABP_StreamLevelLoader_C : public AStreamLevelLoader
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                tmpLoadCounter;                                           // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                tmpLoadMaxLevels;                                         // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStreamLevelLoading;                                      // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStreamLevelUnloading;                                    // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x038A(0x0002) MISSED OFFSET
	int                                                tmpUnloadCounter;                                         // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                tmpUnloadMaxLevels;                                       // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDispDebugLog;                                            // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    EventFinishedUnload;                                      // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventFinishedLoad;                                        // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AAriseGameMode*                              GameMode;                                                 // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DPLoadProgress;                                           // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCleanuping;                                              // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    EventFinishedCleanup;                                     // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                tmpUnloadAllCounter;                                      // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                tmpUnloadAllLevels;                                       // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_StreamLevelLoader.BP_StreamLevelLoader_C");
		return ptr;
	}


	bool BPGeneralFunctionBool(const struct FName& OpertionName, TMap<struct FName, struct FString> Params);
	void DumpCurrentLoadRequest();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnChangeDebugValue();
	void BPE_DoLoadStreamLevel();
	void BPE_DoUnloadStreamLevel();
	void BPE_DoUnloadAll();
	void UnloadExtraEvent(TArray<struct FName> Levels);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_StreamLevelLoader(int EntryPoint);
	void EventFinishedCleanup__DelegateSignature();
	void EventFinishedLoad__DelegateSignature();
	void EventFinishedUnload__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
