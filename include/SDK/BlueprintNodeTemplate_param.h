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
	struct Function_BlueprintNodeTemplate_ExtendConstructObject_FnLib_ExtendSpawnActor_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClass* Class; // 0x08(0x08)
		struct FTransform SpawnTransform; // 0x10(0x30)
		enum class ESpawnActorCollisionHandlingMethod CollisionHandling; // 0x40(0x01)
		char pad_41[0x7]; // 0x41(0x07)
		struct AActor* ReturnValue; // 0x48(0x08)
	};

	struct Function_BlueprintNodeTemplate_BlueprintAITaskTemplate_StartTask_Param
	{
	public:

	};

	struct Function_BlueprintNodeTemplate_BlueprintTaskTemplate_BlueprintTaskTemplate_Param
	{
	public:

		struct UObject* Outer; // 0x00(0x08)
		struct UClass* Class; // 0x08(0x08)
		struct UBlueprintTaskTemplate* ReturnValue; // 0x10(0x08)
	};

	struct Function_BlueprintNodeTemplate_BlueprintAITaskTemplate_Tickable_UnRegTick_Param
	{
	public:

	};

	struct Function_BlueprintNodeTemplate_BlueprintTaskTemplateTickable_SetTickEnable_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
