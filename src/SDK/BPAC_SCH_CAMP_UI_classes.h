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

// BlueprintGeneratedClass BPAC_SCH_CAMP_UI.BPAC_SCH_CAMP_UI_C
// 0x0008 (0x0158 - 0x0150)
class UBPAC_SCH_CAMP_UI_C : public UBPAC_SCH_UI_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0150(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPAC_SCH_CAMP_UI.BPAC_SCH_CAMP_UI_C");
		return ptr;
	}


	void CreateWidget(const struct FString& FaceIcon, const struct FString& Speaker, const struct FText& Text);
	void DestoryWidget();
	void ExecuteUbergraph_BPAC_SCH_CAMP_UI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
