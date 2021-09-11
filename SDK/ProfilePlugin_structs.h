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

// ScriptStruct ProfilePlugin.ChangeMapRequest
// 0x0038
struct FChangeMapRequest
{
	struct FString                                     MapName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	float                                              WorldTime;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     PlayerPosition;                                           // 0x0014(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FVector                                     CameraPosition;                                           // 0x0020(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FRotator                                    CameraRotate;                                             // 0x002C(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
};

// ScriptStruct ProfilePlugin.OnUpdateProfileResult
// 0x0020
struct FOnUpdateProfileResult
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
