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

// BlueprintGeneratedClass PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C
// 0x0044 (0x023C - 0x01F8)
class UPFAC_EnSym_AlphaMaskComponent_C : public UAlphaMaskComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F8(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      Pawn;                                                     // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCompleteFadeInEvent;                                    // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCompleteFadeOutEvent;                                   // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               DistanceFadeLock;                                         // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0229(0x0003) MISSED OFFSET
	float                                              SphereRadius;                                             // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFadein;                                           // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFadeout;                                          // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFadeTime;                                         // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C");
		return ptr;
	}


	void CollectSphereRadius();
	bool IsIntersect(float Distance);
	void DistanceFade();
	void SetInvisible();
	void CollectMesh();
	void OnFailed_E340A8B84DEE6DEAA15756BE41C0C4C1(TEnumAsByte<EAlphaMask> Type);
	void OnComplete_E340A8B84DEE6DEAA15756BE41C0C4C1(TEnumAsByte<EAlphaMask> Type);
	void OnFailed_B61777A34D8DF53D19D955B9FD0E8838(TEnumAsByte<EAlphaMask> Type);
	void OnComplete_B61777A34D8DF53D19D955B9FD0E8838(TEnumAsByte<EAlphaMask> Type);
	void OnFailed_FFB16CED4D497B73236A6C93F3F3B8B4(TEnumAsByte<EAlphaMask> Type);
	void OnComplete_FFB16CED4D497B73236A6C93F3F3B8B4(TEnumAsByte<EAlphaMask> Type);
	void OnFailed_4F9BA9B7463682F8C1A9149DFC299512(TEnumAsByte<EAlphaMask> Type);
	void OnComplete_4F9BA9B7463682F8C1A9149DFC299512(TEnumAsByte<EAlphaMask> Type);
	void FadeInImpl();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void FadeOutImpl(bool NotDelete);
	void ReceiveTick(float DeltaSeconds);
	void FadeInDistance(float FadeTime);
	void FadeOutDistance(float FadeTime);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PFAC_EnSym_AlphaMaskComponent(int EntryPoint);
	void OnCompleteFadeOutEvent__DelegateSignature(bool NotDelete);
	void OnCompleteFadeInEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
