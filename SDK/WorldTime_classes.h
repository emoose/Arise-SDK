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

// Class WorldTime.WorldTimeActor
// 0x0010 (0x0338 - 0x0328)
class AWorldTimeActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0328(0x0004) MISSED OFFSET
	float                                              ActorRefresher;                                           // 0x032C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                myCounter;                                                // 0x0330(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0334(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WorldTime.WorldTimeActor");
		return ptr;
	}


	void UpdateTime(float CurrentHour);
};


// Class WorldTime.WorldTimeBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UWorldTimeBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WorldTime.WorldTimeBPLibrary");
		return ptr;
	}


	float STATIC_WorldTimeSampleFunction(float Param);
};


// Class WorldTime.WorldTimeManager
// 0x00B8 (0x00E0 - 0x0028)
class UWorldTimeManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET
	bool                                               WorldTimePaused;                                          // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	struct FGuid                                       LevelSequenceControlId;                                   // 0x00AC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 OverrideTimeCurve;                                        // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnChangeWorldTime;                                        // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WorldTime.WorldTimeManager");
		return ptr;
	}


	void SetTimePerDay(float newTimePerDay);
	void SetTime(float newTimeHour, bool bEnableWorldDayUpdate);
	void SetSaveRealTime(float newTimeHour);
	void SetReversePlayback(bool Enable);
	void SetRate(float newTimeRate);
	void SetPause(bool newPause);
	void SetLimitTime(float limitTimeHour);
	void SetGameTimeRate(float timeRate);
	void SetFixedTime(float FixTimeMorning, float FixTimeDaytime, float FixTimeEvening, float FixTimeNight);
	void SetDay(int newDay);
	void SaveTime();
	void LoadTime();
	bool IsFixedTime();
	struct FString GetTimeString();
	float GetTimePerDay();
	bool GetReversePlayback();
	float GetRate();
	struct FString GetModifyTimeString();
	int GetModifyMinuteInt();
	float GetModifyMinuteFloat();
	int GetModifyHourInt();
	float GetModifyHourFloat();
	int GetMinuteInt();
	float GetMinuteFloat();
	float GetHourOfDay();
	int GetHourInt();
	float GetHourFloat();
	float GetFixedTimeNight();
	float GetFixedTimeMorning();
	float GetFixedTimeHour();
	float GetFixedTimeEvening();
	float GetFixedTimeDaytime();
	int GetDayInt();
	EWorldTimeZone GetCurrentTimeZoneShift();
	EWorldTimeZone GetCurrentTimeZoneReal();
	EWorldTimeZone ConvertTimeZoneShift(float TimeHour);
	EWorldTimeZone ConvertTimeZoneReal(float TimeHour);
	void ConvertSeparateToLinearTime(int sepHour, int sepMin, float* linearTime);
	void ConvertLinearToSeparateTime(float linearTime, int* sepHour, int* sepMin);
	void ChangeRealTime();
	void ChangeFixedTime(float fixTimeHour);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
