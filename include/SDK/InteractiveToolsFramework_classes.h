
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class InteractiveToolsFramework.GizmoConstantAxisSource
// Size: 0x50 (Inherited: 0x30)
class UGizmoConstantAxisSource : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FVector Origin; // 0x38(0x0c)
	struct FVector Direction; // 0x44(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// Size: 0x68 (Inherited: 0x30)
class UGizmoConstantFrameAxisSource : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FVector Origin; // 0x38(0x0c)
	struct FVector Direction; // 0x44(0x0c)
	struct FVector TangentX; // 0x50(0x0c)
	struct FVector TangentY; // 0x5c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoWorldAxisSource
// Size: 0x48 (Inherited: 0x30)
class UGizmoWorldAxisSource : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FVector Origin; // 0x38(0x0c)
	int32_t AxisIndex; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoComponentAxisSource
// Size: 0x48 (Inherited: 0x30)
class UGizmoComponentAxisSource : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct USceneComponent* Component; // 0x38(0x08)
	int32_t AxisIndex; // 0x40(0x04)
	bool bLocalAxes; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoTransformSource
// Size: 0x30 (Inherited: 0x30)
class UGizmoTransformSource : public UInterface {
public:


	void SetTransform(struct FTransform& NewTransform); // Function InteractiveToolsFramework.GizmoTransformSource.SetTransform // (Native|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoAxisSource
// Size: 0x30 (Inherited: 0x30)
class UGizmoAxisSource : public UInterface {
public:


	bool HasTangentVectors(); // Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors // (Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoClickTarget
// Size: 0x30 (Inherited: 0x30)
class UGizmoClickTarget : public UInterface {
public:


	void UpdateHoverState(bool bHovering); // Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState // (Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoStateTarget
// Size: 0x30 (Inherited: 0x30)
class UGizmoStateTarget : public UInterface {
public:


	void EndUpdate(); // Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoFloatParameterSource
// Size: 0x30 (Inherited: 0x30)
class UGizmoFloatParameterSource : public UInterface {
public:


	void SetParameter(float NewValue); // Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// Size: 0x30 (Inherited: 0x30)
class UGizmoVec2ParameterSource : public UInterface {
public:


	void SetParameter(struct FVector2D& NewValue); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter // (Native|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// Size: 0xc0 (Inherited: 0x30)
class UGizmoLambdaHitTarget : public UObject {
public:

	char pad_30[0x90]; // 0x30(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoComponentHitTarget
// Size: 0x80 (Inherited: 0x30)
class UGizmoComponentHitTarget : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct UPrimitiveComponent* Component; // 0x38(0x08)
	char pad_40[0x40]; // 0x40(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.InputBehaviorSet
// Size: 0x40 (Inherited: 0x30)
class UInputBehaviorSet : public UObject {
public:

	struct TArray<struct FBehaviorInfo> Behaviors; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.InputBehaviorSource
// Size: 0x30 (Inherited: 0x30)
class UInputBehaviorSource : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.InputRouter
// Size: 0xb8 (Inherited: 0x30)
class UInputRouter : public UObject {
public:

	bool bAutoInvalidateOnHover; // 0x30(0x01)
	bool bAutoInvalidateOnCapture; // 0x31(0x01)
	char pad_32[0xe]; // 0x32(0x0e)
	struct UInputBehaviorSet* ActiveInputBehaviors; // 0x40(0x08)
	char pad_48[0x70]; // 0x48(0x70)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.InteractionMechanic
// Size: 0x38 (Inherited: 0x30)
class UInteractionMechanic : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.InteractiveGizmoManager
// Size: 0xc0 (Inherited: 0x30)
class UInteractiveGizmoManager : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct FActiveGizmo> ActiveGizmos; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)
	struct TMap<struct FString, struct UInteractiveGizmoBuilder*> GizmoBuilders; // 0x60(0x50)
	char pad_B0[0x10]; // 0xb0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.ToolContextTransactionProvider
// Size: 0x30 (Inherited: 0x30)
class UToolContextTransactionProvider : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.InteractiveToolManager
// Size: 0x140 (Inherited: 0x30)
class UInteractiveToolManager : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct UInteractiveTool* ActiveLeftTool; // 0x38(0x08)
	struct UInteractiveTool* ActiveRightTool; // 0x40(0x08)
	char pad_48[0x50]; // 0x48(0x50)
	struct TMap<struct FString, struct UInteractiveToolBuilder*> ToolBuilders; // 0x98(0x50)
	char pad_E8[0x58]; // 0xe8(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.ToolFrameworkComponent
// Size: 0x30 (Inherited: 0x30)
class UToolFrameworkComponent : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.InteractiveToolsContext
// Size: 0xa0 (Inherited: 0x30)
class UInteractiveToolsContext : public UObject {
public:

	char pad_30[0x30]; // 0x30(0x30)
	struct UInputRouter* InputRouter; // 0x60(0x08)
	struct UInteractiveToolManager* ToolManager; // 0x68(0x08)
	struct UInteractiveGizmoManager* GizmoManager; // 0x70(0x08)
	/*struct TSoftClassPtr<UObject>*/char ToolManagerClass[0x28]; // 0x78(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoNilStateTarget
// Size: 0x38 (Inherited: 0x30)
class UGizmoNilStateTarget : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// Size: 0xc0 (Inherited: 0x30)
class UGizmoLambdaStateTarget : public UObject {
public:

	char pad_30[0x90]; // 0x30(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// Size: 0x60 (Inherited: 0x30)
class UGizmoObjectModifyStateTarget : public UObject {
public:

	char pad_30[0x30]; // 0x30(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// Size: 0xf0 (Inherited: 0x30)
class UGizmoTransformChangeStateTarget : public UObject {
public:

	char pad_30[0x28]; // 0x30(0x28)
	/*struct TScriptInterface<IToolContextTransactionProvider>*/char TransactionManager[0x10]; // 0x58(0x10)
	char pad_68[0x88]; // 0x68(0x88)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.TransformProxy
// Size: 0xf0 (Inherited: 0x30)
class UTransformProxy : public UObject {
public:

	char pad_30[0x48]; // 0x30(0x48)
	bool bRotatePerObject; // 0x78(0x01)
	bool bSetPivotMode; // 0x79(0x01)
	char pad_7A[0x16]; // 0x7a(0x16)
	struct FTransform SharedTransform; // 0x90(0x30)
	struct FTransform InitialSharedTransform; // 0xc0(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.InputBehavior
// Size: 0x38 (Inherited: 0x30)
class UInputBehavior : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// Size: 0x30 (Inherited: 0x30)
class UInteractiveGizmoBuilder : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.InteractiveGizmo
// Size: 0x40 (Inherited: 0x30)
class UInteractiveGizmo : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct UInputBehaviorSet* InputBehaviors; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.InteractiveToolPropertySet
// Size: 0x58 (Inherited: 0x30)
class UInteractiveToolPropertySet : public UObject {
public:

	char pad_30[0x18]; // 0x30(0x18)
	struct UObject* CachedProperties; // 0x48(0x08)
	bool bIsPropertySetEnabled; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.InteractiveTool
// Size: 0x88 (Inherited: 0x30)
class UInteractiveTool : public UObject {
public:

	char pad_30[0x20]; // 0x30(0x20)
	struct UInputBehaviorSet* InputBehaviors; // 0x50(0x08)
	struct TArray<struct UObject*> ToolPropertyObjects; // 0x58(0x10)
	char pad_68[0x20]; // 0x68(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.InteractiveToolBuilder
// Size: 0x30 (Inherited: 0x30)
class UInteractiveToolBuilder : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.InternalToolFrameworkActor
// Size: 0x378 (Inherited: 0x378)
class AInternalToolFrameworkActor : public AActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoBaseComponent
// Size: 0x580 (Inherited: 0x560)
class UGizmoBaseComponent : public UPrimitiveComponent {
public:

	struct FLinearColor Color; // 0x560(0x10)
	float HoverSizeMultiplier; // 0x570(0x04)
	float PixelHitDistanceThreshold; // 0x574(0x04)
	char pad_578[0x8]; // 0x578(0x08)

	void UpdateWorldLocalState(bool bWorldIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// Size: 0x50 (Inherited: 0x30)
class UGizmoBaseFloatParameterSource : public UObject {
public:

	char pad_30[0x20]; // 0x30(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// Size: 0x50 (Inherited: 0x30)
class UGizmoBaseVec2ParameterSource : public UObject {
public:

	char pad_30[0x20]; // 0x30(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.SelectionSet
// Size: 0x48 (Inherited: 0x30)
class USelectionSet : public UObject {
public:

	char pad_30[0x18]; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoBaseTransformSource
// Size: 0x50 (Inherited: 0x30)
class UGizmoBaseTransformSource : public UObject {
public:

	char pad_30[0x20]; // 0x30(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.AnyButtonInputBehavior
// Size: 0x80 (Inherited: 0x38)
class UAnyButtonInputBehavior : public UInputBehavior {
public:

	char pad_38[0x48]; // 0x38(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// Size: 0x120 (Inherited: 0x38)
class UKeyAsModifierInputBehavior : public UInputBehavior {
public:

	char pad_38[0xe8]; // 0x38(0xe8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.MouseHoverBehavior
// Size: 0xa0 (Inherited: 0x38)
class UMouseHoverBehavior : public UInputBehavior {
public:

	char pad_38[0x68]; // 0x38(0x68)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// Size: 0x30 (Inherited: 0x30)
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// Size: 0x30 (Inherited: 0x30)
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// Size: 0x30 (Inherited: 0x30)
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.IntervalGizmoBuilder
// Size: 0xc0 (Inherited: 0x30)
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder {
public:

	char pad_30[0x90]; // 0x30(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// Size: 0x30 (Inherited: 0x30)
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.TransformGizmoBuilder
// Size: 0xc0 (Inherited: 0x30)
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder {
public:

	char pad_30[0x90]; // 0x30(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.AxisAngleGizmo
// Size: 0xf8 (Inherited: 0x40)
class UAxisAngleGizmo : public UInteractiveGizmo {
public:

	char pad_40[0x10]; // 0x40(0x10)
	/*struct TScriptInterface<IGizmoAxisSource>*/char AxisSource[0x10]; // 0x50(0x10)
	/*struct TScriptInterface<IGizmoFloatParameterSource>*/char AngleSource[0x10]; // 0x60(0x10)
	/*struct TScriptInterface<IGizmoClickTarget>*/char HitTarget[0x10]; // 0x70(0x10)
	/*struct TScriptInterface<IGizmoStateTarget>*/char StateTarget[0x10]; // 0x80(0x10)
	bool bInInteraction; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FVector RotationOrigin; // 0x94(0x0c)
	struct FVector RotationAxis; // 0xa0(0x0c)
	struct FVector RotationPlaneX; // 0xac(0x0c)
	struct FVector RotationPlaneY; // 0xb8(0x0c)
	struct FVector InteractionStartPoint; // 0xc4(0x0c)
	struct FVector InteractionCurPoint; // 0xd0(0x0c)
	float InteractionStartAngle; // 0xdc(0x04)
	float InteractionCurAngle; // 0xe0(0x04)
	char pad_E4[0x14]; // 0xe4(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.AxisPositionGizmo
// Size: 0xe0 (Inherited: 0x40)
class UAxisPositionGizmo : public UInteractiveGizmo {
public:

	char pad_40[0x10]; // 0x40(0x10)
	/*struct TScriptInterface<IGizmoAxisSource>*/char AxisSource[0x10]; // 0x50(0x10)
	/*struct TScriptInterface<IGizmoFloatParameterSource>*/char ParameterSource[0x10]; // 0x60(0x10)
	/*struct TScriptInterface<IGizmoClickTarget>*/char HitTarget[0x10]; // 0x70(0x10)
	/*struct TScriptInterface<IGizmoStateTarget>*/char StateTarget[0x10]; // 0x80(0x10)
	bool bEnableSignedAxis; // 0x90(0x01)
	bool bInInteraction; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	struct FVector InteractionOrigin; // 0x94(0x0c)
	struct FVector InteractionAxis; // 0xa0(0x0c)
	struct FVector InteractionStartPoint; // 0xac(0x0c)
	struct FVector InteractionCurPoint; // 0xb8(0x0c)
	float InteractionStartParameter; // 0xc4(0x04)
	float InteractionCurParameter; // 0xc8(0x04)
	float ParameterSign; // 0xcc(0x04)
	char pad_D0[0x10]; // 0xd0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.BrushStampIndicator
// Size: 0xb8 (Inherited: 0x40)
class UBrushStampIndicator : public UInteractiveGizmo {
public:

	float BrushRadius; // 0x40(0x04)
	float BrushFalloff; // 0x44(0x04)
	struct FVector BrushPosition; // 0x48(0x0c)
	struct FVector BrushNormal; // 0x54(0x0c)
	bool bDrawIndicatorLines; // 0x60(0x01)
	bool bDrawRadiusCircle; // 0x61(0x01)
	bool bDrawFalloffCircle; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	int32_t SampleStepCount; // 0x64(0x04)
	struct FLinearColor LineColor; // 0x68(0x10)
	float LineThickness; // 0x78(0x04)
	bool bDepthTested; // 0x7c(0x01)
	bool bDrawSecondaryLines; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	float SecondaryLineThickness; // 0x80(0x04)
	struct FLinearColor SecondaryLineColor; // 0x84(0x10)
	char pad_94[0x4]; // 0x94(0x04)
	struct UPrimitiveComponent* AttachedComponent; // 0x98(0x08)
	char pad_A0[0x18]; // 0xa0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.IntervalGizmo
// Size: 0x140 (Inherited: 0x40)
class UIntervalGizmo : public UInteractiveGizmo {
public:

	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
	struct UTransformProxy* TransformProxy; // 0x58(0x08)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0x60(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0x70(0x10)
	char pad_80[0x18]; // 0x80(0x18)
	struct UGizmoComponentAxisSource* AxisYSource; // 0x98(0x08)
	struct UGizmoComponentAxisSource* AxisZSource; // 0xa0(0x08)
	char pad_A8[0x98]; // 0xa8(0x98)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.PlanePositionGizmo
// Size: 0x108 (Inherited: 0x40)
class UPlanePositionGizmo : public UInteractiveGizmo {
public:

	char pad_40[0x10]; // 0x40(0x10)
	/*struct TScriptInterface<IGizmoAxisSource>*/char AxisSource[0x10]; // 0x50(0x10)
	/*struct TScriptInterface<IGizmoVec2ParameterSource>*/char ParameterSource[0x10]; // 0x60(0x10)
	/*struct TScriptInterface<IGizmoClickTarget>*/char HitTarget[0x10]; // 0x70(0x10)
	/*struct TScriptInterface<IGizmoStateTarget>*/char StateTarget[0x10]; // 0x80(0x10)
	bool bEnableSignedAxis; // 0x90(0x01)
	bool bFlipX; // 0x91(0x01)
	bool bFlipY; // 0x92(0x01)
	bool bInInteraction; // 0x93(0x01)
	struct FVector InteractionOrigin; // 0x94(0x0c)
	struct FVector InteractionNormal; // 0xa0(0x0c)
	struct FVector InteractionAxisX; // 0xac(0x0c)
	struct FVector InteractionAxisY; // 0xb8(0x0c)
	struct FVector InteractionStartPoint; // 0xc4(0x0c)
	struct FVector InteractionCurPoint; // 0xd0(0x0c)
	struct FVector2D InteractionStartParameter; // 0xdc(0x08)
	struct FVector2D InteractionCurParameter; // 0xe4(0x08)
	struct FVector2D ParameterSigns; // 0xec(0x08)
	char pad_F4[0x14]; // 0xf4(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.TransformGizmo
// Size: 0x190 (Inherited: 0x40)
class UTransformGizmo : public UInteractiveGizmo {
public:

	char pad_40[0x8]; // 0x40(0x08)
	struct UTransformProxy* ActiveTarget; // 0x48(0x08)
	bool bSnapToWorldGrid; // 0x50(0x01)
	bool bUseContextCoordinateSystem; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	enum class EToolContextCoordinateSystem CurrentCoordinateSystem; // 0x54(0x04)
	char pad_58[0x98]; // 0x58(0x98)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0xf0(0x10)
	struct TArray<struct UPrimitiveComponent*> NonuniformScaleComponents; // 0x100(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0x110(0x10)
	char pad_120[0x10]; // 0x120(0x10)
	struct UGizmoConstantFrameAxisSource* CameraAxisSource; // 0x130(0x08)
	struct UGizmoComponentAxisSource* AxisXSource; // 0x138(0x08)
	struct UGizmoComponentAxisSource* AxisYSource; // 0x140(0x08)
	struct UGizmoComponentAxisSource* AxisZSource; // 0x148(0x08)
	struct UGizmoComponentAxisSource* UnitAxisXSource; // 0x150(0x08)
	struct UGizmoComponentAxisSource* UnitAxisYSource; // 0x158(0x08)
	struct UGizmoComponentAxisSource* UnitAxisZSource; // 0x160(0x08)
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x168(0x08)
	struct UGizmoScaledTransformSource* ScaledTransformSource; // 0x170(0x08)
	char pad_178[0x18]; // 0x178(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.BrushBaseProperties
// Size: 0x70 (Inherited: 0x58)
class UBrushBaseProperties : public UInteractiveToolPropertySet {
public:

	float BrushSize; // 0x58(0x04)
	bool bSpecifyRadius; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float BrushRadius; // 0x60(0x04)
	float BrushStrength; // 0x64(0x04)
	float BrushFalloffAmount; // 0x68(0x04)
	bool bShowStrength; // 0x6c(0x01)
	bool bShowFalloff; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.SingleSelectionTool
// Size: 0x90 (Inherited: 0x88)
class USingleSelectionTool : public UInteractiveTool {
public:

	char pad_88[0x8]; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.ClickDragTool
// Size: 0x90 (Inherited: 0x88)
class UClickDragTool : public UInteractiveTool {
public:

	char pad_88[0x8]; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.MultiSelectionTool
// Size: 0x98 (Inherited: 0x88)
class UMultiSelectionTool : public UInteractiveTool {
public:

	char pad_88[0x10]; // 0x88(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.SingleClickTool
// Size: 0x90 (Inherited: 0x88)
class USingleClickTool : public UInteractiveTool {
public:

	char pad_88[0x8]; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.ClickDragToolBuilder
// Size: 0x30 (Inherited: 0x30)
class UClickDragToolBuilder : public UInteractiveToolBuilder {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// Size: 0x38 (Inherited: 0x30)
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.SingleClickToolBuilder
// Size: 0x30 (Inherited: 0x30)
class USingleClickToolBuilder : public UInteractiveToolBuilder {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoActor
// Size: 0x378 (Inherited: 0x378)
class AGizmoActor : public AInternalToolFrameworkActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoArrowComponent
// Size: 0x5a0 (Inherited: 0x580)
class UGizmoArrowComponent : public UGizmoBaseComponent {
public:

	struct FVector Direction; // 0x580(0x0c)
	float gap; // 0x58c(0x04)
	float Length; // 0x590(0x04)
	float Thickness; // 0x594(0x04)
	char pad_598[0x8]; // 0x598(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoBoxComponent
// Size: 0x5c0 (Inherited: 0x580)
class UGizmoBoxComponent : public UGizmoBaseComponent {
public:

	struct FVector Origin; // 0x580(0x0c)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct FQuat Rotation; // 0x590(0x10)
	struct FVector Dimensions; // 0x5a0(0x0c)
	float LineThickness; // 0x5ac(0x04)
	bool bRemoveHiddenLines; // 0x5b0(0x01)
	bool bEnableAxisFlip; // 0x5b1(0x01)
	char pad_5B2[0xe]; // 0x5b2(0x0e)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoCircleComponent
// Size: 0x5a0 (Inherited: 0x580)
class UGizmoCircleComponent : public UGizmoBaseComponent {
public:

	struct FVector Normal; // 0x580(0x0c)
	float radius; // 0x58c(0x04)
	float Thickness; // 0x590(0x04)
	int32_t NumSides; // 0x594(0x04)
	bool bViewAligned; // 0x598(0x01)
	bool bOnlyAllowFrontFacingHits; // 0x599(0x01)
	char pad_59A[0x6]; // 0x59a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoLineHandleComponent
// Size: 0x5b0 (Inherited: 0x580)
class UGizmoLineHandleComponent : public UGizmoBaseComponent {
public:

	struct FVector Normal; // 0x580(0x0c)
	float HandleSize; // 0x58c(0x04)
	float Thickness; // 0x590(0x04)
	struct FVector Direction; // 0x594(0x0c)
	float Length; // 0x5a0(0x04)
	bool bImageScale; // 0x5a4(0x01)
	char pad_5A5[0xb]; // 0x5a5(0x0b)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoRectangleComponent
// Size: 0x5b0 (Inherited: 0x580)
class UGizmoRectangleComponent : public UGizmoBaseComponent {
public:

	struct FVector DirectionX; // 0x580(0x0c)
	struct FVector DirectionY; // 0x58c(0x0c)
	float OffsetX; // 0x598(0x04)
	float OffsetY; // 0x59c(0x04)
	float LengthX; // 0x5a0(0x04)
	float LengthY; // 0x5a4(0x04)
	float Thickness; // 0x5a8(0x04)
	char SegmentFlags; // 0x5ac(0x01)
	char pad_5AD[0x3]; // 0x5ad(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// Size: 0x68 (Inherited: 0x50)
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource {
public:

	/*struct TScriptInterface<IGizmoFloatParameterSource>*/char FloatParameterSource[0x10]; // 0x50(0x10)
	float MinParameter; // 0x60(0x04)
	float MaxParameter; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// Size: 0x60 (Inherited: 0x50)
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource {
public:

	float Value; // 0x50(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// Size: 0x110 (Inherited: 0x50)
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource {
public:

	char pad_50[0x40]; // 0x50(0x40)
	/*struct TScriptInterface<IGizmoAxisSource>*/char AxisSource[0x10]; // 0x90(0x10)
	/*struct TScriptInterface<IGizmoTransformSource>*/char TransformSource[0x10]; // 0xa0(0x10)
	float Parameter; // 0xb0(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0xb4(0x08)
	struct FVector CurTranslationAxis; // 0xbc(0x0c)
	struct FVector CurTranslationOrigin; // 0xc8(0x0c)
	char pad_D4[0xc]; // 0xd4(0x0c)
	struct FTransform InitialTransform; // 0xe0(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// Size: 0xd0 (Inherited: 0x50)
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource {
public:

	/*struct TScriptInterface<IGizmoAxisSource>*/char AxisSource[0x10]; // 0x50(0x10)
	/*struct TScriptInterface<IGizmoTransformSource>*/char TransformSource[0x10]; // 0x60(0x10)
	float Angle; // 0x70(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0x74(0x08)
	struct FVector CurRotationAxis; // 0x7c(0x0c)
	struct FVector CurRotationOrigin; // 0x88(0x0c)
	char pad_94[0xc]; // 0x94(0x0c)
	struct FTransform InitialTransform; // 0xa0(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// Size: 0xd0 (Inherited: 0x50)
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource {
public:

	/*struct TScriptInterface<IGizmoAxisSource>*/char AxisSource[0x10]; // 0x50(0x10)
	/*struct TScriptInterface<IGizmoTransformSource>*/char TransformSource[0x10]; // 0x60(0x10)
	float ScaleMultiplier; // 0x70(0x04)
	float Parameter; // 0x74(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0x78(0x08)
	struct FVector CurScaleAxis; // 0x80(0x0c)
	struct FVector CurScaleOrigin; // 0x8c(0x0c)
	char pad_98[0x8]; // 0x98(0x08)
	struct FTransform InitialTransform; // 0xa0(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// Size: 0x68 (Inherited: 0x50)
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource {
public:

	struct FVector2D Value; // 0x50(0x08)
	struct FGizmoVec2ParameterChange LastChange; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// Size: 0x130 (Inherited: 0x50)
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource {
public:

	char pad_50[0x40]; // 0x50(0x40)
	/*struct TScriptInterface<IGizmoAxisSource>*/char AxisSource[0x10]; // 0x90(0x10)
	/*struct TScriptInterface<IGizmoTransformSource>*/char TransformSource[0x10]; // 0xa0(0x10)
	struct FVector2D Parameter; // 0xb0(0x08)
	struct FGizmoVec2ParameterChange LastChange; // 0xb8(0x10)
	struct FVector CurTranslationOrigin; // 0xc8(0x0c)
	struct FVector CurTranslationNormal; // 0xd4(0x0c)
	struct FVector CurTranslationAxisX; // 0xe0(0x0c)
	struct FVector CurTranslationAxisY; // 0xec(0x0c)
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FTransform InitialTransform; // 0x100(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// Size: 0xf0 (Inherited: 0x50)
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource {
public:

	/*struct TScriptInterface<IGizmoAxisSource>*/char AxisSource[0x10]; // 0x50(0x10)
	/*struct TScriptInterface<IGizmoTransformSource>*/char TransformSource[0x10]; // 0x60(0x10)
	float ScaleMultiplier; // 0x70(0x04)
	struct FVector2D Parameter; // 0x74(0x08)
	struct FGizmoVec2ParameterChange LastChange; // 0x7c(0x10)
	struct FVector CurScaleOrigin; // 0x8c(0x0c)
	struct FVector CurScaleNormal; // 0x98(0x0c)
	struct FVector CurScaleAxisX; // 0xa4(0x0c)
	struct FVector CurScaleAxisY; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FTransform InitialTransform; // 0xc0(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// Size: 0x130 (Inherited: 0x50)
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource {
public:

	char pad_50[0x40]; // 0x50(0x40)
	/*struct TScriptInterface<IGizmoAxisSource>*/char AxisSource[0x10]; // 0x90(0x10)
	/*struct TScriptInterface<IGizmoTransformSource>*/char TransformSource[0x10]; // 0xa0(0x10)
	float ScaleMultiplier; // 0xb0(0x04)
	struct FVector2D Parameter; // 0xb4(0x08)
	struct FGizmoVec2ParameterChange LastChange; // 0xbc(0x10)
	struct FVector CurScaleOrigin; // 0xcc(0x0c)
	struct FVector CurScaleNormal; // 0xd8(0x0c)
	struct FVector CurScaleAxisX; // 0xe4(0x0c)
	struct FVector CurScaleAxisY; // 0xf0(0x0c)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FTransform InitialTransform; // 0x100(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.MeshSelectionSet
// Size: 0x88 (Inherited: 0x48)
class UMeshSelectionSet : public USelectionSet {
public:

	struct TArray<int32_t> Vertices; // 0x48(0x10)
	struct TArray<int32_t> Edges; // 0x58(0x10)
	struct TArray<int32_t> Faces; // 0x68(0x10)
	struct TArray<int32_t> Groups; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// Size: 0x60 (Inherited: 0x50)
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource {
public:

	struct USceneComponent* Component; // 0x50(0x08)
	bool bModifyComponentOnTransform; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoScaledTransformSource
// Size: 0xe0 (Inherited: 0x50)
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource {
public:

	/*struct TScriptInterface<IGizmoTransformSource>*/char ChildTransformSource[0x10]; // 0x50(0x10)
	char pad_60[0x80]; // 0x60(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// Size: 0x58 (Inherited: 0x50)
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource {
public:

	struct UTransformProxy* Proxy; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.ClickDragInputBehavior
// Size: 0x140 (Inherited: 0x80)
class UClickDragInputBehavior : public UAnyButtonInputBehavior {
public:

	char pad_80[0xa0]; // 0x80(0xa0)
	bool bUpdateModifiersDuringDrag; // 0x120(0x01)
	char pad_121[0x1f]; // 0x121(0x1f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// Size: 0x130 (Inherited: 0x80)
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior {
public:

	char pad_80[0xb0]; // 0x80(0xb0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.SingleClickInputBehavior
// Size: 0x130 (Inherited: 0x80)
class USingleClickInputBehavior : public UAnyButtonInputBehavior {
public:

	char pad_80[0x40]; // 0x80(0x40)
	bool HitTestOnRelease; // 0xc0(0x01)
	char pad_C1[0x6f]; // 0xc1(0x6f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.MeshSurfacePointTool
// Size: 0xc8 (Inherited: 0x90)
class UMeshSurfacePointTool : public USingleSelectionTool {
public:

	char pad_90[0x38]; // 0x90(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.IntervalGizmoActor
// Size: 0x390 (Inherited: 0x378)
class AIntervalGizmoActor : public AGizmoActor {
public:

	struct UGizmoLineHandleComponent* UpIntervalComponent; // 0x378(0x08)
	struct UGizmoLineHandleComponent* DownIntervalComponent; // 0x380(0x08)
	struct UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x388(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.TransformGizmoActor
// Size: 0x3f8 (Inherited: 0x378)
class ATransformGizmoActor : public AGizmoActor {
public:

	struct UPrimitiveComponent* TranslateX; // 0x378(0x08)
	struct UPrimitiveComponent* TranslateY; // 0x380(0x08)
	struct UPrimitiveComponent* TranslateZ; // 0x388(0x08)
	struct UPrimitiveComponent* TranslateYZ; // 0x390(0x08)
	struct UPrimitiveComponent* TranslateXZ; // 0x398(0x08)
	struct UPrimitiveComponent* TranslateXY; // 0x3a0(0x08)
	struct UPrimitiveComponent* RotateX; // 0x3a8(0x08)
	struct UPrimitiveComponent* RotateY; // 0x3b0(0x08)
	struct UPrimitiveComponent* RotateZ; // 0x3b8(0x08)
	struct UPrimitiveComponent* UniformScale; // 0x3c0(0x08)
	struct UPrimitiveComponent* AxisScaleX; // 0x3c8(0x08)
	struct UPrimitiveComponent* AxisScaleY; // 0x3d0(0x08)
	struct UPrimitiveComponent* AxisScaleZ; // 0x3d8(0x08)
	struct UPrimitiveComponent* PlaneScaleYZ; // 0x3e0(0x08)
	struct UPrimitiveComponent* PlaneScaleXZ; // 0x3e8(0x08)
	struct UPrimitiveComponent* PlaneScaleXY; // 0x3f0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.LocalClickDragInputBehavior
// Size: 0x280 (Inherited: 0x140)
class ULocalClickDragInputBehavior : public UClickDragInputBehavior {
public:

	char pad_140[0x140]; // 0x140(0x140)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class InteractiveToolsFramework.BaseBrushTool
// Size: 0x1c0 (Inherited: 0xc8)
class UBaseBrushTool : public UMeshSurfacePointTool {
public:

	struct UBrushBaseProperties* BrushProperties; // 0xc8(0x08)
	bool bInBrushStroke; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	struct FBrushStampData LastBrushStamp; // 0xd4(0xa8)
	char pad_17C[0x14]; // 0x17c(0x14)
	/*struct TSoftClassPtr<UObject>*/char PropertyClass[0x28]; // 0x190(0x28)
	struct UBrushStampIndicator* BrushStampIndicator; // 0x1b8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
