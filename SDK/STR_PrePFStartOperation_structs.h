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

// UserDefinedStruct STR_PrePFStartOperation.STR_PrePFStartOperation
// 0x0020
struct FSTR_PrePFStartOperation
{
	TEnumAsByte<ENM_PrePFStartOperationType>           Operation_2_58A0A7BD4F0CAB91CFF7108FE0251CE0;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      ScriptClass_11_2F3EDA3740CDCC25A453FB8AADC878F7;          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Param_8_734F05484CECDB5727BE65A2ECC28184;                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
