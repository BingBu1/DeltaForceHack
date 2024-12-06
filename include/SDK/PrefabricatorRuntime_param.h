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
	struct Function_PrefabricatorRuntime_PrefabRandomizer_Randomize_Param
	{
	public:

		int32_t InSeed; // 0x00(0x04)
	};

	struct Function_PrefabricatorRuntime_PrefabricatorEventListener_PostSpawn_Param
	{
	public:

		struct APrefabActor* Prefab; // 0x00(0x08)
	};

	struct Function_PrefabricatorRuntime_PrefabricatorBlueprintLibrary_SpawnPrefab_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UPrefabricatorAssetInterface* Prefab; // 0x08(0x08)
		struct FTransform Transform; // 0x10(0x30)
		int32_t Seed; // 0x40(0x04)
		char pad_44[0x4]; // 0x44(0x04)
		struct APrefabActor* ReturnValue; // 0x48(0x08)
	};

	struct Function_PrefabricatorRuntime_PrefabActor_SavePrefab_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
