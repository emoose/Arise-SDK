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

// BlueprintGeneratedClass BP_DebugWidget.BP_DebugWidget_C
// 0x0039 (0x0061 - 0x0028)
class UBP_DebugWidget_C : public UObject
{
public:
	float                                              WinX;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WinY;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WinW;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WinH;                                                     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_DebugWindow_C*                           ParentWindow;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInWindow;                                                // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              OfsX;                                                     // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OfsY;                                                     // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasMouseEvent;                                           // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DebugWidget.BP_DebugWidget_C");
		return ptr;
	}


	void GetWorldPosition(float* Wx, float* Wy);
	void RenderCross(class AHUD* MasterHUD, float X, float Y, float W, float H, const struct FLinearColor& LineColor);
	void RenderBox(class AHUD* MasterHUD, float X, float Y, float W, float H, const struct FLinearColor& LineColor);
	void OnMouseMove(float X, float Y);
	void OnMouseUp(float X, float Y);
	void OnMouseDown(float X, float Y);
	void InWindown(float Cx, float cy, bool* bin);
	void Render(class AHUD* MasterHUD);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
