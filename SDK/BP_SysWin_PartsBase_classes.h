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

// WidgetBlueprintGeneratedClass BP_SysWin_PartsBase.BP_SysWin_PartsBase_C
// 0x0020 (0x0228 - 0x0208)
class UBP_SysWin_PartsBase_C : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    Decide;                                                   // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Cancel;                                                   // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_SysWin_PartsBase.BP_SysWin_PartsBase_C");
		return ptr;
	}


	void PadWork(class AMenuPadProcess* PadProcess, bool* Handled);
	void Cancel__DelegateSignature();
	void Decide__DelegateSignature(int UniqueId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
