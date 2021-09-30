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

// BlueprintGeneratedClass BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C
// 0x000E (0x0052 - 0x0044)
class UBP_BMS_EGR_010_YOK_GOL_000_C : public UBP_BtlMetaScript_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)
	bool                                               IsWin;                                                    // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TutorialOpen;                                             // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C");
		return ptr;
	}


	void OnPostCameraInitialize(class ABtl_Camera* BtlCamera);
	void OnFinalize();
	void OnPrevMainProduction();
	void OnCoreBreak(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, class UBtlDamageSphereComponent* DmgCollision);
	void OnDecideWin();
	void ExecuteUbergraph_BP_BMS_EGR_010_YOK_GOL_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
