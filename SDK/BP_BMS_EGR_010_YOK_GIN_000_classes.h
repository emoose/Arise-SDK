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

// BlueprintGeneratedClass BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C
// 0x0009 (0x0059 - 0x0050)
class UBP_BMS_EGR_010_YOK_GIN_000_C : public UBP_BMS_EGR_000_BOSS_BASE_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0050(0x0008) (Transient, DuplicateTransient)
	bool                                               EndDeadEvent;                                             // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C");
		return ptr;
	}


	void AdventPlayback(class ULevelSequence* AdventCutName, const struct FName& MonsterID_First, const struct FName& MonsterID_Second);
	void OnPrevMain();
	void Received_OnFlexibleNotify(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject);
	void OnPostCameraInitialize(class ABtl_Camera* BtlCamera);
	void ExecuteUbergraph_BP_BMS_EGR_010_YOK_GIN_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
