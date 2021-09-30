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

// WidgetBlueprintGeneratedClass MoviePlayerWidget.MoviePlayerWidget_C
// 0x0000 (0x0208 - 0x0208)
class UMoviePlayerWidget_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MoviePlayerWidget.MoviePlayerWidget_C");
		return ptr;
	}


	void SetFadeOpacity(float Opacity);
	void SetFadeColor(const struct FLinearColor& Color);
	void DisplaySubtitle(bool Visibility, const struct FString& GroupID, const struct FString& StringID);
	void SetupMovie(class UMaterialInstance* Material, class UManaTexture* Texture);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
