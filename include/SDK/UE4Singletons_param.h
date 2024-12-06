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
	struct Function_UE4Singletons_ComponentBookKeeper_RegisterAutoSpawnComponents_Param
	{
	public:

	};

	struct Function_UE4Singletons_ComponentRegistryLib_AllComponent_Param
	{
	public:

		struct UObject* WorldContextObj; // 0x00(0x08)
		struct UClass* Class; // 0x08(0x08)
		struct TArray<struct UActorComponent*> ReturnValue; // 0x10(0x10)
	};

	struct Function_UE4Singletons_ObjectRegistrys_SetObject_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct UClass* StopClass; // 0x08(0x08)
	};

	struct Function_UE4Singletons_E4Singletons_RegisterAsSingletonImpl_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct UObject* WorldContextObject; // 0x08(0x08)
		bool bReplaceExist; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UClass* InNativeClass; // 0x18(0x08)
		struct UObject* ReturnValue; // 0x20(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
