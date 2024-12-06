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
	struct Function_GPUserInterfaceCore_GPUINavigationManager_Get_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct UGPUINavigationManager* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPUserInterfaceCore_GPUINavigationUtils_TryAutoFocus_Param
	{
	public:

		uint32_t UserIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UUserWidget* RootWidget; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct DelegateFunction_GPUserInterfaceCore_LuaUIBaseView_UserWidgetDelegate__DelegateSignature_Param
	{
	public:

	};

	struct Function_GPUserInterfaceCore_DFNavigationSelectorBase_Unbind_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
