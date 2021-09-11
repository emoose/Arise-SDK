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

// BlueprintGeneratedClass BP_PF_PC_AlphaMaskComponent.BP_PF_PC_AlphaMaskComponent_C
// 0x001F (0x0230 - 0x0211)
class UBP_PF_PC_AlphaMaskComponent_C : public UBP_PF_AlphaMaskComponent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0211(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	float                                              DefaultDistanceFadeIn;                                    // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultDistanceFadeOut;                                   // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFadeIn_Movement;                                  // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFadeOut_Movement;                                 // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_PC_AlphaMaskComponent.BP_PF_PC_AlphaMaskComponent_C");
		return ptr;
	}


	void TestSphere(float Distance, bool* bIntersect);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PF_PC_AlphaMaskComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
