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

// BlueprintGeneratedClass BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C
// 0x0018 (0x0249 - 0x0231)
class UBP_SCHOBJ_CampPoint_C : public UBP_SCHOBJ_BaseComponent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class ABP_PF_MAPOBJ_CampPoint_C*                   Target;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               Lock;                                                     // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C");
		return ptr;
	}


	bool CanCheck();
	class AActor* GetTarget();
	bool IsTarget();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void OnChangeScene(unsigned char ChangedScene, unsigned char OldScene);
	void ExecuteUbergraph_BP_SCHOBJ_CampPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
