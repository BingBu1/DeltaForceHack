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
	struct Function_ACLPlugin_AnimationCompressionLibraryDatabase_SetVisualFidelity_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FLatentActionInfo LatentInfo; // 0x08(0x18)
		struct UAnimationCompressionLibraryDatabase* DatabaseAsset; // 0x20(0x08)
		enum class ACLVisualFidelityChangeResult Result; // 0x28(0x01)
		enum class ACLVisualFidelity VisualFidelity; // 0x29(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
