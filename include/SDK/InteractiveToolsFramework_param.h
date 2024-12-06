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
	struct Function_InteractiveToolsFramework_GizmoTransformSource_SetTransform_Param
	{
	public:

		struct FTransform NewTransform; // 0x00(0x30)
	};

	struct Function_InteractiveToolsFramework_GizmoAxisSource_HasTangentVectors_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_InteractiveToolsFramework_GizmoClickTarget_UpdateHoverState_Param
	{
	public:

		bool bHovering; // 0x00(0x01)
	};

	struct Function_InteractiveToolsFramework_GizmoStateTarget_EndUpdate_Param
	{
	public:

	};

	struct Function_InteractiveToolsFramework_GizmoFloatParameterSource_SetParameter_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_InteractiveToolsFramework_GizmoVec2ParameterSource_SetParameter_Param
	{
	public:

		struct FVector2D NewValue; // 0x00(0x08)
	};

	struct Function_InteractiveToolsFramework_GizmoBaseComponent_UpdateWorldLocalState_Param
	{
	public:

		bool bWorldIn; // 0x00(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
