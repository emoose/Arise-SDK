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

// BlueprintGeneratedClass FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C
// 0x0024 (0x03F4 - 0x03D0)
class AFullscreenMoviePlayerActor_C : public AMoviePlayerActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	class UFullscreenMoviePlayerWidget_C*              MovieWidget;                                              // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               MovieWidgetAttached;                                      // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NeedScreenMaskOnDetachWidget;                             // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03E2(0x0002) MISSED OFFSET
	struct FLinearColor                                MovieWidgetColor;                                         // 0x03E4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FullscreenMoviePlayerActor.FullscreenMoviePlayerActor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void AttachWidget();
	void DetachWidget();
	void DisplaySubtitleWidget(bool Visible, const struct FString& GroupID, const struct FString& StringID);
	void ResetWidgetMaterial();
	void SetupWidgetMaterial(class UMaterialInstance* Material, class UManaTexture* Texture);
	void ExecuteUbergraph_FullscreenMoviePlayerActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
