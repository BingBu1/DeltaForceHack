
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DeepLink.DeepLink
// Size: 0x90 (Inherited: 0x30)
class UDeepLink : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnDeepLinkDelegate[0x10]; // 0x30(0x10)
	struct TMap<struct FString, bool> DeepLinkMap; // 0x40(0x50)

	void OnDeepLinkDelegate__DelegateSignature(struct FString DeepLinkUrl); // DelegateFunction DeepLink.DeepLink.OnDeepLinkDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
