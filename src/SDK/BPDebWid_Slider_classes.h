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

// BlueprintGeneratedClass BPDebWid_Slider.BPDebWid_Slider_C
// 0x004F (0x00B0 - 0x0061)
class UBPDebWid_Slider_C : public UBP_DebugWidget_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)
	float                                              ValueRate;                                                // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveSx;                                                   // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveDx;                                                   // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    EventChangeValue;                                         // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventChangeValueEnd;                                      // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bActionNow;                                               // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              SliderWidth;                                              // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SliderHight;                                              // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SliderWidthHalf;                                          // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPDebWid_Slider.BPDebWid_Slider_C");
		return ptr;
	}


	void RenderWiget(class AHUD* MasterHUD);
	void Render(class AHUD* MasterHUD);
	void OnMouseMove(float X, float Y);
	void OnMouseDown(float X, float Y);
	void OnMouseUp(float X, float Y);
	void ExecuteUbergraph_BPDebWid_Slider(int EntryPoint);
	void EventChangeValueEnd__DelegateSignature();
	void EventChangeValue__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
