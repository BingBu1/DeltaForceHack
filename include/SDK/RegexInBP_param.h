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
	struct Function_RegexInBP_RegexBPLibrary_MatchExtended_Param
	{
	public:

		struct FString pattern; // 0x00(0x10)
		struct FString Input; // 0x10(0x10)
		struct TArray<struct FRegexExtendedResult> ReturnValue; // 0x20(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
