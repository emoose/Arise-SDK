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

// BlueprintGeneratedClass PFBP_EnSym_TargetPoint.PFBP_EnSym_TargetPoint_C
// 0x0000 (0x0328 - 0x0328)
class APFBP_EnSym_TargetPoint_C : public APFEnSymTargetPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFBP_EnSym_TargetPoint.PFBP_EnSym_TargetPoint_C");
		return ptr;
	}


	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
