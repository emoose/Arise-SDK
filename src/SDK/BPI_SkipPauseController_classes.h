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

// BlueprintGeneratedClass BPI_SkipPauseController.BPI_SkipPauseController_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_SkipPauseController_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SkipPauseController.BPI_SkipPauseController_C");
		return ptr;
	}


	void IF_DisplayEndSkipGuide();
	void IF_PauseManagement(bool* OnPause, bool* OffPause, bool* Skipped);
	void IF_EventSkipMangement(float Tick, bool* DoEventSkip);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
