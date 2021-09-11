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

// WidgetBlueprintGeneratedClass UMG_LocamapFocusIcon_SearchPoint.UMG_LocamapFocusIcon_SearchPoint_C
// 0x000F (0x02A8 - 0x0299)
class UUMG_LocamapFocusIcon_SearchPoint_C : public UUMG_LocamapFocusIcon_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LocamapFocusIcon_SearchPoint.UMG_LocamapFocusIcon_SearchPoint_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_UMG_LocamapFocusIcon_SearchPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
