
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct WebBrowser.WebJSCallbackBase
// Size: 0x20 (Inherited: 0x00)
struct FWebJSCallbackBase {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct WebBrowser.WebJSResponse
// Size: 0x20 (Inherited: 0x20)
struct FWebJSResponse : public FWebJSCallbackBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct WebBrowser.WebJSFunction
// Size: 0x20 (Inherited: 0x20)
struct FWebJSFunction : public FWebJSCallbackBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
