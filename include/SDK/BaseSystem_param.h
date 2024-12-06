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
	struct Function_BaseSystem_BaseSystemBlueprintLibrary_RegisterAutoSpawnComponentForActor_Param
	{
	public:

		struct UClass* ActorClass; // 0x00(0x08)
		struct UClass* DataComponentClass; // 0x08(0x08)
		bool bPersistent; // 0x10(0x01)
		char Flags; // 0x11(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
