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

// Enum CinematicTools.ECinematicFolderCategory
enum class ECinematicFolderCategory : uint8_t
{
	None                           = 0,
	Character                      = 1,
	Camera                         = 2,
	ECinematicFolderCategory_MAX   = 3
};


// Enum CinematicTools.ECinematicWidgetVisibility
enum class ECinematicWidgetVisibility : uint8_t
{
	Visible                        = 0,
	Hidden                         = 1,
	ECinematicWidgetVisibility_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CinematicTools.CinematicEvaluationTypeChannel
// 0x0000 (0x0098 - 0x0098)
struct FCinematicEvaluationTypeChannel : public FMovieSceneByteChannel
{

};

// ScriptStruct CinematicTools.CinematicPhysicsForceTeleportData
// 0x0001
struct FCinematicPhysicsForceTeleportData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct CinematicTools.CinematicPhysicsForceTeleportChannel
// 0x0080 (0x0088 - 0x0008)
struct FCinematicPhysicsForceTeleportChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FCinematicPhysicsForceTeleportData>  Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
};

// ScriptStruct CinematicTools.CinematicPhysicsParameterForEventSkipData
// 0x000C
struct FCinematicPhysicsParameterForEventSkipData
{
	int                                                SimulationTimesOnResetForCloth;                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimulationTimesOnResetForAnimDynamics;                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDefaultParameter;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct CinematicTools.CinematicPhysicsParameterForEventSkipChannel
// 0x0080 (0x0088 - 0x0008)
struct FCinematicPhysicsParameterForEventSkipChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FCinematicPhysicsParameterForEventSkipData> Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
};

// ScriptStruct CinematicTools.CinematicSoundRTPCData
// 0x0018
struct FCinematicSoundRTPCData
{
	struct FString                                     RTPC;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Value;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CinematicTools.CinematicSoundRTPCChannel
// 0x0080 (0x0088 - 0x0008)
struct FCinematicSoundRTPCChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FCinematicSoundRTPCData>             KeyValues;                                                // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
};

// ScriptStruct CinematicTools.SoundRTPCCurveKey
// 0x0020
struct FSoundRTPCCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     RTPC;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              Value;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CinematicTools.SoundRTPCCurve
// 0x0010 (0x0068 - 0x0058)
struct FSoundRTPCCurve : public FIndexedCurve
{
	TArray<struct FSoundRTPCCurveKey>                  Keys;                                                     // 0x0058(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct CinematicTools.CinematicSoundStateData
// 0x0020
struct FCinematicSoundStateData
{
	struct FString                                     StateGroup;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     State;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct CinematicTools.CinematicSoundStateChannel
// 0x0080 (0x0088 - 0x0008)
struct FCinematicSoundStateChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FCinematicSoundStateData>            KeyValues;                                                // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
};

// ScriptStruct CinematicTools.SoundStateCurveKey
// 0x0028
struct FSoundStateCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     StateGroup;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     State;                                                    // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct CinematicTools.SoundStateCurve
// 0x0010 (0x0068 - 0x0058)
struct FSoundStateCurve : public FIndexedCurve
{
	TArray<struct FSoundStateCurveKey>                 Keys;                                                     // 0x0058(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct CinematicTools.CinematicSoundSwitchData
// 0x0020
struct FCinematicSoundSwitchData
{
	struct FString                                     SwitchGroup;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SWITCH;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct CinematicTools.CinematicSoundSwitchChannel
// 0x0080 (0x0088 - 0x0008)
struct FCinematicSoundSwitchChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FCinematicSoundSwitchData>           KeyValues;                                                // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
};

// ScriptStruct CinematicTools.SoundSwitchCurveKey
// 0x0028
struct FSoundSwitchCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     SwitchGroup;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SWITCH;                                                   // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct CinematicTools.SoundSwitchCurve
// 0x0010 (0x0068 - 0x0058)
struct FSoundSwitchCurve : public FIndexedCurve
{
	TArray<struct FSoundSwitchCurveKey>                Keys;                                                     // 0x0058(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct CinematicTools.CinematicSubtitleData
// 0x0028
struct FCinematicSubtitleData
{
	struct FString                                     Group;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ID;                                                       // 0x0010(0x0010) (Edit, ZeroConstructor)
	bool                                               bNotShowCaption;                                          // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              ShowDelaySeconds;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CinematicTools.CinematicSubtitleChannel
// 0x0080 (0x0088 - 0x0008)
struct FCinematicSubtitleChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FCinematicSubtitleData>              KeyValues;                                                // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
};

// ScriptStruct CinematicTools.SubtitleCurveKey
// 0x0028
struct FSubtitleCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Group;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ID;                                                       // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct CinematicTools.SubtitleCurve
// 0x0010 (0x0068 - 0x0058)
struct FSubtitleCurve : public FIndexedCurve
{
	TArray<struct FSubtitleCurveKey>                   Keys;                                                     // 0x0058(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct CinematicTools.CinematicFolderRule
// 0x0010
struct FCinematicFolderRule
{
	struct FName                                       FolderName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECinematicFolderCategory>              Category;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct CinematicTools.CinematicVoiceData
// 0x0028
struct FCinematicVoiceData
{
	struct FString                                     SpeakerId;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     VoiceLabel;                                               // 0x0010(0x0010) (Edit, ZeroConstructor)
	float                                              Duration;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFade;                                                 // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct CinematicTools.CinematicVoiceChannel
// 0x0080 (0x0088 - 0x0008)
struct FCinematicVoiceChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FCinematicVoiceData>                 KeyValues;                                                // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
};

// ScriptStruct CinematicTools.VoiceCurveKey
// 0x0030
struct FVoiceCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     SpeakerId;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     VoiceLabel;                                               // 0x0018(0x0010) (Edit, ZeroConstructor)
	float                                              Duration;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct CinematicTools.VoiceCurve
// 0x0010 (0x0068 - 0x0058)
struct FVoiceCurve : public FIndexedCurve
{
	TArray<struct FVoiceCurveKey>                      Keys;                                                     // 0x0058(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct CinematicTools.CinematicBasePointSectionTemplate
// 0x0000 (0x0020 - 0x0020)
struct FCinematicBasePointSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct CinematicTools.CinematicEvaluationTypeSectionTemplate
// 0x0098 (0x00B8 - 0x0020)
struct FCinematicEvaluationTypeSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FCinematicEvaluationTypeChannel             EvaluationTypeChannel;                                    // 0x0020(0x0098)
};

// ScriptStruct CinematicTools.CinematicFacialPose
// 0x0020
struct FCinematicFacialPose
{
	TEnumAsByte<EAnimationOperationType>               OperationType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     PoseName;                                                 // 0x0008(0x0010) (ZeroConstructor)
	float                                              Weight;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct CinematicTools.CinematicFacialPresetSectionTemplate
// 0x00E0 (0x0100 - 0x0020)
struct FCinematicFacialPresetSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FString                                     CharacterID;                                              // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     PresetName;                                               // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FCinematicFacialPose>                Poses;                                                    // 0x0040(0x0010) (ZeroConstructor)
	bool                                               bAllowPostFacial;                                         // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FMovieSceneFloatChannel                     WeightChannel;                                            // 0x0058(0x00A0)
	bool                                               bOverridePose;                                            // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
};

// ScriptStruct CinematicTools.CinematicFacialPoseSectionTemplate
// 0x00D0 (0x00F0 - 0x0020)
struct FCinematicFacialPoseSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FCinematicFacialPose                        FacialPose;                                               // 0x0020(0x0020)
	bool                                               bAllowPostFacial;                                         // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FMovieSceneFloatChannel                     WeightChannel;                                            // 0x0048(0x00A0)
	bool                                               bOverridePose;                                            // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
};

// ScriptStruct CinematicTools.CinematicLipPatternSectionTemplate
// 0x00B0 (0x00D0 - 0x0020)
struct FCinematicLipPatternSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FString                                     PatternName;                                              // 0x0020(0x0010) (ZeroConstructor)
	struct FMovieSceneFloatChannel                     WeightChannel;                                            // 0x0030(0x00A0)
};

// ScriptStruct CinematicTools.CinematicJointSectionTemplate
// 0x01E8 (0x0208 - 0x0020)
struct FCinematicJointSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FName                                       JointName;                                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneFloatChannel                     RotationChannels[0x3];                                    // 0x0028(0x00A0)
};

// ScriptStruct CinematicTools.CinematicLookAtSectionTemplate
// 0x00B0 (0x00D0 - 0x0020)
struct FCinematicLookAtSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FGuid                                       TargetObjectId;                                           // 0x0020(0x0010) (IsPlainOldData)
	struct FName                                       TargetBoneName;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneByteChannel                      ImmediateLookAtChannel;                                   // 0x0038(0x0098)
};

// ScriptStruct CinematicTools.CinematicMaterialBatchSectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FCinematicMaterialBatchSectionTemplate : public FMovieSceneEvalTemplate
{
	TArray<struct FScalarParameterNameAndCurve>        ScalarParameterNameAndCurves;                             // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FVectorParameterNameAndCurves>       VectorParameterNamesAndCurves;                            // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct CinematicTools.CinematicNearClipSectionTemplate
// 0x0090 (0x00B0 - 0x0020)
struct FCinematicNearClipSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneIntegerChannel                   NearClipChannel;                                          // 0x0020(0x0090)
};

// ScriptStruct CinematicTools.CinematicPhysicsParameterForEventSkipSectionTemplate
// 0x0088 (0x00A8 - 0x0020)
struct FCinematicPhysicsParameterForEventSkipSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FCinematicPhysicsParameterForEventSkipChannel Channel;                                                  // 0x0020(0x0088)
};

// ScriptStruct CinematicTools.CinematicPhysicsForceTeleportSectionTemplate
// 0x0088 (0x00A8 - 0x0020)
struct FCinematicPhysicsForceTeleportSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FCinematicPhysicsForceTeleportChannel       ForceTeleportChannel;                                     // 0x0020(0x0088)
};

// ScriptStruct CinematicTools.CinematicSkipSectionTemplate
// 0x0090 (0x00B0 - 0x0020)
struct FCinematicSkipSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneBoolChannel                      EnabledChannel;                                           // 0x0020(0x0090)
};

// ScriptStruct CinematicTools.CinematicSoundListenerSectionTemplate
// 0x0090 (0x00B0 - 0x0020)
struct FCinematicSoundListenerSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneBoolChannel                      OverrideChannel;                                          // 0x0020(0x0090)
};

// ScriptStruct CinematicTools.CinematicSoundPostEventSectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FCinematicSoundPostEventSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FString                                     EventName;                                                // 0x0020(0x0010) (ZeroConstructor)
	float                                              Duration;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSeek;                                              // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPostMarkPointSeek;                                       // 0x0035(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	int                                                StartOffset;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPinEventInStreamCache;                                   // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct CinematicTools.CinematicSoundRTPCSectionTemplate
// 0x0088 (0x00A8 - 0x0020)
struct FCinematicSoundRTPCSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FCinematicSoundRTPCChannel                  SoundRTPCChannel;                                         // 0x0020(0x0088)
};

// ScriptStruct CinematicTools.CinematicSoundStateSectionTemplate
// 0x0088 (0x00A8 - 0x0020)
struct FCinematicSoundStateSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FCinematicSoundStateChannel                 SoundStateChannel;                                        // 0x0020(0x0088)
};

// ScriptStruct CinematicTools.CinematicSoundSwitchSectionTemplate
// 0x0088 (0x00A8 - 0x0020)
struct FCinematicSoundSwitchSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FCinematicSoundSwitchChannel                SoundSwitchChannel;                                       // 0x0020(0x0088)
};

// ScriptStruct CinematicTools.CinematicStaticFunctionSectionTemplate
// 0x0000 (0x0020 - 0x0020)
struct FCinematicStaticFunctionSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct CinematicTools.CinematicSubtitleSectionTemplate
// 0x00B0 (0x00D0 - 0x0020)
struct FCinematicSubtitleSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FCinematicSubtitleChannel                   SubtitleChannel;                                          // 0x0020(0x0088)
	struct FString                                     StringDictionaryAssetPath;                                // 0x00A8(0x0010) (ZeroConstructor)
	bool                                               bVoiceSync;                                               // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  TickResolution;                                           // 0x00C0(0x0008)
	struct FFrameRate                                  DisplayRate;                                              // 0x00C8(0x0008)
};

// ScriptStruct CinematicTools.VoiceEventInfoPerSubtitle
// 0x0010
struct FVoiceEventInfoPerSubtitle
{
	TArray<float>                                      Durations;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct CinematicTools.CinematicTearSectionTemplate
// 0x0010 (0x0030 - 0x0020)
struct FCinematicTearSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FString                                     TearID;                                                   // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct CinematicTools.CinematicVibrationSectionTemplate
// 0x0018 (0x0038 - 0x0020)
struct FCinematicVibrationSectionTemplate : public FMovieSceneEvalTemplate
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              LargePow;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SmallPow;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CinematicTools.CinematicVisualFadeSectionTemplate
// 0x00C0 (0x00E0 - 0x0020)
struct FCinematicVisualFadeSectionTemplate : public FMovieSceneEvalTemplate
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FMovieSceneFloatChannel                     FadeOpacityChannel;                                       // 0x0028(0x00A0)
	struct FLinearColor                                FadeColor;                                                // 0x00C8(0x0010) (IsPlainOldData)
	bool                                               bOverrideColor;                                           // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisualFadeCompleteBehavior>           CompleteBehavior;                                         // 0x00D9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00DA(0x0006) MISSED OFFSET
};

// ScriptStruct CinematicTools.CinematicVoiceSectionTemplate
// 0x0090 (0x00B0 - 0x0020)
struct FCinematicVoiceSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FCinematicVoiceChannel                      VoiceChannel;                                             // 0x0020(0x0088)
	bool                                               bEnableSeek;                                              // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct CinematicTools.CinematicWeaponVisibilitySectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FCinematicWeaponVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
	TArray<struct FName>                               BoneNames;                                                // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneBoolChannel>              VisibilityChannel;                                        // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct CinematicTools.CinematicWidgetAnimationSectionTemplate
// 0x0018 (0x0038 - 0x0020)
struct FCinematicWidgetAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FString                                     AnimationName;                                            // 0x0020(0x0010) (ZeroConstructor)
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0030(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct CinematicTools.CinematicWidgetVisibilitySectionTemplate
// 0x0008 (0x0028 - 0x0020)
struct FCinematicWidgetVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
	ECinematicWidgetVisibility                         Visibility;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct CinematicTools.CinematicWidgetSectionTemplate
// 0x0010 (0x0030 - 0x0020)
struct FCinematicWidgetSectionTemplate : public FMovieSceneEvalTemplate
{
	class UClass*                                      GeneratedClass;                                           // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct CinematicTools.CinematicWorldTimeSectionTemplate
// 0x00A0 (0x00C0 - 0x0020)
struct FCinematicWorldTimeSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel                     WorldTimeChannel;                                         // 0x0020(0x00A0)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
