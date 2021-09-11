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

// BlueprintGeneratedClass BP_GameMainFunctionMount.BP_GameMainFunctionMount_C
// 0x0032 (0x039A - 0x0368)
class ABP_GameMainFunctionMount_C : public ABP_FunctionMountBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	TArray<struct FName>                               MountBlueprints;                                          // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bInitialized;                                             // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	TArray<struct FName>                               LoadOnlyBlueprints;                                       // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bFieldBpLoaded;                                           // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBattleBpLoaded;                                          // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameMainFunctionMount.BP_GameMainFunctionMount_C");
		return ptr;
	}


	void _SpawnBlueprints();
	void _IsLoadedBlueprints(bool* bLoaded);
	void _LoadBlueprints();
	void UserConstructionScript();
	void ReceiveDestroyed();
	void DoMount();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_GameMainFunctionMount(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
