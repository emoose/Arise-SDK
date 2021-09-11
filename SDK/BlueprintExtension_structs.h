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

// Enum BlueprintExtension.EBPEX_VerticalTextAligment
enum class EBPEX_VerticalTextAligment : uint8_t
{
	EBPEX_VerticalTextAligment__TextTop = 0,
	EBPEX_VerticalTextAligment__TextCenter = 1,
	EBPEX_VerticalTextAligment__TextBottom = 2,
	EBPEX_VerticalTextAligment__QuadTop = 3,
	EBPEX_VerticalTextAligment__EBPEX_MAX = 4
};


// Enum BlueprintExtension.EBPEX_HorizTextAligment
enum class EBPEX_HorizTextAligment : uint8_t
{
	EBPEX_HorizTextAligment__Left  = 0,
	EBPEX_HorizTextAligment__Center = 1,
	EBPEX_HorizTextAligment__Right = 2,
	EBPEX_HorizTextAligment__EBPEX_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BlueprintExtension.FormatStringArgument
// 0x0028
struct FFormatStringArgument
{
	struct FText                                       ArgumentName;                                             // 0x0000(0x0018) (Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FString                                     Value;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
