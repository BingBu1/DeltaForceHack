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
	struct Function_Landscape_LandscapeBlueprintBrushBase_RequestLandscapeUpdate_Param
	{
	public:

	};

	struct Function_Landscape_LandscapeComponent_GetMaterialInstanceDynamic_Param
	{
	public:

		int32_t InIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UMaterialInstanceDynamic* ReturnValue; // 0x08(0x08)
	};

	struct Function_Landscape_LandscapeSplinesComponent_GetSplineMeshComponents_Param
	{
	public:

		struct TArray<struct USplineMeshComponent*> ReturnValue; // 0x00(0x10)
	};

	struct Function_Landscape_LandscapeProxy_SetLandscapeMaterialVectorParameterValue_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct FLinearColor Value; // 0x08(0x10)
	};

	struct Function_Landscape_LandscapeHeightfieldCollisionComponent_GetRenderComponent_Param
	{
	public:

		struct ULandscapeComponent* ReturnValue; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
