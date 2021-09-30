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

// BlueprintGeneratedClass BP_AriseGameModeCore.BP_AriseGameModeCore_C
// 0x0020 (0x0788 - 0x0768)
class ABP_AriseGameModeCore_C : public AAriseGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0768(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGameFunctionMounter*                        SystemFunctionMount;                                      // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SystemFunctionMounterName;                                // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AriseGameModeCore.BP_AriseGameModeCore_C");
		return ptr;
	}


	void MountSystemFunctions();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UpdateCurrentSection(unsigned char StartedSection);
	void ExecuteUbergraph_BP_AriseGameModeCore(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
