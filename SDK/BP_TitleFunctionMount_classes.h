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

// BlueprintGeneratedClass BP_TitleFunctionMount.BP_TitleFunctionMount_C
// 0x0039 (0x03A1 - 0x0368)
class ABP_TitleFunctionMount_C : public ABP_FunctionMountBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	TArray<struct FName>                               MountBlueprints;                                          // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bInitialized;                                             // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	struct FName                                       AssetGUIInstanceManager;                                  // 0x0388(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_AriseGameInstance_C*                     AriseGameInstance;                                        // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NowLoadingUI;                                             // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoaded;                                                  // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TitleFunctionMount.BP_TitleFunctionMount_C");
		return ptr;
	}


	void _SpawnBlueprints();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DoMount();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_TitleFunctionMount(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
