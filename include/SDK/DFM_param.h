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
	struct Function_DFM_DFMGameInstance_StartLocalDS_Param
	{
	public:

		struct FString MapName; // 0x00(0x10)
		struct FString PlayerIds; // 0x10(0x10)
	};

	struct Function_DFM_POIHUDView_SetHudAndAutoHide_Param
	{
	public:

		struct FString TextFirst; // 0x00(0x10)
		struct FString TextSecond; // 0x10(0x10)
	};

	struct Function_DFM_SlatePreDepthMeshComponent_SetMeshTriangles_Param
	{
	public:

		struct TArray<struct FSlatePreDepthMeshTriangle> Triangles; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
