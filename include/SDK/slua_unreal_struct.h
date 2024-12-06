
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum slua_unreal.ELuaDelegateType
enum class ELuaDelegateType : int {
	EDefault = 0,
	ELuaDelegate = 1,
	ELuaMultiDelegate = 2,
	ELuaDelegateType_MAX = 3
};

// Enum slua_unreal.EPropertyClass
enum class EPropertyClass : int {
	Byte = 0,
	Int8 = 1,
	Int16 = 2,
	Int = 3,
	Int64 = 4,
	UInt16 = 5,
	UInt32 = 6,
	UInt64 = 7,
	UnsizedInt = 8,
	UnsizedUInt = 9,
	Float = 10,
	Double = 11,
	Bool = 12,
	SoftClass = 13,
	WeakObject = 14,
	LazyObject = 15,
	SoftObject = 16,
	Class = 17,
	Object = 18,
	Interface = 19,
	Name = 20,
	Str = 21,
	Array = 22,
	Map = 23,
	Set = 24,
	Struct = 25,
	Delegate = 26,
	MulticastDelegate = 27,
	Text = 28,
	Enum = 29,
	EPropertyClass_MAX = 30
};

// ScriptStruct slua_unreal.LuaBPVar
// Size: 0x20 (Inherited: 0x00)
struct FLuaBPVar {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
