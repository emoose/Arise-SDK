#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STR_EventBGMParam.STR_EventBGMParam
// 0x0029
struct FSTR_EventBGMParam
{
	ERequestEventType                                  RequestType_10_477A6EDC4053515C79DAAF9CD32DF59C;          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     MusicName_17_7EA1D8EB45A768C1C61CA5A232C46BCA;            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PostEventName_11_6289625D4A1A3AE6303F77956A953D2D;        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EBGMFadeType                                       FadeType_14_0E7862C646CE0FB9500348AFC0E3EBCC;             // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
