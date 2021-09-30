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

// BlueprintGeneratedClass TO14_BPI_MenuFunction.TO14_BPI_MenuFunction_C
// 0x0000 (0x0028 - 0x0028)
class UTO14_BPI_MenuFunction_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BPI_MenuFunction.TO14_BPI_MenuFunction_C");
		return ptr;
	}


	void ForceFinalize(bool* IsSuccess);
	void Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess);
	void Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue);
	void GetNextScene(struct FString* NextSceneID, bool* SelfRemain);
	void Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish);
	void ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish);
	void Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
