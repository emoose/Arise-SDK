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

// BlueprintGeneratedClass LV_DRT_T01_SND.LV_DRT_T01_SND_C
// 0x0008 (0x0338 - 0x0330)
class ALV_DRT_T01_SND_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LV_DRT_T01_SND.LV_DRT_T01_SND_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_LV_DRT_T01_SND(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
