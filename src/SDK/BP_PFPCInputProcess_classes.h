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

// BlueprintGeneratedClass BP_PFPCInputProcess.BP_PFPCInputProcess_C
// 0x0010 (0x0348 - 0x0338)
class ABP_PFPCInputProcess_C : public APFInputProcessBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PFPCInputProcess.BP_PFPCInputProcess_C");
		return ptr;
	}


	void IsDebugInputEnable(bool* bOut);
	void ExecuteSwitchPartyTop(bool CW);
	void ExecuteGamePause();
	void IsExecuteProcess(bool* Is);
	void UserConstructionScript();
	void K2_ExecuteProcess(float DeltaTime);
	void ExecuteUbergraph_BP_PFPCInputProcess(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
