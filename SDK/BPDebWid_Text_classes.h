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

// BlueprintGeneratedClass BPDebWid_Text.BPDebWid_Text_C
// 0x0037 (0x0098 - 0x0061)
class UBPDebWid_Text_C : public UBP_DebugWidget_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)
	float                                              MoveSx;                                                   // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveDx;                                                   // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     TextString;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                TextColor;                                                // 0x0088(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPDebWid_Text.BPDebWid_Text_C");
		return ptr;
	}


	void RenderWiget(class AHUD* MasterHUD);
	void Render(class AHUD* MasterHUD);
	void ExecuteUbergraph_BPDebWid_Text(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
