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
	struct Function_UIParticular_InstanceTemplateWidget_SetTickWhenPaused_Param
	{
	public:

		bool NewTickWhenPaused; // 0x00(0x01)
	};

	struct Function_UIParticular_ParticleWidget_SetTickWhenPaused_Param
	{
	public:

		bool NewTickWhenPaused; // 0x00(0x01)
	};

	struct Function_UIParticular_UIMeshWidget_SetTickWhenPaused_Param
	{
	public:

		bool NewTickWhenPaused; // 0x00(0x01)
	};

	struct Function_UIParticular_UMGStaticsLibrary_PlayAnimationByName_Param
	{
	public:

		struct UUserWidget* UserWidget; // 0x00(0x08)
		struct FString AnimName; // 0x08(0x10)
		struct FString WidgetName; // 0x18(0x10)
		enum class EUMGPlayAnimMode PlayMode; // 0x28(0x01)
		char pad_29[0x3]; // 0x29(0x03)
		float ReturnValue; // 0x2c(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
