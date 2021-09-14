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

// BlueprintGeneratedClass BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C
// 0x00A8 (0x0138 - 0x0090)
class UBP_MGC_TSK_AttackLineCollision_C : public UBP_MGC_CollisionBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)
	struct FSTR_AttackCollisionParam                   AttackParam;                                              // 0x0098(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CollisionRadius;                                          // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionInterval;                                        // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineDistance;                                             // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	TArray<class UBtlAttackSphereComponent*>           Collision;                                                // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	int                                                CollisionNum;                                             // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              Interval;                                                 // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FBtlSimpleFloatParameter                    Scale;                                                    // 0x0108(0x0020) (Edit, BlueprintVisible)
	float                                              RealScale;                                                // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x012C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C");
		return ptr;
	}


	void GetInterval_CollisionNum(float* ResultInterval, int* ResultNum);
	struct FString Received_GetWarningMessage(class UBtlMagicAsset* Asset);
	void AddCollision(const TScriptInterface<class UBtlMagicExtension_Interface_C>& Magic, int Index);
	struct FString Received_GetTaskName();
	void Received_Begin();
	void Received_End();
	void Received_Tick(float FrameDeltaTime, float ElapsedTime);
	void ExecuteUbergraph_BP_MGC_TSK_AttackLineCollision(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
