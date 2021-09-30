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

// BlueprintGeneratedClass BP_PF_ActionState_EnSym_Base.BP_PF_ActionState_EnSym_Base_C
// 0x0038 (0x0068 - 0x0030)
class UBP_PF_ActionState_EnSym_Base_C : public UPFActionStateBlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (Transient, DuplicateTransient)
	class UPFEncountSymbolComponent*                   AIComponent;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_EncountSymbolBase_C*                     ControlledPawn;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APFAIC_EnSym_Base_C*                         AIController;                                             // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CurCommand;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       PrvState;                                                 // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_ActionState_EnSym_Base.BP_PF_ActionState_EnSym_Base_C");
		return ptr;
	}


	void Initialize();
	void ChangeAnimation(const struct FString& NxtCommand);
	void K2_Begin(const struct FName& PrevState);
	void ExecuteUbergraph_BP_PF_ActionState_EnSym_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
