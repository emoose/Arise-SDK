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

// Class FacialAnimation.AudioCurveSourceComponent
// 0x0040 (0x06A0 - 0x0660)
class UAudioCurveSourceComponent : public UAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0660(0x0008) MISSED OFFSET
	struct FName                                       CurveSourceBindingName;                                   // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurveSyncOffset;                                          // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x0674(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FacialAnimation.AudioCurveSourceComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
