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

// BlueprintGeneratedClass BPDebWid_InstLog.BPDebWid_InstLog_C
// 0x006F (0x00D0 - 0x0061)
class UBPDebWid_InstLog_C : public UBP_DebugWidget_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)
	bool                                               bDrag;                                                    // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInWindowCorner;                                          // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInWindow_1;                                              // 0x0072(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0073(0x0005) MISSED OFFSET
	struct FString                                     DrarAction;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MoveSx;                                                   // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveSy;                                                   // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewWX;                                                    // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewWY;                                                    // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewWW;                                                    // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewWH;                                                    // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             InstLogStr;                                               // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        InstLogColor;                                             // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UBP_DebugWidget_C*                           ActiveWidget;                                             // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LineHeight;                                               // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scale;                                                    // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPDebWid_InstLog.BPDebWid_InstLog_C");
		return ptr;
	}


	void SetScale(float Scale);
	void PrintString(const struct FString& String, const struct FLinearColor& Color);
	void RenderInstantLog(class AHUD* MasterHUD);
	void Render(class AHUD* MasterHUD);
	void ExecuteUbergraph_BPDebWid_InstLog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
