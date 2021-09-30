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

// BlueprintGeneratedClass BP_PF_NpcObject_OwlShop.BP_PF_NpcObject_OwlShop_C
// 0x004A (0x0630 - 0x05E6)
class ABP_PF_NpcObject_OwlShop_C : public ABP_PF_NpcObject_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x05E6(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E8(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               SpawnAreaBox;                                             // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x05F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_PF_NpcObject_OwlShop.BP_PF_NpcObject_OwlShop_C.LevelSequence
	struct FEventNo                                    EventNo;                                                  // 0x0620(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NpcObject_OwlShop.BP_PF_NpcObject_OwlShop_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PF_NpcObject_OwlShop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
