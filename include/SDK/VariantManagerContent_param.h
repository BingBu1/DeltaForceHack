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
	struct Function_VariantManagerContent_LevelVariantSets_GetVariantSetByName_Param
	{
	public:

		struct FString VariantSetName; // 0x00(0x10)
		struct UVariantSet* ReturnValue; // 0x10(0x08)
	};

	struct Function_VariantManagerContent_LevelVariantSetsActor_SwitchOnVariantByName_Param
	{
	public:

		struct FString VariantSetName; // 0x00(0x10)
		struct FString VariantName; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_VariantManagerContent_SwitchActor_SelectOption_Param
	{
	public:

		int32_t OptionIndex; // 0x00(0x04)
	};

	struct Function_VariantManagerContent_Variant_SwitchOn_Param
	{
	public:

	};

	struct Function_VariantManagerContent_VariantSet_SetDisplayText_Param
	{
	public:

		struct FText NewDisplayText; // 0x00(0x18)
	};

	struct Function_VariantManagerContent_PropertyValue_HasRecordedData_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
