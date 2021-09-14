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

// BlueprintGeneratedClass BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C
// 0x0017 (0x0248 - 0x0231)
class UBP_SCHOBJ_TreasurePoint_C : public UBP_SCHOBJ_BaseComponent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class ABP_PF_MAPOBJ_TreasurePoint_C*               Target;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C");
		return ptr;
	}


	bool CanCheck();
	class AActor* GetTarget();
	bool IsTarget();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_SCHOBJ_TreasurePoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
