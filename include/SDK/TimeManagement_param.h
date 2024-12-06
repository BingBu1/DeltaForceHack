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
	struct Function_TimeManagement_TimeManagementBlueprintLibrary_TransformTime_Param
	{
	public:

		struct FFrameTime SourceTime; // 0x00(0x08)
		struct FFrameRate SourceRate; // 0x08(0x08)
		struct FFrameRate DestinationRate; // 0x10(0x08)
		struct FFrameTime ReturnValue; // 0x18(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
