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

// BlueprintGeneratedClass BP_BTL_VTS_SYS_JUST_AVOID.BP_BTL_VTS_SYS_JUST_AVOID_C
// 0x0040 (0x00D0 - 0x0090)
class UBP_BTL_VTS_SYS_JUST_AVOID_C : public UBtlVisualRootTaskBlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)
	struct FName                                       BatStatusParameterName;                                   // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndPhaseTime;                                             // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FBtlVisualTask_MaterialConstructParameter   ConstructParameter;                                       // 0x00A8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_VTS_SYS_JUST_AVOID.BP_BTL_VTS_SYS_JUST_AVOID_C");
		return ptr;
	}


	void Received_Begin();
	void ExecuteUbergraph_BP_BTL_VTS_SYS_JUST_AVOID(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
