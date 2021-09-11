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

// BlueprintGeneratedClass MasterHUD.MasterHUD_C
// 0x00C8 (0x04E0 - 0x0418)
class AMasterHUD_C : public AHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TextOrgX;                                                 // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextOrgY;                                                 // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextCX;                                                   // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextCY;                                                   // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             TextList;                                                 // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        ColorList;                                                // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UObject*                                     RootMenu;                                                 // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDebugInputENU>                        Input;                                                    // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	struct FVector                                     PlayerLocation;                                           // 0x0464(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              WorldWidth;                                               // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WorldHeight;                                              // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraYaw;                                                // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerYaw;                                                // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowDebugText;                                           // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	TArray<struct FDebugText_STR>                      FreeTextList;                                             // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FDebugText3D_STR>                    FreeText3DList;                                           // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bShowMinimap;                                             // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04A9(0x0003) MISSED OFFSET
	float                                              WorldCx;                                                  // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WorldCy;                                                  // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    DrawEX;                                                   // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              ScreenCenterX;                                            // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenCenterY;                                            // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    PreDrawEx;                                                // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MasterHUD.MasterHUD_C");
		return ptr;
	}


	void SetWorldScale(float Width, float Height, float Cx, float cy);
	void DrawDebugText3D(float X, float Y, const struct FString& Text, const struct FLinearColor& Color, const struct FVector& Location3D);
	void Convert3Dto2D(const struct FVector& Location3D, float* X, float* Y);
	void DrawDebugTextFreePos(float X, float Y, const struct FString& Text, const struct FLinearColor& Color, bool bCenter);
	void TransformWorldToMinimap(const struct FVector& InVec, float Cx, float cy, float Width, float Height, float* X, float* Y);
	void DrawTextDropShadow(float X, float Y, const struct FString& Text, const struct FLinearColor& Color);
	void DrawDebugText(const struct FString& Text, const struct FLinearColor& Color);
	void UserConstructionScript();
	void ReceiveDrawHUD(int SizeX, int SizeY);
	void ExecuteUbergraph_MasterHUD(int EntryPoint);
	void PreDrawEx__DelegateSignature();
	void DrawEX__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
