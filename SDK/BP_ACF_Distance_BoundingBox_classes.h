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

// BlueprintGeneratedClass BP_ACF_Distance_BoundingBox.BP_ACF_Distance_BoundingBox_C
// 0x0014 (0x007C - 0x0068)
class UBP_ACF_Distance_BoundingBox_C : public UBP_AlphaMask_CameraFadeTaskBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)
	bool                                               IsAnyMeshCheck;                                           // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              DistanceFadein;                                           // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFadeout;                                          // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ACF_Distance_BoundingBox.BP_ACF_Distance_BoundingBox_C");
		return ptr;
	}


	void Begin();
	void ExecuteUbergraph_BP_ACF_Distance_BoundingBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
