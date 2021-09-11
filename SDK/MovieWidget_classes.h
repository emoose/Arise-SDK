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

// WidgetBlueprintGeneratedClass MovieWidget.MovieWidget_C
// 0x0038 (0x0240 - 0x0208)
class UMovieWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      RenderImage;                                              // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AUMGMovieActor_C*                            MovieActor;                                               // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     TargetMovieID;                                            // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PlayColorChange;                                          // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopColorChange;                                          // 0x0231(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OneWait;                                                  // 0x0232(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0233(0x0005) MISSED OFFSET
	class UMaterialInstance*                           MovieMaterial;                                            // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MovieWidget.MovieWidget_C");
		return ptr;
	}


	void SetupMovieWidget(class UMaterialInstance* Material, class UManaTexture* Texture);
	void IsMoviePlay(bool* IsPlay);
	void MovieUnload();
	void MovieLoad(const struct FString& movieName, bool Loop);
	void SetMovieTexture(const struct FString& movieName);
	void DestroyMovieActor();
	void IsMovieEnd(bool* IsEnd);
	void MovieStop();
	void MoviePause();
	void MoviePlay();
	void SetMovieID(const struct FString& ID);
	void SetupMovieMaterial(class UMaterialInstance* MaterialInstance);
	void Destruct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_MovieWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
