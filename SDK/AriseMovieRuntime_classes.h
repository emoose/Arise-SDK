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

// Class AriseMovieRuntime.AriseMovieActor
// 0x0058 (0x0380 - 0x0328)
class AAriseMovieActor : public AActor
{
public:
	class UManaComponent*                              ManaComponent;                                            // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAriseMovieAssetRuntimeData*                 MovieData;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UManaMovie*                                  MovieAsset;                                               // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UManaTexture*                                MovieTexture;                                             // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UStringDictionaryDatabase*                   SubtitleAsset;                                            // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bAllowUpdateResource : 1;                                 // 0x0350(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0351(0x0027) MISSED OFFSET
	float                                              MasterVolume;                                             // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x037C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMovieRuntime.AriseMovieActor");
		return ptr;
	}


	void UpdateSubtitle(bool Visibility, const struct FString& GroupID, const struct FString& StringID);
	void UpdateManaStatus(EManaComponentStatus Status);
	void SetupMaterial(EAriseMovieMaterialType MaterialType);
	void SetMasterVolume(float Volume);
	void ResetMaterial();
	void NotifyEventPoint(const struct FManaEventPointInfo& Info);
	void MovieUnload();
	void MovieStop();
	void MoviePlay();
	void MoviePause();
	void MovieLoad(const struct FString& Name, bool Loop);
	bool IsReady();
	bool IsPreparing();
	bool IsError();
	bool IsEnd();
	float GetPlayTime();
	float GetMasterVolume();
	EManaComponentStatus GetManaStatus();
	EAriseMovieStatus GetCurrentStatus();
};


// Class AriseMovieRuntime.AriseMovieAssetDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UAriseMovieAssetDatabase : public UXmlDatabaseBase
{
public:
	struct FAriseMovieAssetCollection                  Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMovieRuntime.AriseMovieAssetDatabase");
		return ptr;
	}

};


// Class AriseMovieRuntime.AriseMovieConfig
// 0x0010 (0x0038 - 0x0028)
class UAriseMovieConfig : public UObject
{
public:
	TArray<struct FSoftObjectPath>                     MovieAssetDatabases;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, Config, NoClear)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMovieRuntime.AriseMovieConfig");
		return ptr;
	}

};


// Class AriseMovieRuntime.AriseMovieOptionDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UAriseMovieOptionDatabase : public UXmlDatabaseBase
{
public:
	struct FAriseMovieOptionCollection                 Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMovieRuntime.AriseMovieOptionDatabase");
		return ptr;
	}

};


// Class AriseMovieRuntime.AriseMovieRuntimeBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UAriseMovieRuntimeBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMovieRuntime.AriseMovieRuntimeBPLibrary");
		return ptr;
	}


	int STATIC_GetMovieVoiceTrack(class UManaMovie* Movie);
	bool STATIC_GetMovieSubtitle(const struct FString& Label, struct FString* Path);
	int STATIC_GetMovieSoundEffectTrack(class UManaMovie* Movie);
	bool STATIC_GetMoviePath(const struct FString& Label, struct FString* Path);
	struct FString STATIC_GetMovieOpenFlagName(const struct FString& Label);
	int STATIC_GetMovieMusicTrack(class UManaMovie* Movie);
	bool STATIC_GetMovieAudioInfo(class UManaMovie* Movie, struct FAriseMovieAudioInfo* Music, struct FAriseMovieAudioInfo* Voice, struct FAriseMovieAudioInfo* SoundEffect);
	class UManaTexture* STATIC_CreateManaTextureFromSource(class UManaMovie* Movie);
};


// Class AriseMovieRuntime.AriseMovieAssetRuntimeData
// 0x0050 (0x0078 - 0x0028)
class UAriseMovieAssetRuntimeData : public UObject
{
public:
	class UManaMovie*                                  Source;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             MoviePath;                                                // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FSoftObjectPath                             SubtitlePath;                                             // 0x0048(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	EAriseMovieMaterialType                            Material;                                                 // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EAriseMovieShareProtection                         ShareProtection;                                          // 0x0061(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
	struct FString                                     OpenBitFlag;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMovieRuntime.AriseMovieAssetRuntimeData");
		return ptr;
	}

};


// Class AriseMovieRuntime.AriseMovieRuntimeManager
// 0x0068 (0x0090 - 0x0028)
class UAriseMovieRuntimeManager : public UObject
{
public:
	TArray<class UAriseMovieAssetDatabase*>            Databases;                                                // 0x0028(0x0010) (ZeroConstructor)
	TMap<struct FString, class UAriseMovieAssetRuntimeData*> Datas;                                                    // 0x0038(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMovieRuntime.AriseMovieRuntimeManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
