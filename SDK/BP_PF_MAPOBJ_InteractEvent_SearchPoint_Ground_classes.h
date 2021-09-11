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

// BlueprintGeneratedClass BP_PF_MAPOBJ_InteractEvent_SearchPoint_Ground.BP_PF_MAPOBJ_InteractEvent_SearchPoint_Ground_C
// 0x0015 (0x0388 - 0x0373)
class ABP_PF_MAPOBJ_InteractEvent_SearchPoint_Ground_C : public ABP_PF_MAPOBJ_InteractEvent_SearchPoint_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x0373(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	float                                              ActionTimeOut;                                            // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActionTimeElapsed;                                        // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_MAPOBJ_InteractEvent_SearchPoint_Ground.BP_PF_MAPOBJ_InteractEvent_SearchPoint_Ground_C");
		return ptr;
	}


	void UserConstructionScript();
	void Pre_Action();
	void ExecuteUbergraph_BP_PF_MAPOBJ_InteractEvent_SearchPoint_Ground(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
