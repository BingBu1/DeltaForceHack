
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ScreenCapture.IScreenCapture
// Size: 0x40 (Inherited: 0x30)
class UIScreenCapture : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnScreenCaptureDelegate[0x10]; // 0x30(0x10)

	void OnScreenCaptureDelegate__DelegateSignature(); // DelegateFunction ScreenCapture.IScreenCapture.OnScreenCaptureDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ScreenCapture.AndroidScreenCapture
// Size: 0x40 (Inherited: 0x40)
class UAndroidScreenCapture : public UIScreenCapture {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ScreenCapture.IOSScreenCapture
// Size: 0x40 (Inherited: 0x40)
class UIOSScreenCapture : public UIScreenCapture {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
