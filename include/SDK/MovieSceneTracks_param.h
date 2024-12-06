/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif


namespace Dumper
{
	struct Function_MovieSceneTracks_MovieSceneTransformOrigin_BP_GetTransformOrigin_Param
	{
	public:

		struct FTransform ReturnValue; // 0x00(0x30)
	};

	struct Function_MovieSceneTracks_MovieSceneAudioSection_SetStartOffset_Param
	{
	public:

		struct FFrameNumber InStartOffset; // 0x00(0x04)
	};

	struct Function_MovieSceneTracks_MovieSceneCameraCutSection_SetCameraBindingID_Param
	{
	public:

		struct FMovieSceneObjectBindingID InCameraBindingID; // 0x00(0x18)
	};

	struct Function_MovieSceneTracks_MovieSceneCinematicShotSection_SetShotDisplayName_Param
	{
	public:

		struct FString InShotDisplayName; // 0x00(0x10)
	};

	struct Function_MovieSceneTracks_MovieSceneLevelVisibilitySection_SetVisibility_Param
	{
	public:

		enum class ELevelVisibility InVisibility; // 0x00(0x01)
	};

	struct Function_MovieSceneTracks_MovieScene3DConstraintSection_SetConstraintBindingID_Param
	{
	public:

		struct FMovieSceneObjectBindingID InConstraintBindingID; // 0x00(0x18)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
