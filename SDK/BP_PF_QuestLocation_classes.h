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

// BlueprintGeneratedClass BP_PF_QuestLocation.BP_PF_QuestLocation_C
// 0x0010 (0x0348 - 0x0338)
class ABP_PF_QuestLocation_C : public AQuestLocation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_QuestLocation.BP_PF_QuestLocation_C");
		return ptr;
	}


	void GetLocationTransform(int ID, struct FTransform* Transform);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void InitializeLocation(class AActor* NewLocationActor, int ID);
	void ExecuteUbergraph_BP_PF_QuestLocation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
