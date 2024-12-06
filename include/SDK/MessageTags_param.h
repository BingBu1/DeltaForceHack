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
	struct Function_MessageTags_BlueprintMessageTagLibrary_RemoveMessageTag_Param
	{
	public:

		struct FMessageTagContainer TagContainer; // 0x00(0x20)
		struct FMessageTag Tag; // 0x20(0x08)
		bool ReturnValue; // 0x28(0x01)
	};

	struct Function_MessageTags_MessageTagAssetInterface_HasMatchingMessageTag_Param
	{
	public:

		struct FMessageTag TagToCheck; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
