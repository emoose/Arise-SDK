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

// BlueprintGeneratedClass DBP_BattleScreenshot.DBP_BattleScreenshot_C
// 0x0008 (0x0050 - 0x0048)
class UDBP_BattleScreenshot_C : public UBtlCommonTaskProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DBP_BattleScreenshot.DBP_BattleScreenshot_C");
		return ptr;
	}


	void Received_Tick(float FrameDeltaTime);
	void ExecuteUbergraph_DBP_BattleScreenshot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
