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
	struct Function_NavigationSystem_NavigationPath_IsValid_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_NavigationSystem_NavigationSystemV1_UnregisterNavigationInvoker_Param
	{
	public:

		struct AActor* Invoker; // 0x00(0x08)
	};

	struct Function_NavigationSystem_NavModifierVolume_SetAreaClass_Param
	{
	public:

		struct UClass* NewAreaClass; // 0x00(0x08)
	};

	struct Function_NavigationSystem_NavRelevantComponent_SetNavigationRelevancy_Param
	{
	public:

		bool bRelevant; // 0x00(0x01)
	};

	struct Function_NavigationSystem_RecastNavMesh_K2_ReplaceAreaInTileBounds_Param
	{
	public:

		struct FBox Bounds; // 0x00(0x1c)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UClass* OldArea; // 0x20(0x08)
		struct UClass* NewArea; // 0x28(0x08)
		bool ReplaceLinks; // 0x30(0x01)
		bool ReturnValue; // 0x31(0x01)
	};

	struct Function_NavigationSystem_NavModifierComponent_SetAreaClass_Param
	{
	public:

		struct UClass* NewAreaClass; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
