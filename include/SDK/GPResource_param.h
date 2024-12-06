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
	struct Function_GPResource_FXComponentManager_Get_Param
	{
	public:

		struct UWorld* WorldContext; // 0x00(0x08)
		struct UFXComponentManager* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPResource_FXResourceContainerComponent_SetResourceFX_Param
	{
	public:

		struct FName ResourceFXId; // 0x00(0x08)
		bool bInAutoActive; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
