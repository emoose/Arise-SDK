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

// UserDefinedStruct DT_PF_QuestCameraPreset.DT_PF_QuestCameraPreset
// 0x0030
struct FDT_PF_QuestCameraPreset
{
	TArray<struct FString>                             ClientCaptionCamera_3_C356118E4BE30160FBBD88912090C35E;   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             PlayerCaptionCamera_5_984512EE4DECC332FBCEE6A73B16CE64;   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             PlayerSelectionCamera_7_8AE61B6646EC1799909DDB8A622665FA; // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
