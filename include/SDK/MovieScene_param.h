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
	struct Function_MovieScene_MovieSceneSequencePlayer_UpdateTimeCursorPosition_Param
	{
	public:

		struct FFrameTime NewPosition; // 0x00(0x08)
		enum class EUpdatePositionMethod Method; // 0x08(0x01)
	};

	struct Function_MovieScene_MovieSceneEasingFunction_OnEvaluate_Param
	{
	public:

		float Interp; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_MovieScene_MovieSceneSection_SetRowIndex_Param
	{
	public:

		int32_t NewRowIndex; // 0x00(0x04)
	};

	struct Function_MovieScene_MovieSceneSequence_UnbindPossessableObjects_Param
	{
	public:

		struct FGuid ObjectId; // 0x00(0x10)
	};

	struct Function_MovieScene_MovieSceneSubSection_SetSequence_Param
	{
	public:

		struct UMovieSceneSequence* Sequence; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
