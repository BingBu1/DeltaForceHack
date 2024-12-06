
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class WebBrowserWidget.WebBrowser
// Size: 0x1b0 (Inherited: 0x168)
class UWebBrowser : public UWidget {
public:

	/*struct FMulticastInlineDelegate*/char OnUrlChanged[0x10]; // 0x168(0x10)
	/*struct FMulticastInlineDelegate*/char OnBeforePopup[0x10]; // 0x178(0x10)
	struct FString InitialURL; // 0x188(0x10)
	bool bSupportsTransparency; // 0x198(0x01)
	char pad_199[0x17]; // 0x199(0x17)

	void OnUrlChanged__DelegateSignature(struct FText& Text); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class WebBrowserWidget.WebBrowserAssetManager
// Size: 0x80 (Inherited: 0x30)
class UWebBrowserAssetManager : public UObject {
public:

	/*struct TSoftObjectPtr<UMaterial>*/char DefaultMaterial[0x28]; // 0x30(0x28)
	char pad_58[0x28]; // 0x58(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
