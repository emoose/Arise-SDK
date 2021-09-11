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

// BlueprintGeneratedClass PFT_EnSym_CheckPathEQS.PFT_EnSym_CheckPathEQS_C
// 0x0010 (0x00F0 - 0x00E0)
class UPFT_EnSym_CheckPathEQS_C : public UPFT_EnSym_Base2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (Transient, DuplicateTransient)
	class UEnvQuery*                                   EQSQuery;                                                 // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_CheckPathEQS.PFT_EnSym_CheckPathEQS_C");
		return ptr;
	}


	void OnExecute();
	void CustomEvent(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void ExecuteUbergraph_PFT_EnSym_CheckPathEQS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
