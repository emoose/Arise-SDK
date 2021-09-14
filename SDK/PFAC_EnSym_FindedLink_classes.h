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

// BlueprintGeneratedClass PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C
// 0x0019 (0x0161 - 0x0148)
class UPFAC_EnSym_FindedLink_C : public UPFEnSymFindedLinkComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (Transient, DuplicateTransient)
	TArray<struct FPFST_EnSym_FindedLink>              Listener;                                                 // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bInitialized;                                             // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFAC_EnSym_FindedLink.PFAC_EnSym_FindedLink_C");
		return ptr;
	}


	void IsSpawned(bool* Result);
	void IsBattle(class AActor* InActor, bool* Result);
	void RegisterSymbol(const struct FPFST_EnSym_FindedLink& Data, int Index);
	void RemoveInvalid();
	void OutputParameter(struct FEncountSymbolFindedParamData* Output);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Refresh();
	void ExecuteUbergraph_PFAC_EnSym_FindedLink(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
