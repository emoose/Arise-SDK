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

// BlueprintGeneratedClass BP_SystemFunctionMount.BP_SystemFunctionMount_C
// 0x0018 (0x0380 - 0x0368)
class ABP_SystemFunctionMount_C : public ABP_FunctionMountBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	TArray<struct FName>                               MountBlueprints;                                          // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SystemFunctionMount.BP_SystemFunctionMount_C");
		return ptr;
	}


	void _SpawnBlueprints();
	void _IsLoadedBlueprints(bool* bLoaded);
	void _LoadBlueprints();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DoMount();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_SystemFunctionMount(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
