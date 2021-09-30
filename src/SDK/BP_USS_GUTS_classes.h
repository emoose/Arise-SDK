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

// BlueprintGeneratedClass BP_USS_GUTS.BP_USS_GUTS_C
// 0x0018 (0x00A8 - 0x0090)
class UBP_USS_GUTS_C : public UBP_USS_ALWAYS_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)
	float                                              InvincibleTime;                                           // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FTimerHandle                                InvincibleTimerHandle;                                    // 0x00A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USS_GUTS.BP_USS_GUTS_C");
		return ptr;
	}


	void OnDeathAvoidance();
	void OnEnabled();
	void OnDisabled();
	void OnEndInvincibleTime();
	void ExecuteUbergraph_BP_USS_GUTS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
