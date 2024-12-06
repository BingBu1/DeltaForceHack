
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : int {
	Begin = 0,
	Continue = 1,
	End = 2,
	Ignore = 3,
	EInputCaptureState_MAX = 4
};

// Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : int {
	Begin = 0,
	Ignore = 1,
	EInputCaptureRequestType_MAX = 2
};

// Enum InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : int {
	None = 0,
	Left = 1,
	Right = 2,
	Both = 3,
	Any = 4,
	EInputCaptureSide_MAX = 5
};

// Enum InteractiveToolsFramework.EInputDevices
enum class EInputDevices : int {
	None = 0,
	Keyboard = 1,
	Mouse = 2,
	Gamepad = 3,
	OculusTouch = 4,
	HTCViveWands = 5,
	AnySpatialDevice = 6,
	TabletFingers = 7,
	EInputDevices_MAX = 8
};

// Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : int {
	None = 0,
	TranslateAxisX = 1,
	TranslateAxisY = 2,
	TranslateAxisZ = 3,
	TranslateAllAxes = 4,
	TranslatePlaneXY = 5,
	TranslatePlaneXZ = 6,
	TranslatePlaneYZ = 7,
	TranslateAllPlanes = 8,
	RotateAxisX = 9,
	RotateAxisY = 10,
	RotateAxisZ = 11,
	RotateAllAxes = 12,
	ScaleAxisX = 13,
	ScaleAxisY = 14,
	ScaleAxisZ = 15,
	ScaleAllAxes = 16,
	ScalePlaneYZ = 17,
	ScalePlaneXZ = 18,
	ScalePlaneXY = 19,
	ScaleAllPlanes = 20,
	ScaleUniform = 21,
	StandardTranslateRotate = 22,
	TranslateRotateUniformScale = 23,
	FullTranslateRotateScale = 24,
	ETransformGizmoSubElements_MAX = 25
};

// Enum InteractiveToolsFramework.EToolChangeTrackingMode
enum class EToolChangeTrackingMode : int {
	NoChangeTracking = 0,
	UndoToExit = 1,
	FullUndoRedo = 2,
	EToolChangeTrackingMode_MAX = 3
};

// Enum InteractiveToolsFramework.EToolSide
enum class EToolSide : int {
	Left = 0,
	Mouse = 1,
	Right = 2,
	EToolSide_MAX = 3
};

// Enum InteractiveToolsFramework.ESelectedObjectsModificationType
enum class ESelectedObjectsModificationType : int {
	Replace = 0,
	Add = 1,
	Remove = 2,
	Clear = 3,
	ESelectedObjectsModificationType_MAX = 4
};

// Enum InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : int {
	Internal = 0,
	UserMessage = 1,
	UserNotification = 2,
	UserWarning = 3,
	UserError = 4,
	EToolMessageLevel_MAX = 5
};

// Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : int {
	World = 0,
	Local = 1,
	EToolContextCoordinateSystem_MAX = 2
};

// Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : int {
	VertexColorMaterial = 0,
	EStandardToolContextMaterials_MAX = 1
};

// Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : int {
	None = 0,
	MeshVertex = 1,
	MeshEdge = 2,
	Grid = 3,
	All = 4,
	ESceneSnapQueryTargetType_MAX = 5
};

// Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : int {
	Position = 0,
	ESceneSnapQueryType_MAX = 1
};

// ScriptStruct InteractiveToolsFramework.BrushStampData
// Size: 0xa8 (Inherited: 0x00)
struct FBrushStampData {
public:

	char pad_0[0xa8]; // 0x00(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct InteractiveToolsFramework.BehaviorInfo
// Size: 0x20 (Inherited: 0x00)
struct FBehaviorInfo {
public:

	struct UInputBehavior* Behavior; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct InteractiveToolsFramework.InputRayHit
// Size: 0x28 (Inherited: 0x00)
struct FInputRayHit {
public:

	char pad_0[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct InteractiveToolsFramework.ActiveGizmo
// Size: 0x30 (Inherited: 0x00)
struct FActiveGizmo {
public:

	char pad_0[0x30]; // 0x00(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
// Size: 0x08 (Inherited: 0x00)
struct FGizmoFloatParameterChange {
public:

	float InitialValue; // 0x00(0x04)
	float CurrentValue; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
// Size: 0x10 (Inherited: 0x00)
struct FGizmoVec2ParameterChange {
public:

	struct FVector2D InitialValue; // 0x00(0x08)
	struct FVector2D CurrentValue; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
