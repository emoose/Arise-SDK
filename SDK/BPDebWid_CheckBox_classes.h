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

// BlueprintGeneratedClass BPDebWid_CheckBox.BPDebWid_CheckBox_C
// 0x004F (0x00B0 - 0x0061)
class UBPDebWid_CheckBox_C : public UBP_DebugWidget_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)
	float                                              MoveSx;                                                   // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveDx;                                                   // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     TextString;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                TextColor;                                                // 0x0088(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bValue;                                                   // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              BoxSize;                                                  // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventChangeValue;                                         // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPDebWid_CheckBox.BPDebWid_CheckBox_C");
		return ptr;
	}


	void RenderWiget(class AHUD* MasterHUD);
	void Render(class AHUD* MasterHUD);
	void OnMouseUp(float X, float Y);
	void ExecuteUbergraph_BPDebWid_CheckBox(int EntryPoint);
	void EventChangeValue__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
