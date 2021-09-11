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

// BlueprintGeneratedClass PFT_EnSym_RandomWait.PFT_EnSym_RandomWait_C
// 0x000D (0x00ED - 0x00E0)
class UPFT_EnSym_RandomWait_C : public UPFT_EnSym_Base2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (Transient, DuplicateTransient)
	int                                                LazyProb;                                                 // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLazy;                                                    // 0x00EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_RandomWait.PFT_EnSym_RandomWait_C");
		return ptr;
	}


	void EndWaitTimeEvent();
	void OnExecute();
	void OnTick(float DeltaTime);
	void OnAbort();
	void ExecuteUbergraph_PFT_EnSym_RandomWait(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
