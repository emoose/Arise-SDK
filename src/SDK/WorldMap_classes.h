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

// Class WorldMap.WorldMapBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UWorldMapBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WorldMap.WorldMapBPLibrary");
		return ptr;
	}


	float STATIC_WorldMapSampleFunction(float Param);
};


// Class WorldMap.WorldMapManager
// 0x0098 (0x03C0 - 0x0328)
class AWorldMapManager : public AActor
{
public:
	int                                                GridDivX;                                                 // 0x0328(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GridDivY;                                                 // 0x032C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridLengthX;                                              // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridLengthY;                                              // 0x0334(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DispGrid;                                                 // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDispLoadLog;                                             // 0x033C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWorldActive;                                             // 0x033D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA];                                       // 0x033E(0x000A) MISSED OFFSET
	TArray<struct FWorldStreamInfo>                    WorldStramLevel;                                          // 0x0348(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FWorldGridInfo>                      WorldGrid;                                                // 0x0358(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FWorldGridInfo>                      NewGrid;                                                  // 0x0368(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FWorldGridInfo>                      DiffGrid;                                                 // 0x0378(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FWorldGridInfo>                      RemoveGrid;                                               // 0x0388(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0398(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WorldMap.WorldMapManager");
		return ptr;
	}


	void WorldInitialize();
	void RemakeCurrentGrid(const struct FVector& Location);
	bool MakeStreamDatabase(class UObject* WorldContextObject, const struct FString& Header, const struct FString& sep, const struct FString& footer);
	void MakeNewGrid(const struct FVector& Location);
	void MakeCurrentGrid(const struct FVector& Location);
	bool IsLevelLoading();
	TArray<struct FWorldStreamInfo> GetWroldStream();
	int GetTickState();
	struct FName GetLevelName(int NormaledGridX, int NormaledGridY);
	TArray<struct FWorldGridInfo> GetCurrentViewGrid();
	bool GetCurrentGridVisibled(const struct FVector& Location);
	void GetCurrentGridPosition(const struct FVector& Location, int* X, int* Y);
	void EnableStreamLevelControl(bool bEnable);
	void DumpStreamDatabase();
	void DumpRemoveGrid();
	void DumpDiffGrid();
	void DumpCurrentGrid();
	struct FName CurrentLoadingMapName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
