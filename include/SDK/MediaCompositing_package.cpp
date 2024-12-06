/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#include "../SDK.h"

namespace Dumper
{
	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMovieSceneMediaSectionParams.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMovieSceneMediaSectionParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x64\x69\x61\x43\x6f\x6d\x70\x6f\x73\x69\x74\x69\x6e\x67\x2e\x4d\x6f\x76\x69\x65\x53\x63\x65\x6e\x65\x4d\x65\x64\x69\x61\x53\x65\x63\x74\x69\x6f\x6e\x50\x61\x72\x61\x6d\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMovieSceneMediaSectionTemplate.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMovieSceneMediaSectionTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x64\x69\x61\x43\x6f\x6d\x70\x6f\x73\x69\x74\x69\x6e\x67\x2e\x4d\x6f\x76\x69\x65\x53\x63\x65\x6e\x65\x4d\x65\x64\x69\x61\x53\x65\x63\x74\x69\x6f\x6e\x54\x65\x6d\x70\x6c\x61\x74\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMovieSceneMediaSection.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMovieSceneMediaSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x64\x69\x61\x43\x6f\x6d\x70\x6f\x73\x69\x74\x69\x6e\x67\x2e\x4d\x6f\x76\x69\x65\x53\x63\x65\x6e\x65\x4d\x65\x64\x69\x61\x53\x65\x63\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMovieSceneMediaTrack.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMovieSceneMediaTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x64\x69\x61\x43\x6f\x6d\x70\x6f\x73\x69\x74\x69\x6e\x67\x2e\x4d\x6f\x76\x69\x65\x53\x63\x65\x6e\x65\x4d\x65\x64\x69\x61\x54\x72\x61\x63\x6b");
		return ptr;
	}

}