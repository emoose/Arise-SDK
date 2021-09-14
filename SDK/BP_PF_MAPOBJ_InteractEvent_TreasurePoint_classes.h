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

// BlueprintGeneratedClass BP_PF_MAPOBJ_InteractEvent_TreasurePoint.BP_PF_MAPOBJ_InteractEvent_TreasurePoint_C
// 0x0021 (0x037C - 0x035B)
class ABP_PF_MAPOBJ_InteractEvent_TreasurePoint_C : public ABP_PF_MAPOBJ_InteractEvent_Base_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x035B(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	class ABP_PF_MAPOBJ_TreasurePoint_C*               TreasurePointActor;                                       // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayActionFinished;                                      // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              ActionTimeOut;                                            // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActionTimeElapsed;                                        // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_MAPOBJ_InteractEvent_TreasurePoint.BP_PF_MAPOBJ_InteractEvent_TreasurePoint_C");
		return ptr;
	}


	void PlayOpenSound();
	void UserConstructionScript();
	void Interact();
	void Play_Action__Treasure_Open_();
	void ExecuteUbergraph_BP_PF_MAPOBJ_InteractEvent_TreasurePoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
