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

// BlueprintGeneratedClass BP_PF_ActionState_Floating.BP_PF_ActionState_Floating_C
// 0x000C (0x003C - 0x0030)
class UBP_PF_ActionState_Floating_C : public UPFActionStateBlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (Transient, DuplicateTransient)
	float                                              SavedCollisionHalfHeight;                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_ActionState_Floating.BP_PF_ActionState_Floating_C");
		return ptr;
	}


	void IsLanded(bool* Out);
	void GetLandAnimCommand(struct FString* OutCommand);
	void Initialize();
	void Finalize();
	struct FPFActionStateTickResult K2_Tick(float DeltaSeconds);
	void K2_End(const struct FName& NextState);
	void K2_Begin(const struct FName& PrevState);
	void ExecuteUbergraph_BP_PF_ActionState_Floating(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
