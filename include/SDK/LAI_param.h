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
	struct Function_LAI_LAI_TickLuaState_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_LAI_LuaPerfTest_TestSetVisibility_UserWidget_Param
	{
	public:

		struct UUserWidget* View; // 0x00(0x08)
		enum class ESlateVisibility Visibility; // 0x08(0x01)
	};

	struct Function_LAI_Luautils_TestLongJmpLimitation_Param
	{
	public:

		struct UObject* ContextObj; // 0x00(0x08)
	};

	struct Function_LAI_SluaTestCase_TwoArgs_Param
	{
	public:

		struct FString A; // 0x00(0x10)
		int32_t B; // 0x10(0x04)
		float C; // 0x14(0x04)
		struct FString D; // 0x18(0x10)
		struct UObject* Widget; // 0x28(0x08)
	};

	struct Function_LAI_TestBindUserWidget_TestReturnSelf_Param
	{
	public:

		struct UTestBindUserWidget* ReturnValue; // 0x00(0x08)
	};

	struct Function_LAI_WidgetAnimationUtil_StopAllWidgetAnimations_Param
	{
	public:

		struct UUserWidget* UserWidget; // 0x00(0x08)
	};

	struct Function_LAI_WidgetUtil_TryAddChild_Param
	{
	public:

		struct UWidget* TargetWidget; // 0x00(0x08)
		struct UWidget* ChildWidget; // 0x08(0x08)
		struct FString ReturnValue; // 0x10(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
