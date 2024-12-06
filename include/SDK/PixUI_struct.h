
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum PixUI.EPxKeyboardTypes
enum class EPxKeyboardTypes : int {
	Default = 0,
	Number = 1,
	Password = 2,
	EPxKeyboardTypes_MAX = 3
};

// Enum PixUI.EPxWidgetTransformType
enum class EPxWidgetTransformType : int {
	MoveBy = 0,
	MoveTo = 1,
	ResizeBy = 2,
	ResizeTo = 3,
	ScrollBy = 4,
	ScrollTo = 5,
	Count = 6,
	EPxWidgetTransformType_MAX = 7
};

// Enum PixUI.EPxLogLevels
enum class EPxLogLevels : int {
	Log = 0,
	Warning = 1,
	Error = 2,
	Debug = 3,
	Count = 4,
	EPxLogLevels_MAX = 5
};

// Enum PixUI.EPxLogGroups
enum class EPxLogGroups : int {
	Core = 0,
	Plugin = 1,
	Script = 2,
	Profiler = 3,
	Count = 4,
	EPxLogGroups_MAX = 5
};

// Enum PixUI.EPxDynamicTextureUpdateMode
enum class EPxDynamicTextureUpdateMode : int {
	UpdateRegion = 0,
	UpdateBulkData = 1,
	EPxDynamicTextureUpdateMode_MAX = 2
};

// Enum PixUI.EPxKeyEventType
enum class EPxKeyEventType : int {
	KeyDown = 0,
	KeyUp = 1,
	EPxKeyEventType_MAX = 2
};

// Enum PixUI.EPxTouchType
enum class EPxTouchType : int {
	TouchStart = 0,
	TouchMoved = 1,
	TouchEnd = 2,
	TouchCanceled = 3,
	EPxTouchType_MAX = 4
};

// Enum PixUI.EPxDebugInfo
enum class EPxDebugInfo : int {
	ShowMouse = 0,
	Count = 1,
	EPxDebugInfo_MAX = 2
};

// Enum PixUI.EPxWidgetBatchType
enum class EPxWidgetBatchType : int {
	Default = 0,
	Auto = 1,
	NoBatch = 2,
	EPxWidgetBatchType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
