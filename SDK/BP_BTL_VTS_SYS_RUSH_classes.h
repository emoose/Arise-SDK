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

// BlueprintGeneratedClass BP_BTL_VTS_SYS_RUSH.BP_BTL_VTS_SYS_RUSH_C
// 0x0014 (0x00A4 - 0x0090)
class UBP_BTL_VTS_SYS_RUSH_C : public UBtlVisualRootTaskBlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)
	struct FName                                       BatStatusParameterName;                                   // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndPhaseTime;                                             // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_VTS_SYS_RUSH.BP_BTL_VTS_SYS_RUSH_C");
		return ptr;
	}


	void Received_Begin();
	void ExecuteUbergraph_BP_BTL_VTS_SYS_RUSH(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
