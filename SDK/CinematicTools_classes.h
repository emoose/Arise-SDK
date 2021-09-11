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

// Class CinematicTools.CinematicBasePointActor
// 0x0000 (0x0328 - 0x0328)
class ACinematicBasePointActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicBasePointActor");
		return ptr;
	}

};


// Class CinematicTools.CinematicBasePointSection
// 0x0000 (0x00E0 - 0x00E0)
class UCinematicBasePointSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicBasePointSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicBasePointTrack
// 0x0000 (0x0080 - 0x0080)
class UCinematicBasePointTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicBasePointTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicEvaluationTypeSection
// 0x0098 (0x0178 - 0x00E0)
class UCinematicEvaluationTypeSection : public UMovieSceneSection
{
public:
	struct FCinematicEvaluationTypeChannel             EvaluationTypeChannel;                                    // 0x00E0(0x0098)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicEvaluationTypeSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicEvaluationTypeTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicEvaluationTypeTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicEvaluationTypeTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicFacialSection
// 0x0000 (0x00E0 - 0x00E0)
class UCinematicFacialSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicFacialSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicFacialPoseSection
// 0x00C8 (0x01A8 - 0x00E0)
class UCinematicFacialPoseSection : public UMovieSceneSection
{
public:
	TEnumAsByte<EAnimationOperationType>               OpType;                                                   // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	struct FString                                     PoseName;                                                 // 0x00E8(0x0010) (Edit, ZeroConstructor)
	bool                                               bAllowPostFacial;                                         // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FMovieSceneFloatChannel                     WeightChannel;                                            // 0x0100(0x00A0)
	bool                                               bOverridePose;                                            // 0x01A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicFacialPoseSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicFacialPresetSection
// 0x00D0 (0x01B0 - 0x00E0)
class UCinematicFacialPresetSection : public UMovieSceneSection
{
public:
	struct FString                                     CharacterID;                                              // 0x00E0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     PresetName;                                               // 0x00F0(0x0010) (Edit, ZeroConstructor)
	bool                                               bAllowPostFacial;                                         // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FMovieSceneFloatChannel                     WeightChannel;                                            // 0x0108(0x00A0)
	bool                                               bOverridePose;                                            // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicFacialPresetSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicFacialTrack
// 0x0020 (0x0078 - 0x0058)
class UCinematicFacialTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)
	struct FString                                     DummyMeshName;                                            // 0x0068(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicFacialTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicJointSection
// 0x01E8 (0x02C8 - 0x00E0)
class UCinematicJointSection : public UMovieSceneSection
{
public:
	struct FName                                       JointName;                                                // 0x00E0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FMovieSceneFloatChannel                     RotationChannels[0x3];                                    // 0x00E8(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicJointSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicJointTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicJointTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicJointTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicLevelSequencePlayer
// 0x0038 (0x0A18 - 0x09E0)
class UCinematicLevelSequencePlayer : public ULevelSequencePlayer
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x09E0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicLevelSequencePlayer");
		return ptr;
	}


	void OnPlaySequence();
	void OnCameraChanged(class UCameraComponent* CameraComponent);
	void AllSkipProcess(const struct FFrameNumber& SkipFrame, const struct FName& EventName);
};


// Class CinematicTools.CinematicLipPatternSection
// 0x00B0 (0x0190 - 0x00E0)
class UCinematicLipPatternSection : public UMovieSceneSection
{
public:
	struct FString                                     PatternName;                                              // 0x00E0(0x0010) (ZeroConstructor)
	struct FMovieSceneFloatChannel                     WeightChannel;                                            // 0x00F0(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicLipPatternSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicLipPatternTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicLipPatternTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicLipPatternTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicLookAtSection
// 0x00A0 (0x01A8 - 0x0108)
class UCinematicLookAtSection : public UMovieScene3DConstraintSection
{
public:
	struct FName                                       TargetBoneName;                                           // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneByteChannel                      ImmediateLookAtChannel;                                   // 0x0110(0x0098)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicLookAtSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicLookAtTrack
// 0x0000 (0x0068 - 0x0068)
class UCinematicLookAtTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicLookAtTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicMaterialBatchSection
// 0x0000 (0x0110 - 0x0110)
class UCinematicMaterialBatchSection : public UMovieSceneParameterSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicMaterialBatchSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicMaterialBatchTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicMaterialBatchTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicMaterialBatchTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicNearClipSection
// 0x0000 (0x0170 - 0x0170)
class UCinematicNearClipSection : public UMovieSceneIntegerSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicNearClipSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicNearClipTrack
// 0x0000 (0x0080 - 0x0080)
class UCinematicNearClipTrack : public UMovieSceneIntegerTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicNearClipTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicPhysicsForceTeleportSection
// 0x0088 (0x0168 - 0x00E0)
class UCinematicPhysicsForceTeleportSection : public UMovieSceneSection
{
public:
	struct FCinematicPhysicsForceTeleportChannel       ForceTeleportChannel;                                     // 0x00E0(0x0088)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicPhysicsForceTeleportSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicPhysicsParameterForEventSkipSection
// 0x0088 (0x0168 - 0x00E0)
class UCinematicPhysicsParameterForEventSkipSection : public UMovieSceneSection
{
public:
	struct FCinematicPhysicsParameterForEventSkipChannel Channel;                                                  // 0x00E0(0x0088)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicPhysicsParameterForEventSkipSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicPhysicsTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicPhysicsTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicPhysicsTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicSkipSection
// 0x0090 (0x0210 - 0x0180)
class UCinematicSkipSection : public UMovieSceneStringSection
{
public:
	struct FMovieSceneBoolChannel                      EnabledChannel;                                           // 0x0180(0x0090)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicSkipSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicSkipTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicSkipTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicSkipTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicSoundListenerSection
// 0x0090 (0x0170 - 0x00E0)
class UCinematicSoundListenerSection : public UMovieSceneSection
{
public:
	struct FMovieSceneBoolChannel                      OverrideChannel;                                          // 0x00E0(0x0090)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicSoundListenerSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicSoundListenerTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicSoundListenerTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicSoundListenerTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicSoundPostEventSection
// 0x0020 (0x0100 - 0x00E0)
class UCinematicSoundPostEventSection : public UMovieSceneSection
{
public:
	struct FString                                     EventName;                                                // 0x00E0(0x0010) (Edit, ZeroConstructor)
	float                                              Duration;                                                 // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSeek;                                              // 0x00F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPostMarkPointSeek;                                       // 0x00F5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00F6(0x0002) MISSED OFFSET
	int                                                StartOffset;                                              // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPinEventInStreamCache;                                   // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicSoundPostEventSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicSoundPostEventTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicSoundPostEventTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicSoundPostEventTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicSoundRTPCSection
// 0x00F0 (0x01D0 - 0x00E0)
class UCinematicSoundRTPCSection : public UMovieSceneSection
{
public:
	struct FCinematicSoundRTPCChannel                  SoundRTPCChannel;                                         // 0x00E0(0x0088)
	struct FSoundRTPCCurve                             RTPCs;                                                    // 0x0168(0x0068) (Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicSoundRTPCSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicSoundRTPCTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicSoundRTPCTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicSoundRTPCTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicSoundStateSection
// 0x00F0 (0x01D0 - 0x00E0)
class UCinematicSoundStateSection : public UMovieSceneSection
{
public:
	struct FCinematicSoundStateChannel                 SoundStateChannel;                                        // 0x00E0(0x0088)
	struct FSoundStateCurve                            States;                                                   // 0x0168(0x0068) (Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicSoundStateSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicSoundStateTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicSoundStateTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicSoundStateTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicSoundSwitchSection
// 0x00F0 (0x01D0 - 0x00E0)
class UCinematicSoundSwitchSection : public UMovieSceneSection
{
public:
	struct FCinematicSoundSwitchChannel                SoundSwitchChannel;                                       // 0x00E0(0x0088)
	struct FSoundSwitchCurve                           Switchs;                                                  // 0x0168(0x0068) (Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicSoundSwitchSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicSoundSwitchTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicSoundSwitchTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicSoundSwitchTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicStaticFunctionSection
// 0x0020 (0x0100 - 0x00E0)
class UCinematicStaticFunctionSection : public UMovieSceneSection
{
public:
	struct FString                                     FunctionName;                                             // 0x00E0(0x0010) (ZeroConstructor)
	class UClass*                                      FunctionPropertyClass;                                    // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsOneTime : 1;                                           // 0x00F8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicStaticFunctionSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicStaticFunctionTrack
// 0x0018 (0x0070 - 0x0058)
class UCinematicStaticFunctionTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)
	class UClass*                                      FunctionOwnerClass;                                       // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicStaticFunctionTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicSubtitleSection
// 0x00F8 (0x01D8 - 0x00E0)
class UCinematicSubtitleSection : public UMovieSceneSection
{
public:
	struct FCinematicSubtitleChannel                   SubtitleChannel;                                          // 0x00E0(0x0088)
	bool                                               bVoiceSync;                                               // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0169(0x0003) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSubtitleCurve                              SubtitleCurve;                                            // 0x0170(0x0068) (Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicSubtitleSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicSubtitleTrack
// 0x0038 (0x0090 - 0x0058)
class UCinematicSubtitleTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)
	struct FSoftObjectPath                             StringDataPath;                                           // 0x0068(0x0018)
	struct FString                                     StringDataAssetPath;                                      // 0x0080(0x0010) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicSubtitleTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicTearSection
// 0x0010 (0x00F0 - 0x00E0)
class UCinematicTearSection : public UMovieSceneSection
{
public:
	struct FString                                     TearID;                                                   // 0x00E0(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicTearSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicTearTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicTearTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicTearTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicToolsSettings
// 0x0090 (0x00B8 - 0x0028)
class UCinematicToolsSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty CinematicTools.CinematicToolsSettings.SubtitleUMGClass
	struct FString                                     StringSetFunctionName;                                    // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FName>                               StringDictionaryReferencePaths;                           // 0x0060(0x0010) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             FacialDatabaseAssetRef;                                   // 0x0070(0x0018) (Edit, Config)
	TArray<class UClass*>                              PlacementSupportClasses;                                  // 0x0088(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FCinematicFolderRule>                MasterSequenceFolderRules;                                // 0x0098(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FCinematicFolderRule>                SubSequenceFolderRules;                                   // 0x00A8(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicToolsSettings");
		return ptr;
	}

};


// Class CinematicTools.CinematicVibrationSection
// 0x0018 (0x00F8 - 0x00E0)
class UCinematicVibrationSection : public UMovieSceneSection
{
public:
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LargePow;                                                 // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmallPow;                                                 // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicVibrationSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicVibrationTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicVibrationTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicVibrationTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicVisualFadeSection
// 0x0018 (0x0198 - 0x0180)
class UCinematicVisualFadeSection : public UMovieSceneFloatSection
{
public:
	bool                                               bOverrideColor;                                           // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0181(0x0003) MISSED OFFSET
	struct FLinearColor                                FadeColor;                                                // 0x0184(0x0010) (Edit, IsPlainOldData)
	TEnumAsByte<EVisualFadeCompleteBehavior>           CompleteBehavior;                                         // 0x0194(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0195(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicVisualFadeSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicVisualFadeTrack
// 0x0008 (0x0088 - 0x0080)
class UCinematicVisualFadeTrack : public UMovieSceneFloatTrack
{
public:
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicVisualFadeTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicVoiceSection
// 0x00F8 (0x01D8 - 0x00E0)
class UCinematicVoiceSection : public UMovieSceneSection
{
public:
	struct FCinematicVoiceChannel                      VoiceChannel;                                             // 0x00E0(0x0088)
	bool                                               bEnableSeek;                                              // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	struct FVoiceCurve                                 VoiceCurve;                                               // 0x0170(0x0068) (Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicVoiceSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicVoiceTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicVoiceTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicVoiceTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicWeaponVisibilitySection
// 0x0020 (0x0100 - 0x00E0)
class UCinematicWeaponVisibilitySection : public UMovieSceneSection
{
public:
	TArray<struct FName>                               BoneNames;                                                // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneBoolChannel>              VisibilityChannels;                                       // 0x00F0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicWeaponVisibilitySection");
		return ptr;
	}

};


// Class CinematicTools.CinematicWeaponVisibilityTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicWeaponVisibilityTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicWeaponVisibilityTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicWidgetSection
// 0x0010 (0x00F0 - 0x00E0)
class UCinematicWidgetSection : public UMovieSceneSection
{
public:
	class UClass*                                      GeneratedClass;                                           // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicWidgetSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicWidgetVisibilitySection
// 0x0008 (0x00E8 - 0x00E0)
class UCinematicWidgetVisibilitySection : public UMovieSceneSection
{
public:
	ECinematicWidgetVisibility                         Visibility;                                               // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicWidgetVisibilitySection");
		return ptr;
	}

};


// Class CinematicTools.CinematicWidgetAnimationSection
// 0x0010 (0x00F0 - 0x00E0)
class UCinematicWidgetAnimationSection : public UMovieSceneSection
{
public:
	struct FString                                     AnimationName;                                            // 0x00E0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicWidgetAnimationSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicWidgetTrack
// 0x0010 (0x0068 - 0x0058)
class UCinematicWidgetTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicWidgetTrack");
		return ptr;
	}

};


// Class CinematicTools.CinematicWorldTimeSection
// 0x0000 (0x0180 - 0x0180)
class UCinematicWorldTimeSection : public UMovieSceneFloatSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicWorldTimeSection");
		return ptr;
	}

};


// Class CinematicTools.CinematicWorldTimeTrack
// 0x0000 (0x0080 - 0x0080)
class UCinematicWorldTimeTrack : public UMovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicTools.CinematicWorldTimeTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
