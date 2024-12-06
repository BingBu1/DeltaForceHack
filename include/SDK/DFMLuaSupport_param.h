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
	struct Function_DFMLuaSupport_LuaDebugUtil_ForceSleepGamethread_Param
	{
	public:

		float SleepTime; // 0x00(0x04)
	};

	struct Function_DFMLuaSupport_LuaExtension_TestMofidyAnimation_Param
	{
	public:

		struct UWidgetAnimation* Animation; // 0x00(0x08)
		struct UObject* BindObj; // 0x08(0x08)
		struct FName TrackName; // 0x10(0x08)
		int32_t SectionIndex; // 0x18(0x04)
		struct FName PropertyName; // 0x1c(0x08)
		int32_t FrameIndex; // 0x24(0x04)
		struct TArray<float> Vars; // 0x28(0x10)
		bool ReturnValue; // 0x38(0x01)
	};

	struct Function_DFMLuaSupport_LuaItemDragConfigUtil_UpdateMaxDragPointSampleNum_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
	};

	struct Function_DFMLuaSupport_LuaLevelLoader_RequestUnloadStreamLevel_Param
	{
	public:

		struct FName UnloadLevelName; // 0x00(0x08)
		bool bShouldBlockOnUnload; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		int32_t ReturnValue; // 0x0c(0x04)
	};

	struct Function_DFMLuaSupport_LuaResourceConverter_IsEmptyTexture_Param
	{
	public:

		struct UTexture* Tex; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_DFMLuaSupport_LuaResourceLoader_RequestAsyncLoad_Param
	{
	public:

		struct TArray<struct FString> InPaths; // 0x00(0x10)
		int32_t Priority; // 0x10(0x04)
		int32_t ReturnValue; // 0x14(0x04)
	};

	struct Function_DFMLuaSupport_LuaSubsystem_TestObjectWarning_Param
	{
	public:

		struct TArray<struct FString> Args; // 0x00(0x10)
		struct UWorld* World; // 0x10(0x08)
	};

	struct Function_DFMLuaSupport_LuaWidgetCreateManager_SetMaxPreateNumByUIId_Param
	{
	public:

		int32_t UINavId; // 0x00(0x04)
		int32_t NewMaxNum; // 0x04(0x04)
	};

	struct Function_DFMLuaSupport_OnlineLuaProcess_OnlineLuaGetWorld_Param
	{
	public:

		struct UWorld* ReturnValue; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
