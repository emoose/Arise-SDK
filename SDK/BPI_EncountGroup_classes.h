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

// BlueprintGeneratedClass BPI_EncountGroup.BPI_EncountGroup_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_EncountGroup_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_EncountGroup.BPI_EncountGroup_C");
		return ptr;
	}


	void UpdateRareStateImpl();
	void SetBattleResult(EBtlResultType Result);
	void UnloadBattleAsset();
	void LoadBattleAsset();
	void MakeSurroundEncountParameter(TArray<struct FString> InEncountGroupNames, bool* Success, struct FBtlEncountGroupParam* Param, struct FString* EncountGroupName);
	void MakeEncountParameter(const struct FString& InAutoSymbolName, bool* Success, bool* LockEntry, struct FBtlEncountGroupParam* Param, struct FString* EncountGroupName);
	void ResetBattleFlagImpl();
	void RespawnSymbolImpl();
	void GetUnloadBattleAssetUserImpl(bool* Battle, struct FString* AutoSymbolName, struct FString* MapName, struct FName* GroupID);
	void UnloadBattleAssetImpl();
	void UpdateRareImpl();
	void DeleteSymbolImpl();
	void SetEncountBattleStateImpl();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
