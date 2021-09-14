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

// BlueprintGeneratedClass BP_PF_MAPOBJ_InteractEvent_CampPoint.BP_PF_MAPOBJ_InteractEvent_CampPoint_C
// 0x001D (0x0378 - 0x035B)
class ABP_PF_MAPOBJ_InteractEvent_CampPoint_C : public ABP_PF_MAPOBJ_InteractEvent_Base_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x035B(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	TArray<struct FModifiedText>                       Selection;                                                // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_MAPOBJ_InteractEvent_CampPoint.BP_PF_MAPOBJ_InteractEvent_CampPoint_C");
		return ptr;
	}


	void GetSelection();
	void AddSelect(const struct FString& StringID);
	void UserConstructionScript();
	void Interact();
	void ExecuteUbergraph_BP_PF_MAPOBJ_InteractEvent_CampPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
