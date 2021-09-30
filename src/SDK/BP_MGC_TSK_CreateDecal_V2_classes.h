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

// BlueprintGeneratedClass BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C
// 0x0014 (0x009C - 0x0088)
class UBP_MGC_TSK_CreateDecal_V2_C : public UBtlMagicTask_CreateDecalBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (Transient, DuplicateTransient)
	class UDecalComponent*                             DecalComponent;                                           // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TraceHeight;                                              // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C");
		return ptr;
	}


	void CreateDecal(TEnumAsByte<EAttachLocation> LocationType, const struct FVector& Location, float Yaw);
	void Received_DebugRender(float FrameDeltaTime);
	struct FString Received_GetNotesInfomation();
	struct FString Received_GetTaskName();
	void RangeVector(const struct FVector& Value, const struct FVector& Range, struct FVector* Result);
	void RangeFloat(float Value, float Range, float* Result);
	void Received_End();
	void Received_Begin();
	void ExecuteUbergraph_BP_MGC_TSK_CreateDecal_V2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
