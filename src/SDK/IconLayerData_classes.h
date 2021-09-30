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

// BlueprintGeneratedClass IconLayerData.IconLayerData_C
// 0x0028 (0x00B0 - 0x0088)
class UIconLayerData_C : public UIconLayerCommonDataBase
{
public:
	struct FScriptMulticastDelegate                    OnUpdate;                                                 // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	EIconDataUsage                                     Usage;                                                    // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	TArray<unsigned char>                              MapIconTypesOnMap;                                        // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IconLayerData.IconLayerData_C");
		return ptr;
	}


	void SetMapIconTypesOnMap(TArray<unsigned char>* MapIconType);
	void ClearMapIconTypesOnMap();
	void AddMapIconTypeOnMap(unsigned char MapIconType);
	void Initialize(bool IsNaviMap);
	void Update(const struct FVector2D& CanvasSize, class ABP_AriseGamemode_C* Object);
	void OnUpdate__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
