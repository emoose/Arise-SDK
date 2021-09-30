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

// BlueprintGeneratedClass LV_YOK_B01_SND.LV_YOK_B01_SND_C
// 0x0010 (0x0340 - 0x0330)
class ALV_YOK_B01_SND_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class AAriseAmbientSound*                          amb_fieldwind_2d_ExecuteUbergraph_LV_YOK_B01_SND_RefProperty;// 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LV_YOK_B01_SND.LV_YOK_B01_SND_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_LV_YOK_B01_SND(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
