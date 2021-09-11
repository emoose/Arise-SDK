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

// BlueprintGeneratedClass TO14_BPI_PauseMenuInterface.TO14_BPI_PauseMenuInterface_C
// 0x0000 (0x0028 - 0x0028)
class UTO14_BPI_PauseMenuInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BPI_PauseMenuInterface.TO14_BPI_PauseMenuInterface_C");
		return ptr;
	}


	void GetPlatformType(EGamePlatform* PlatformType);
	void IsFinish(int* IsFinish);
	void PadWork(class AMenuPadProcess* PadProcess, int* Result);
	void Initialize(bool* Dummy);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
