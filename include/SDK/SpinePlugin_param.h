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
	struct Function_SpinePlugin_SpineBoneDriverComponent_BeforeUpdateWorldTransform_Param
	{
	public:

		struct USpineSkeletonComponent* Skeleton; // 0x00(0x08)
	};

	struct Function_SpinePlugin_TrackEntry_SetTrackTime_Param
	{
	public:

		float TrackTime; // 0x00(0x04)
	};

	struct Function_SpinePlugin_SpineWidget_UpdateWorldTransform_Param
	{
	public:

	};

	struct Function_SpinePlugin_SpineSkeletonComponent_UpdateWorldTransform_Param
	{
	public:

	};

	struct Function_SpinePlugin_SpineSkeletonAnimationComponent_SetTimeScale_Param
	{
	public:

		float TimeScale; // 0x00(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
