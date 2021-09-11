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

// BlueprintGeneratedClass MoviePlayerActor.MoviePlayerActor_C
// 0x0050 (0x03D0 - 0x0380)
class AMoviePlayerActor_C : public AAriseMovieActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	bool                                               Translucent;                                              // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MovieMaterial;                                            // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               MovieTextureParameters;                                   // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               _HasAlphaMovie;                                           // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	TArray<struct FName>                               AlphaMovieTextureParameters;                              // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          _NewMaterial;                                             // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          _LoadedMaterial;                                          // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MoviePlayerActor.MoviePlayerActor_C");
		return ptr;
	}


	void SetupWidgetMaterial(class UMaterialInstance* Material, class UManaTexture* Texture);
	void ResetWidgetMaterial();
	void GetMovieMaterialInterface(EAriseMovieMaterialType MaterialType, bool HasAlphaMovie, class UMaterialInterface** Material);
	void Stop();
	void DisplaySubtitleWidget(bool Visible, const struct FString& GroupID, const struct FString& StringID);
	void Load_Name_(const struct FString& movieName, bool Loop);
	void Unload();
	void DetachWidget();
	void AttachWidget();
	void Skip();
	void Pause();
	void Play();
	void UserConstructionScript();
	void SetupMaterial(EAriseMovieMaterialType MaterialType);
	void ResetMaterial();
	void UpdateSubtitle(bool Visibility, const struct FString& GroupID, const struct FString& StringID);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_MoviePlayerActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
