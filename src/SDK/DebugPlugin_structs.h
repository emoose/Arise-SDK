#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum DebugPlugin.EDebugMenuIntegerStyle
enum class EDebugMenuIntegerStyle : uint8_t
{
	EDebugMenuIntegerStyle__Normal = 0,
	EDebugMenuIntegerStyle__ZeroFill = 1,
	EDebugMenuIntegerStyle__EDebugMenuIntegerStyle_MAX = 2
};


// Enum DebugPlugin.EDebugParamDataType
enum class EDebugParamDataType : uint8_t
{
	EDebugParamDataType__Boolean   = 0,
	EDebugParamDataType__Integer   = 1,
	EDebugParamDataType__Float     = 2,
	EDebugParamDataType__Enum      = 3,
	EDebugParamDataType__Color     = 4,
	EDebugParamDataType__String    = 5,
	EDebugParamDataType__EDebugParamDataType_MAX = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DebugPlugin.DebugParamDesc
// 0x0030
struct FDebugParamDesc
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDebugParamDataType                                Type;                                                     // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Saved;                                                    // 0x0009(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FString                                     Group;                                                    // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     MetaData;                                                 // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
